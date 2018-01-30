#include <boost/lambda/lambda.hpp>
#include <boost/regex.hpp>
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <boost/format.hpp>
#include <boost/date_time.hpp>
#include <boost/process.hpp>

using namespace std;
using namespace boost::lambda;
using namespace boost::process;

typedef istream_iterator<int> in;

int main()
{

    /// Load configurations

    /// Launch runtime

    ipstream pipe_stream;
    child c("g++ --version", std_out > pipe_stream);

    string line;

    while (pipe_stream && getline(pipe_stream, line) && !line.empty())
        cerr << line << endl;

    c.wait();

    /*const boost::posix_time::ptime now = boost::posix_time::second_clock::local_time();

    const boost::wformat f = boost::wformat( L"%02d.%02d.%s  %02d:%02d" )
                    % now.date().year_month_day().day.as_number()
                    % now.date().year_month_day().month.as_number()
                    % now.date().year_month_day().year
                    % now.time_of_day().hours()
                    % now.time_of_day().minutes();

    std::wcout << f.str() << std::endl;*/

    /*string line;
    boost::regex pat( "^Subject: (Re: |Aw: )*(.*)" );

    while (cin)
    {
        getline(cin, line);
        boost::smatch matches;
        if (boost::regex_match(line, matches, pat))
            cout << matches[2] << endl;
    }*/

    //for_each(in(cin), in(), cout << (_1 * 3) << " " );
    /*cout << "Hello world!" << endl;

    string c;
    cin >> c;*/

    return 0;
}

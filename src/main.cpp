//#include <boost/lambda/lambda.hpp>
//#include <boost/regex.hpp>
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;
//using namespace boost::lambda;

//typedef istream_iterator<int> in;

int main()
{

    /*std::string line;
    boost::regex pat( "^Subject: (Re: |Aw: )*(.*)" );

    while (std::cin)
    {
        std::getline(std::cin, line);
        boost::smatch matches;
        if (boost::regex_match(line, matches, pat))
            std::cout << matches[2] << std::endl;
    }*/

    //for_each(in(cin), in(), cout << (_1 * 3) << " " );

    cout << "Hello world!" << endl;

    string c;
    cin >> c;

    return 0;
}

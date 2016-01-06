//example of normal distribution draw; should work assuming boost is installed;
#include <boost/random.hpp>
#include <boost/random/normal_distribution.hpp>

int main()
{
  boost::mt19937 rng; // I don't seed it on purpouse (it's not relevant)

  boost::normal_distribution<> nd(0.0, 1.0);

  boost::variate_generator<boost::mt19937&,
                           boost::normal_distribution<> > var_nor(rng, nd);

  int i = 0; for (; i < 10; ++i)
  {
    double d = var_nor();
    std::cout << d << std::endl;
  }
}

//example of normal distribution draw; should work assuming boost is installed;
#include <boost/random.hpp>
#include <boost/random/normal_distribution.hpp>

int main()
{
  typedef boost::mt19937 RNGType; // I don't seed it on purpouse (it's not relevant)
  RNGType rng( time(0) );
  boost::normal_distribution<> nd(0.0, 1.0);

  boost::variate_generator<boost::mt19937&,
                           boost::normal_distribution<> > var_nor(RNGType, nd);

  int i = 0; for (; i < 10; ++i)
  {
    double d = var_nor();
    std::cout << d << std::endl;
  }
}

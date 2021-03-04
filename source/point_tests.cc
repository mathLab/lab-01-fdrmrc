#include <deal.II/base/point.h>

#include <gtest/gtest.h>

using namespace dealii;


TEST(Pythagoras, Norm)
{
  Point<2> x(3, 4);
  ASSERT_EQ(x.norm(), 5);
  x[0] = 3.0;
  x[1] = 4.0;
  // ASSERT_EQ(x.square(), 5);
  // EXPECT_GT(x.norm(),2); 
}


TEST(Pythagoras, Distance)
{
  Point<2> x(4, 5);
  Point<2> y(1, 1);
  ASSERT_EQ(x.distance(y), 5);
}


TEST(Pythagoras, ScalarProduct)
{
  Point<2> x(3, 4);
  ASSERT_EQ(x * x, 25);
}

TEST(Pythagoras, ScalarProduct_again)
{
  Point<2> x(10, 10);
  ASSERT_EQ(x * x, 200);
}

TEST(Pythagoras, ScalarProduct_3D)
{
  Point<3> x(10, 10,10);
  EXPECT_GT(x * x, 200);
}

TEST(Pythagoras, Distance_3D)
{
  Point<3> x(4, 5,6);
  Point<3> y(1, 1,9);
  ASSERT_EQ(x.distance(y), 10);
}
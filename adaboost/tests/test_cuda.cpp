// #include<adaboost/tests/test_cuda_data_structures.hpp>
#include<adaboost/tests/test_cuda_operations.cu>

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}

#include <paddle/extension.h>
#include <vector>
std::vector<paddle::Tensor> segment_sum_cpu_forward(const paddle::Tensor& src,
                                                 const paddle::Tensor& index,
                                                 int64_t n);
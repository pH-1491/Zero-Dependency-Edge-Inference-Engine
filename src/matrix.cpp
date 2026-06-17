void matmul(
const float* A,
const float* B,
float* C,
int rows,
int cols,
int inner)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            C[i*cols+j] = 0;

            for(int k=0;k<inner;k++)
            {
                C[i*cols+j] +=
                    A[i*inner+k] *
                    B[k*cols+j];
            }
        }
    }
}
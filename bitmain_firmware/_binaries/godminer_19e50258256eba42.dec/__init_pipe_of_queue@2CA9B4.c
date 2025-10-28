int __fastcall _init_pipe_of_queue(int *a1, int a2, int a3)
{
  int result; // r0

  *a1 = (int)pipe_new(a2, a3);
  a1[2] = pipe_consumer_new(*a1);
  result = pipe_producer_new(*a1);
  a1[1] = result;
  return result;
}

int __fastcall _deinit_pipe_of_queue(_DWORD *a1)
{
  pipe_free(*a1);
  pipe_consumer_free(a1[2]);
  return pipe_producer_free(a1[1]);
}

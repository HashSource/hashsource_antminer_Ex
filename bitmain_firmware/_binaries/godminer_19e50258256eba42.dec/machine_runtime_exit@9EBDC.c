void __fastcall machine_runtime_exit(void *a1)
{
  if ( a1 )
    free(a1);
}

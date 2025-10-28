void *__fastcall abin2hex(int a1, unsigned int a2)
{
  void *v6; // [sp+Ch] [bp-8h]

  v6 = malloc(2 * a2 + 1);
  if ( v6 )
  {
    bin2hex((int)v6, a1, a2);
    return v6;
  }
  else
  {
    set_miner_6060info_malloc_failed_err(1);
    return 0;
  }
}

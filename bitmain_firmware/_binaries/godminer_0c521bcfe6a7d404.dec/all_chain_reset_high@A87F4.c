int __fastcall all_chain_reset_high(int a1)
{
  int result; // r0
  int v2; // r5
  int v3; // r4
  int v4; // r0

  result = hal_chain_max_num(a1);
  v2 = result;
  if ( result > 0 )
  {
    v3 = 0;
    do
    {
      v4 = v3++;
      result = hal_chain_reset_addr(v4);
      if ( result < 0 )
        break;
      result = gpio_write(result, 0);
    }
    while ( v2 != v3 );
  }
  return result;
}

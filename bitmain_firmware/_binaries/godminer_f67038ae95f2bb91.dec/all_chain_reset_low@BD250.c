int all_chain_reset_low()
{
  int result; // r0
  int v1; // r5
  int v2; // r4
  int v3; // r0

  result = hal_chain_max_num();
  v1 = result;
  if ( result > 0 )
  {
    v2 = 0;
    do
    {
      v3 = v2++;
      result = hal_chain_reset_addr(v3);
      if ( result < 0 )
        break;
      result = gpio_write(result, 1);
    }
    while ( v1 != v2 );
  }
  return result;
}

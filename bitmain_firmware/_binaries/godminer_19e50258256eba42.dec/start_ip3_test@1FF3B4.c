int __fastcall start_ip3_test(int a1, int a2)
{
  switch ( a1 )
  {
    case 0:
      ltc_test_func_ip3_pre_long_bist(a2);
      break;
    case 1:
      ltc_test_func_ip3_post_long_bist(a2);
      break;
    case 2:
      ltc_test_func_ip3_pre_short_bist(a2);
      break;
    case 3:
      ltc_test_func_ip3_post_short_bist(a2);
      break;
    default:
      return 0;
  }
  return 0;
}

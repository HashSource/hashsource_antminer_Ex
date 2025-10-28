int __fastcall set_dev_invalid_hal(int result)
{
  LOBYTE(g_chain_info[2 * result + 1]) = 0;
  --total_chain;
  return result;
}

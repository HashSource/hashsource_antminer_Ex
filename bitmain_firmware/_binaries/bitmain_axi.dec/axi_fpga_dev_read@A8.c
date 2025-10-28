ssize_t __fastcall axi_fpga_dev_read(file *f, char *buf, size_t len, loff_t *ppos)
{
  unsigned __int64 v4; // x5
  bool v5; // cc
  size_t v6; // x19
  unsigned __int64 v7; // x0
  ssize_t result; // x0
  __int64 v12; // x0

  v4 = *ppos;
  if ( buf )
    v5 = v4 > 0x7FFFFFF;
  else
    v5 = 1;
  if ( v5 )
    return -22;
  v6 = 0x8000000 - v4;
  v7 = *(_QWORD *)(_ReadStatusReg(SP_EL0) + 8);
  if ( 0x8000000 - v4 > len )
    v6 = len;
  if ( __CFADD__(buf, v6) || (unsigned __int64)&buf[v6] > v7 )
    return -14;
  v12 = _arch_copy_to_user(buf, (char *)fpga_cache_store_addr + v4, v6);
  if ( v12 == v6 )
    return -14;
  result = v6 - v12;
  *ppos += result;
  return result;
}

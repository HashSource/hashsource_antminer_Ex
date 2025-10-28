__int64 __fastcall axi_fpga_dev_llseek(int a1, unsigned __int64 a2, int a3)
{
  if ( a3 == 1 )
  {
    a2 += *(_QWORD *)(a1 + 64);
  }
  else if ( a3 == 2 )
  {
    a2 += 0x1FFFFFLL;
  }
  else if ( a3 )
  {
    return -22;
  }
  if ( a2 > 0x200000 )
    return -22;
  *(_QWORD *)(a1 + 64) = a2;
  return a2;
}

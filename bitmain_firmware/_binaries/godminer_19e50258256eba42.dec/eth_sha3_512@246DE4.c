int __fastcall eth_sha3_512(int a1, unsigned int a2, int a3, unsigned int a4)
{
  if ( a2 <= 0x40 )
    return sub_246BB0(a1, a2, a3, a4, 0x48u, 1);
  else
    return -1;
}

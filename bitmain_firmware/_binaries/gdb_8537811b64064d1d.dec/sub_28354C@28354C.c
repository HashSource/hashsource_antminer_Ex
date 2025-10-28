_BYTE *sub_28354C()
{
  _BYTE *result; // r0
  _BYTE *v1; // r3

  result = sub_93050(0x808u);
  v1 = result;
  do
  {
    *v1 = 0;
    v1 += 8;
    *((_DWORD *)v1 - 1) = 0;
  }
  while ( v1 != result + 2056 );
  return result;
}

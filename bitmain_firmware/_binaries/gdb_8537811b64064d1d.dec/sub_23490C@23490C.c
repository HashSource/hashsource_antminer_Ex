_DWORD *sub_23490C()
{
  int v0; // r3
  _DWORD *result; // r0

  v0 = dword_46DCCC;
  if ( dword_46DCD0 != dword_46DCCC )
  {
    result = sub_2348AC();
    v0 = dword_46DCCC;
  }
  dword_46DCD0 = v0;
  return result;
}

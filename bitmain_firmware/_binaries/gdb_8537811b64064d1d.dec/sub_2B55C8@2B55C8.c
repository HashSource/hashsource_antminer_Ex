void *__fastcall sub_2B55C8(int a1, int a2)
{
  void *result; // r0

  if ( *(_DWORD *)(a2 + 140) )
    return (void *)sub_2D00AC();
  result = sub_2AD0C4(a1, 0xB8u);
  if ( result )
  {
    *(_DWORD *)(a2 + 140) = result;
    return (void *)sub_2D00AC();
  }
  return result;
}

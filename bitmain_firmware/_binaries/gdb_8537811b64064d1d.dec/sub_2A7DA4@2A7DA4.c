int __fastcall sub_2A7DA4(int a1)
{
  int result; // r0

  result = sub_2AE48C(a1, 0);
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) == 5 )
      return *(_DWORD *)(*(_DWORD *)(result + 444) + 24);
    else
      return 0;
  }
  return result;
}

int __fastcall sub_69120(int result, int a2)
{
  int v2; // r3
  bool v3; // zf
  int v4; // r3

  v2 = *(_DWORD *)(result + 36);
  if ( a2 )
  {
    if ( *(_DWORD *)(result + 40) == v2 )
    {
      return sub_6929C(result + 32);
    }
    else
    {
      v3 = v2 == 0;
      v4 = v2 + 4;
      if ( !v3 )
        *(_DWORD *)(v4 - 4) = a2;
      *(_DWORD *)(result + 36) = v4;
    }
  }
  else
  {
    *(_DWORD *)(result + 36) = v2 - 4;
  }
  return result;
}

int __fastcall sub_22F180(int a1)
{
  _DWORD *v1; // r3
  _DWORD *v4; // r0
  __int64 v5; // r0

  if ( *(_DWORD *)(a1 + 736) == 3840 )
  {
    v1 = (_DWORD *)dword_489F70;
    if ( dword_489F70 )
    {
      while ( (_DWORD *)a1 != v1 )
      {
        v1 = (_DWORD *)*v1;
        if ( !v1 )
          return (int)v1;
      }
      return 1;
    }
    else
    {
      return (int)v1;
    }
  }
  else
  {
    v4 = (_DWORD *)sub_242FDC(a1);
    sub_2594D8(*v4, "Magic number of %s target struct wrong\n", *(const char **)(a1 + 4));
    v5 = sub_94728((int)"target.c", 778, "failed internal consistency check");
    return sub_22F200(v5, HIDWORD(v5));
  }
}

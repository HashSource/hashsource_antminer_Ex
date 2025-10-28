void __fastcall sub_BB138(_DWORD *a1)
{
  _DWORD *v1; // r5

  if ( a1 )
  {
    sub_BAB14(a1);
  }
  else
  {
    v1 = (_DWORD *)sub_1CD174(dword_487D2C, dword_478234);
    if ( v1 )
    {
      if ( *v1 )
      {
        ((void (*)(void))sub_323BAC)();
        sub_323BAC(v1[1]);
        *v1 = 0;
        v1[1] = 0;
        v1[2] = 0;
        v1[3] = 0;
      }
    }
  }
}

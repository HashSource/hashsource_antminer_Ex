int __fastcall sub_CF288(int result)
{
  _DWORD *v1; // r4
  int v2; // r3
  _DWORD *v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r0

  v1 = (_DWORD *)result;
  if ( result )
  {
    do
    {
      result = v1[2];
      if ( result )
      {
        v2 = *(_DWORD *)(result + 12);
        switch ( v2 )
        {
          case 32:
            result = (*((int (**)(void))off_46D9C8 + 2))();
            break;
          case 33:
            result = (*((int (**)(void))off_46D9C8 + 3))();
            break;
          case 31:
            if ( dword_487930 )
            {
              v3 = (_DWORD *)sub_242FF0(result);
              result = sub_2594D8(*v3, "handling bp_jit_event\n");
            }
            v4 = sub_22F070(result);
            v6 = sub_15F734(v4, v5);
            v7 = sub_15ECDC(v6);
            v8 = sub_1937C4(v7);
            result = sub_22EFA4(v8);
            break;
        }
      }
      v1 = (_DWORD *)*v1;
    }
    while ( v1 );
  }
  return result;
}

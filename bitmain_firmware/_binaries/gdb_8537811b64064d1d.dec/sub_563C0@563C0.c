int __fastcall sub_563C0(int result)
{
  int v1; // r7
  int v2; // r11
  int v3; // r8
  _DWORD *v4; // r4
  int i; // r0
  int v6; // r6

  if ( !dword_4747EC )
  {
    v1 = result;
    result = sub_23E430(dword_4878EC, dword_4878F0, dword_4878F4);
    v2 = dword_487668;
    v3 = result;
    v4 = (_DWORD *)dword_48769C;
    dword_487668 = dword_48769C;
    if ( dword_48769C )
    {
      for ( i = sub_191AE8(); ; i = sub_191AE8() )
      {
        result = sub_56374(i);
        v6 = result;
        if ( result )
        {
          if ( (v1 & 2) != 0 )
            result = sub_183E10(*(_DWORD *)(result + 16));
          if ( v3 )
          {
            if ( (v1 & 0xC) != 0 )
              result = sub_240510(*(_DWORD *)(v6 + 16), v1);
          }
        }
        v4 = (_DWORD *)*v4;
        if ( !v4 )
          break;
        dword_487668 = (int)v4;
      }
    }
    dword_487668 = v2;
  }
  return result;
}

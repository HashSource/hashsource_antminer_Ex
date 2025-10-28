int __fastcall sub_1ED044(int a1)
{
  int v2; // r0
  unsigned __int8 **v3; // r4
  int v4; // r0
  int v5; // r2
  int result; // r0
  int v7; // r0

  v2 = sub_16F67C(a1);
  ((void (__fastcall *)(int))loc_1E2798)(v2);
  v3 = (unsigned __int8 **)dword_488C94;
  if ( *(_DWORD *)(dword_488C94 + 24) || sub_183D18() > 1 )
  {
    v3[7] = 0;
    v4 = qword_46BBCC;
    v5 = dword_46BBD4;
    *(_QWORD *)(v3 + 15) = qword_46BBCC;
    v3[17] = (unsigned __int8 *)v5;
    sub_231A34(v4);
    result = sub_183CD0();
    if ( !result )
    {
      result = ((int (__fastcall *)(int))loc_1E21C0)(72);
      if ( result != 1 )
      {
        sub_1E7E14("?");
        result = sub_1E4EE0((char **)v3, (size_t *)v3 + 1, 0, 0, 0);
        if ( (unsigned int)**v3 - 83 <= 1 )
        {
          result = dword_488C70[0];
          dword_4878EC = dword_488C70[0];
          qword_4878F0 = *(_QWORD *)&dword_488C70[1];
        }
      }
    }
  }
  else
  {
    v7 = sub_231C90(a1);
    return sub_231A34(v7);
  }
  return result;
}

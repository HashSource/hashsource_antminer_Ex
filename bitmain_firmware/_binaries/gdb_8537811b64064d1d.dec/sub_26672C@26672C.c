int __fastcall sub_26672C(int a1, _DWORD *a2, unsigned int a3, int a4, int a5)
{
  int v8; // r5
  int v9; // r4
  int v11; // r3
  int v12; // r0

  v8 = sub_171280(a2);
  v9 = sub_17456C(v8);
  if ( v9 )
  {
    sub_2563A4(a1);
    return 0;
  }
  else
  {
    if ( !sub_174518(v8) )
    {
      if ( (unsigned int)**(unsigned __int8 **)(v8 + 24) - 2 > 2 )
      {
        if ( ((int (__fastcall *)(int, unsigned int, int))loc_26B400)(a5, 8 * a3, 8 * *(_DWORD *)(v8 + 20)) )
        {
          sub_2666E8(a5, a1);
          return v9;
        }
        if ( sub_26BFE0(a5, 8 * *(_DWORD *)(v8 + 20), 8 * a3, (8 * a4) | (a3 >> 29), 8 * *(_DWORD *)(v8 + 20), 0) )
        {
          v11 = **(char **)(v8 + 24);
          v9 = v11 == 18;
          if ( v11 != 18 || (v12 = sub_26DEFC(a5)) == 0 || sub_26C0BC(v12) != 1 )
          {
            sub_25A6E4("<synthetic pointer>", a1);
            return v9;
          }
        }
        else
        {
          v9 = sub_26B3CC(a5, *(_DWORD *)(v8 + 20), a3, a4, *(_DWORD *)(v8 + 20), 0);
          if ( !v9 )
          {
            sub_25A440(a1, "<unavailable>");
            return v9;
          }
        }
      }
      return 1;
    }
    sub_256398(a1);
    return 0;
  }
}

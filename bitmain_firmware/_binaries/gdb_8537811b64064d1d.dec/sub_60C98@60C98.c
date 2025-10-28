int __fastcall sub_60C98(int result, int a2)
{
  _DWORD *v2; // r5
  int v3; // r3
  int i; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r4
  int v9; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // [sp+0h] [bp-Ch]

  v2 = (_DWORD *)dword_48769C;
  v3 = dword_487668;
  dword_487668 = dword_48769C;
  v14 = v3;
  if ( dword_48769C )
  {
    for ( i = sub_191AE8(result); ; i = sub_191AE8(result) )
    {
      result = sub_60614(i);
      if ( result )
      {
        v6 = sub_191AE8(result);
        v7 = sub_19168C(v6);
        v8 = sub_191AE8(v7);
        if ( a2 )
        {
          v9 = ((int (*)(void))loc_23DC0C)();
          if ( *(_DWORD *)(v9 + 204) && sub_2422A8() )
          {
            v12 = sub_2422B0(*(_DWORD *)(v9 + 204));
            v13 = sub_98384(v12);
            sub_257610(v7, "reason", v13);
          }
          sub_188844(v7);
          v10 = sub_1915B0(dword_487668, "console");
          if ( sub_5691C(v10, v9) )
            sub_188844(*(_DWORD *)(v8 + 48));
          sub_25752C(v7, "thread-id", *(_DWORD *)(v9 + 20));
          if ( dword_487950 )
          {
            sub_2578D4(v7, 1);
            sub_25752C(v7, 0, *(_DWORD *)(v9 + 20));
            sub_257374(v7, 1);
          }
          else
          {
            sub_257610(v7, "stopped-threads", "all");
          }
          v11 = sub_232394(dword_4878EC, dword_4878F0, dword_4878F4);
          if ( v11 != -1 )
            sub_25752C(v7, "core", v11);
        }
        sub_256878("*stopped", *(_DWORD *)(v8 + 36));
        sub_690D0(v7, *(_DWORD *)(v8 + 36));
        sub_690E8(v7);
        sub_665C0(*(_DWORD *)(v8 + 36));
        sub_256878(&word_356660, *(_DWORD *)(v8 + 36));
        result = sub_256834(*(_DWORD *)(v8 + 36));
      }
      v2 = (_DWORD *)*v2;
      if ( !v2 )
        break;
      dword_487668 = (int)v2;
    }
  }
  dword_487668 = v14;
  return result;
}

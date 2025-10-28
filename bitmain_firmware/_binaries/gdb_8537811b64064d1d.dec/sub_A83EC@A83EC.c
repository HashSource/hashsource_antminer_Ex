int __fastcall sub_A83EC(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r10
  int v8; // r0
  int v9; // r0
  int v10; // r6
  char **v11; // r5
  int v12; // r0
  int v13; // r7
  int v14; // r0
  int v15; // r0
  int v16; // r2
  int v17; // r9
  int v18; // r0
  int v19; // r2
  int v20; // r6
  int v21; // r8
  __int64 v22; // r0
  __int64 v23; // r0
  int v24; // r0
  int v25; // r0
  __int64 v26; // r6
  int v27; // r0
  int v28; // r0
  int v29; // r2
  int v30; // r2
  int v31; // r0
  int v32; // r5
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // [sp+8h] [bp-1Ch]
  __int64 v40; // [sp+8h] [bp-1Ch]
  int v41; // [sp+10h] [bp-14h]
  int v42; // [sp+14h] [bp-10h]
  int v43; // [sp+18h] [bp-Ch] BYREF
  int v44; // [sp+1Ch] [bp-8h] BYREF

  v4 = sub_26BC98(a1);
  if ( sub_A0D24(v4) )
  {
    v31 = sub_26BC98(a1);
    return sub_A82A8(v31);
  }
  v5 = sub_26BC98(a1);
  if ( !sub_A0CBC(v5) )
    return sub_26BC98(a1);
  if ( !a2 )
  {
    v34 = sub_26BC98(a1);
    v35 = sub_A0FD8(v34);
    v32 = sub_A0898(v35);
    v36 = sub_26BC98(a1);
    if ( sub_A10D8(v36) )
    {
      v37 = sub_26BC98(a1);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v32 + 24) + 24) + 8) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v32 + 24) + 24) + 8)
                                                               & 0xF
                                                               | (16 * ((int (__fastcall *)(int))loc_A1324)(v37));
    }
    return v32;
  }
  v6 = sub_26BC98(a1);
  v7 = sub_A1798(v6, -1);
  v8 = sub_26BC98(a1);
  if ( v8 )
  {
    v9 = sub_A1620(v8);
    v32 = v7 == 0;
    if ( !v9 )
      v32 = 1;
    v10 = v9;
    if ( !v32 )
    {
      v42 = sub_A11FC(a1);
      if ( sub_26EB44(v42) )
      {
        if ( v10 > 0 )
        {
          v11 = &off_3742AC[2 * v10];
          do
          {
            v12 = sub_26BC98(a1);
            v13 = sub_16FF80(v12);
            v14 = sub_26BC98(a1);
            v15 = sub_16FF80(v14);
            v16 = (int)*(v11 - 2);
            v17 = v15;
            v44 = v42;
            v18 = sub_2624F0(&v44, 0, v16, 0, "Bad GNAT array descriptor bounds");
            v19 = (int)*(v11 - 1);
            v20 = v18;
            v43 = v42;
            v21 = sub_2624F0(&v43, 0, v19, 0, "Bad GNAT array descriptor bounds");
            v39 = sub_26BC98(v20);
            v22 = sub_26EB44(v20);
            v41 = sub_267284(v22, HIDWORD(v22));
            v23 = sub_26EB44(v21);
            v24 = sub_267284(v23, HIDWORD(v23));
            sub_171950(v13, v39, v41, v41 >> 31, v24, v24 >> 31);
            v7 = sub_17214C(v17, v7, v13);
            v25 = sub_26BC98(a1);
            if ( sub_A10D8(v25) )
            {
              v40 = sub_26EB44(v20);
              v26 = sub_26EB44(v21);
              v27 = sub_26BC98(a1);
              v28 = ((int (__fastcall *)(int))loc_A1324)(v27);
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 24) + 8) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 24)
                                                                                  + 8)
                                                                      & 0xF
                                                                      | (16 * v28);
              if ( v40 < v26 )
              {
                v29 = (v28 & 0xFFFFFFF) + (v28 & 0xFFFFFFF) * (v26 - v40);
                if ( v29 + 7 >= 0 )
                  v30 = v29 + 7;
                else
                  v30 = v29 + 14;
                *(_DWORD *)(v17 + 20) = v30 >> 3;
              }
            }
            v11 -= 2;
          }
          while ( off_3742AC != v11 );
        }
        return sub_1700E8(v7);
      }
      return v32;
    }
  }
  v38 = sub_26BC98(a1);
  return sub_A0898(v38);
}

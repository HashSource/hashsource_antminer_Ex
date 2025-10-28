int __fastcall sub_26517C(_DWORD *a1, int a2)
{
  _DWORD *v3; // r10
  int v4; // r5
  _DWORD *v5; // r0
  int v6; // r0
  char *v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r4
  bool v10; // cc
  _DWORD *v11; // r8
  int v12; // r0
  int v13; // r3
  bool v14; // zf
  _DWORD *v15; // r7
  char *v16; // r3
  int v17; // r11
  int v18; // r6
  int v20; // r2
  _DWORD *v21; // r7
  int v22; // r0
  unsigned int v23; // r9
  int v24; // r3
  int v25; // r1
  int v26; // r6
  int v27; // r1
  int v28; // r2
  int v29; // r0
  int v30; // r1
  int v31; // r11
  __int64 v32; // r8
  int v33; // r0
  int v34; // r0
  int v35; // [sp+18h] [bp-2Ch]
  int v36; // [sp+18h] [bp-2Ch]
  int v37; // [sp+1Ch] [bp-28h]
  __int64 v38; // [sp+20h] [bp-24h]
  int v39; // [sp+2Ch] [bp-18h] BYREF
  int v40; // [sp+30h] [bp-14h] BYREF
  int v41; // [sp+34h] [bp-10h] BYREF
  int v42; // [sp+38h] [bp-Ch] BYREF

  v3 = a1;
  v4 = sub_171280(a1);
  v5 = (_DWORD *)sub_26BC98(a2);
  v6 = sub_171280(v5);
  v7 = *(char **)(v4 + 24);
  v8 = *v7;
  v9 = (unsigned __int8)(v8 - 18);
  v10 = v8 > 1;
  if ( v8 != 1 )
    v10 = v9 > 1;
  if ( v10 )
    sub_94708("Argument to dynamic_cast must be a pointer or reference type");
  v11 = (_DWORD *)v6;
  v12 = *((_DWORD *)v7 + 5);
  v13 = **(char **)(v12 + 24);
  v14 = v13 == 3;
  if ( v13 != 3 )
    v14 = v13 == 10;
  if ( !v14 )
    sub_94708("Argument to dynamic_cast must be pointer to class or `void *'");
  v15 = (_DWORD *)sub_171280((_DWORD *)v12);
  v16 = (char *)v11[6];
  if ( **(_BYTE **)(v4 + 24) != 1 )
  {
    if ( *v16 != 3 )
      sub_94708("Argument to dynamic_cast does not have class type");
    v17 = a2;
LABEL_12:
    if ( sub_17392C((int)v15, (int)v11) )
      return sub_2647F0(v3, v17);
    if ( sub_173C24(v15, v11) )
    {
      if ( !sub_173C54(v15, v17) )
        sub_94708("Ambiguous dynamic_cast");
      return sub_2647F0(v3, a2);
    }
    v21 = (_DWORD *)sub_FC700(v17, (int)&v39, (int)&v42, (int)&v40);
    if ( !v21 )
      sub_94708("Couldn't determine value's most derived type for dynamic_cast");
    v22 = ((int (__fastcall *)(int))loc_26C0C4)(v17);
    v23 = v22;
    if ( !v39 )
    {
      if ( v40 )
      {
        v23 = v22 + v42;
      }
      else
      {
        v34 = sub_26C008(v17);
        v23 += v34 + v42;
      }
    }
    v24 = *(_DWORD *)(v4 + 24);
    if ( *(_BYTE *)v24 == 1 && **(_BYTE **)(*(_DWORD *)(v24 + 20) + 24) == 10 )
      return sub_25F73C(v3, v23, 1);
    v18 = sub_25F73C(v3, v23, 0);
    v3 = (_DWORD *)sub_26BC98(v18);
    if ( !sub_173C3C(v11, *(_DWORD **)(*(_DWORD *)(v4 + 24) + 20)) )
    {
LABEL_31:
      v41 = 0;
      if ( sub_173C3C(v11, v21) )
      {
        v31 = *(_DWORD *)(*(_DWORD *)(v4 + 24) + 20);
        v36 = sub_26E740(v18, v25);
        v32 = sub_26C008(v18);
        v33 = ((int (__fastcall *)(int))loc_26C0C4)(v18);
        if ( sub_25F974(v31, v36, v32, v33, v18, (int)v21, &v41) == 1 )
        {
LABEL_36:
          if ( v9 <= 1 )
            v30 = ((int (__fastcall *)(int, _DWORD))loc_2618FC)(v41, **(char **)(v4 + 24));
          else
            v30 = sub_2616E4(v41);
          return sub_2647F0(v3, v30);
        }
      }
      if ( **(_BYTE **)(v4 + 24) != 1 )
        sub_94708("dynamic_cast failed");
      goto LABEL_33;
    }
    if ( !sub_17392C((int)v21, *(_DWORD *)(*(_DWORD *)(v4 + 24) + 20)) )
    {
      v28 = *(_DWORD *)(v4 + 24);
      v41 = 0;
      v35 = *(_DWORD *)(v28 + 20);
      v37 = sub_26E740(v18, v27);
      v38 = sub_26C008(v18);
      v29 = ((int (__fastcall *)(int))loc_26C0C4)(v18);
      if ( sub_25F794(v35, v37, v38, HIDWORD(v38), v29, v18, (int)v21, v23, (int)v11, &v41) == 1 )
        goto LABEL_36;
      goto LABEL_31;
    }
    return v18;
  }
  v20 = *v16;
  if ( v20 == 1 )
    goto LABEL_39;
  if ( v20 != 8 || sub_26EB44(a2) )
    sub_94708("Argument to dynamic_cast does not have pointer type");
  v16 = (char *)v11[6];
  if ( *v16 == 1 )
  {
LABEL_39:
    v11 = (_DWORD *)sub_171280(*((_DWORD **)v16 + 5));
    if ( *(_BYTE *)v11[6] != 3 )
      sub_94708("Argument to dynamic_cast does not have pointer to class type");
  }
  if ( sub_26EB44(a2) )
  {
    v17 = sub_262134(a2);
    goto LABEL_12;
  }
LABEL_33:
  v26 = sub_26BBA8(v3);
  *(_DWORD *)nullsub_31(v26) = 0;
  return v26;
}

int __fastcall check_nonce_eth_2282(int a1, int a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  __int64 v15; // r4
  __int64 v16; // r4
  _BYTE v19[32]; // [sp+1Ch] [bp-10A0h] BYREF
  _BYTE dest[8]; // [sp+101Ch] [bp-A0h] BYREF
  _BYTE v21[32]; // [sp+1024h] [bp-98h] BYREF
  _DWORD s2[8]; // [sp+1044h] [bp-78h] BYREF
  _DWORD v23[8]; // [sp+1064h] [bp-58h] BYREF
  _DWORD *v24; // [sp+1084h] [bp-38h]
  _DWORD *v25; // [sp+1088h] [bp-34h]
  unsigned __int8 v26; // [sp+108Eh] [bp-2Eh]
  char v27; // [sp+108Fh] [bp-2Dh]
  int v28; // [sp+1090h] [bp-2Ch]
  int v29; // [sp+1094h] [bp-28h]
  unsigned __int8 v30; // [sp+109Bh] [bp-21h]
  _DWORD *v31; // [sp+109Ch] [bp-20h]
  _DWORD *v32; // [sp+10A0h] [bp-1Ch]
  _DWORD *v33; // [sp+10A4h] [bp-18h]
  _DWORD *v34; // [sp+10A8h] [bp-14h]
  unsigned __int8 v35; // [sp+10AFh] [bp-Dh]

  v29 = a2;
  v28 = *(_DWORD *)(a1 + 864);
  if ( *(_BYTE *)(a1 + 278) != 1 || *(_BYTE *)(a1 + 279) != 1 )
    return 7;
  v27 = *(_BYTE *)(v29 + 16);
  v3 = *(_DWORD *)(v29 + 38);
  v4 = *(_DWORD *)(v29 + 42);
  v5 = *(_DWORD *)(v29 + 46);
  v23[0] = *(_DWORD *)(v29 + 34);
  v23[1] = v3;
  v23[2] = v4;
  v23[3] = v5;
  v6 = *(_DWORD *)(v29 + 54);
  v7 = *(_DWORD *)(v29 + 58);
  v8 = *(_DWORD *)(v29 + 62);
  v23[4] = *(_DWORD *)(v29 + 50);
  v23[5] = v6;
  v23[6] = v7;
  v23[7] = v8;
  v9 = *(_DWORD *)(v29 + 102);
  v10 = *(_DWORD *)(v29 + 106);
  v11 = *(_DWORD *)(v29 + 110);
  s2[0] = *(_DWORD *)(v29 + 98);
  s2[1] = v9;
  s2[2] = v10;
  s2[3] = v11;
  v12 = *(_DWORD *)(v29 + 118);
  v13 = *(_DWORD *)(v29 + 122);
  v14 = *(_DWORD *)(v29 + 126);
  s2[4] = *(_DWORD *)(v29 + 114);
  s2[5] = v12;
  s2[6] = v13;
  s2[7] = v14;
  memcpy(dest, (const void *)(v29 + 26), sizeof(dest));
  sub_FBE04(v23, dest, s2, (int)v21);
  v26 = target_to_diff_eth_2282((int)v21);
  v35 = *(_BYTE *)(v28 + *(unsigned __int8 *)(v29 + 16) + 34816);
  if ( case_select == 14 || case_select == 15 || case_select == 24 )
  {
    v35 = 32;
    if ( old_pattern )
      v35 = 20;
    v24 = 0;
    v34 = (_DWORD *)**((_DWORD **)&unk_5BB670 + *(_DWORD *)(a1 + 272));
    v33 = (_DWORD *)*v34;
    while ( v34 != *((_DWORD **)&unk_5BB670 + *(_DWORD *)(a1 + 272)) )
    {
      v24 = v34;
      v15 = *(_QWORD *)(v29 + 26);
      if ( v15 == sub_10F6C8((unsigned __int64 *)(v34 + 11)) && !memcmp(v24 + 13, s2, 0x20u) )
      {
        if ( !*((_BYTE *)v24 + 84) )
          ++slt_result[2050 * *(_DWORD *)(a1 + 272) + 2049];
        ++*((_BYTE *)v24 + 84);
      }
      v34 = v33;
      v33 = (_DWORD *)*v33;
    }
    ++check_fail_cnt[*(_DWORD *)(a1 + 272)];
    return 0;
  }
  else if ( case_select == 6 )
  {
    v35 = 25;
    if ( old_pattern )
      v35 = 20;
    if ( v26 >= (unsigned int)v35 )
    {
      v25 = 0;
      v30 = 0;
      if ( *(_BYTE *)(a1 + 278) != 1 )
      {
        return 0;
      }
      else
      {
        v32 = (_DWORD *)**((_DWORD **)&unk_5BB664 + *(_DWORD *)(a1 + 272));
        v31 = (_DWORD *)*v32;
        while ( v32 != *((_DWORD **)&unk_5BB664 + *(_DWORD *)(a1 + 272)) )
        {
          v25 = v32;
          v16 = *(_QWORD *)(v29 + 26);
          if ( v16 == sub_10F6C8((unsigned __int64 *)(v32 + 11)) && !memcmp(v25 + 13, s2, 0x20u) )
          {
            *((_BYTE *)v25 + 84) = 1;
            v30 = 1;
          }
          v32 = v31;
          v31 = (_DWORD *)*v31;
        }
        slt_result[2050 * *(_DWORD *)(a1 + 272) + 2049] += v30;
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else if ( v26 > 0x1Bu )
  {
    return v26 < (unsigned int)v35;
  }
  else
  {
    V_LOCK();
    logfmt_raw(
      v19,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_ETH %d",
      v26,
      *(unsigned __int8 *)(v29 + 17),
      28);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "check_nonce_eth_2282",
      20,
      1614,
      20,
      v19);
    return 2;
  }
}

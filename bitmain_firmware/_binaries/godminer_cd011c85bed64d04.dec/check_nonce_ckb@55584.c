int __fastcall check_nonce_ckb(int a1, int a2)
{
  _DWORD *v2; // r8
  int v3; // r12
  int v5; // r4
  unsigned int v6; // r6
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // t1
  int v20; // r3
  int v21; // r1
  int v22; // r2
  unsigned int v23; // r0
  unsigned int v24; // r3
  unsigned __int8 *v25; // r3
  int v26; // r4
  int v27; // r2
  int v28; // r4
  unsigned int v29; // t1
  unsigned int v30; // t1
  bool v31; // cc
  int v33; // r0
  int v34; // r0
  int v35; // r0
  _BYTE v36[32]; // [sp+10h] [bp-40h] BYREF
  _DWORD v37[8]; // [sp+30h] [bp-20h] BYREF
  int v38; // [sp+50h] [bp+0h]
  int v39; // [sp+54h] [bp+4h]
  int v40; // [sp+58h] [bp+8h]
  int v41; // [sp+5Ch] [bp+Ch]
  _BYTE v42[4096]; // [sp+60h] [bp+10h] BYREF

  v2 = (_DWORD *)a2;
  v3 = *(unsigned __int8 *)(a2 + 65);
  v5 = *(_DWORD *)(a1 + 632);
  v6 = *(_DWORD *)(v5 + 4 * (v3 + 5632));
  v7 = (int *)(v5 + 48 * v3 + 10240);
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v11 = v7[3];
  v7 += 4;
  v37[0] = v8;
  v37[1] = v9;
  v37[2] = v10;
  v37[3] = v11;
  v12 = *v7;
  v13 = v7[1];
  v14 = v7[2];
  v15 = v7[3];
  v7 += 4;
  v37[4] = v12;
  v37[5] = v13;
  v37[6] = v14;
  v37[7] = v15;
  v16 = v7[1];
  v17 = v7[2];
  v18 = v7[3];
  v38 = *v7;
  v39 = v16;
  v40 = v17;
  v41 = v18;
  v19 = v2[12];
  v2 += 12;
  v20 = v2[3];
  v21 = v2[1];
  v22 = v2[2];
  v38 = v19;
  v39 = v21;
  v40 = v22;
  v41 = v20;
  EaglesongHash(v36, v37, 48);
  v23 = target_to_diff_ckb(v36);
  if ( v23 <= 0x1F )
  {
    V_LOCK(v23);
    v35 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v35);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb/backend_ckb.c",
      154,
      "check_nonce_ckb",
      15,
      336,
      20,
      v42);
    return 2;
  }
  else
  {
    v24 = *(unsigned __int8 *)(a2 + 64);
    if ( v24 == v23 )
    {
      if ( v6 > v24 )
      {
LABEL_9:
        V_LOCK(v23);
        v33 = logfmt_raw((int)v42, 0x1000u);
        V_UNLOCK(v33);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_ckb/backend_ckb.c",
          154,
          "check_nonce_ckb",
          15,
          346,
          20,
          v42);
        return 1;
      }
      else
      {
        v25 = v36;
        v26 = v5 + 32 * (*(unsigned __int8 *)(a2 + 65) + 736);
        v27 = v26 - 1;
        v28 = v26 + 31;
        do
        {
          v29 = *v25++;
          v23 = v29;
          v30 = *(unsigned __int8 *)++v27;
          v31 = v23 > v30;
          if ( v23 < v30 )
            break;
          if ( v31 )
            goto LABEL_9;
        }
        while ( v27 != v28 );
        return 0;
      }
    }
    else
    {
      V_LOCK(v23);
      v34 = logfmt_raw((int)v42, 0x1000u);
      V_UNLOCK(v34);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ckb/backend_ckb.c",
        154,
        "check_nonce_ckb",
        15,
        341,
        20,
        v42);
      return 3;
    }
  }
}

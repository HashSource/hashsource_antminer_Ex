int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v2; // r5
  int v4; // r4
  unsigned int v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r0
  unsigned int v10; // r3
  _BYTE *v11; // r5
  unsigned __int8 *v12; // r4
  int v13; // r0
  unsigned int v14; // r2
  unsigned int v15; // r3
  int v17; // r0
  int v18; // r0
  int v19; // r0
  unsigned int v20; // [sp+14h] [bp-10E0h]
  _BYTE v21[32]; // [sp+1Ch] [bp-10D8h] BYREF
  _DWORD s[45]; // [sp+3Ch] [bp-10B8h] BYREF
  _BYTE v23[4100]; // [sp+F0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 65);
  v4 = *(_DWORD *)(a1 + 632);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 7040));
  v2 *= 180;
  v20 = v5;
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v4 + v2 + 5120), 0x8Cu);
  v6 = *(_DWORD *)(a2 + 52);
  s[35] = *(_DWORD *)(a2 + 48);
  v7 = *(_DWORD *)(a2 + 56);
  v8 = *(_DWORD *)(a2 + 60);
  s[36] = v6;
  s[37] = v7;
  s[38] = v8;
  s[44] = *(_DWORD *)(v4 + v2 + 5291);
  decred_hash(v21, s);
  v9 = target_to_diff_dcr(v21);
  if ( v9 <= 0x1F )
  {
    V_LOCK(v9);
    v19 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dcr/backend_dcr.c",
      154,
      "check_nonce_dcr",
      15,
      357,
      20,
      v23);
    return 2;
  }
  else
  {
    v10 = *(unsigned __int8 *)(a2 + 64);
    if ( v10 == v9 )
    {
      if ( v20 > v10 )
      {
LABEL_9:
        V_LOCK(v9);
        v17 = logfmt_raw((int)v23, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_dcr/backend_dcr.c",
          154,
          "check_nonce_dcr",
          15,
          367,
          20,
          v23);
        return 1;
      }
      else
      {
        v11 = s;
        v12 = (unsigned __int8 *)(v4 + 32 * *(unsigned __int8 *)(a2 + 65) + 28704);
        do
        {
          V_LOCK(v9);
          --v11;
          --v12;
          v13 = logfmt_raw((int)v23, 0x1000u);
          V_UNLOCK(v13);
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_dcr/backend_dcr.c",
                 154,
                 "fulltest_dcr",
                 12,
                 306,
                 60,
                 v23);
          v14 = (unsigned __int8)*v11;
          v15 = *v12;
          if ( v14 < v15 )
            break;
          if ( v14 > v15 )
            goto LABEL_9;
        }
        while ( v21 != v11 );
        return 0;
      }
    }
    else
    {
      V_LOCK(v9);
      v18 = logfmt_raw((int)v23, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dcr/backend_dcr.c",
        154,
        "check_nonce_dcr",
        15,
        362,
        20,
        v23);
      return 3;
    }
  }
}

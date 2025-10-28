int __fastcall sub_7FF08(int a1, int a2)
{
  _DWORD *v2; // r6
  int v3; // r2
  int *v5; // r10
  int v6; // r11
  int v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int (__fastcall *v12)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r8
  int v13; // r0
  int v14; // r2
  int v15; // r1
  int v16; // r3
  int v17; // r12
  int v18; // r0
  int v19; // lr
  bool v20; // cc
  int v21; // r12
  bool v22; // zf
  int v23; // r7
  int v24; // r8
  int v25; // r0
  int v26; // r0
  int v27; // r2
  int v28; // r0
  int v29; // r2
  int v30; // r0
  int v31; // r0
  int v33; // r0
  int v34; // r3
  int v35; // r0
  int v36; // [sp+44h] [bp-10E0h]
  int v37; // [sp+50h] [bp-10D4h] BYREF
  int v38; // [sp+54h] [bp-10D0h] BYREF
  int v39; // [sp+58h] [bp-10CCh] BYREF
  int v40; // [sp+5Ch] [bp-10C8h] BYREF
  char v41[32]; // [sp+60h] [bp-10C4h] BYREF
  int v42; // [sp+80h] [bp-10A4h] BYREF
  char v43[32]; // [sp+A0h] [bp-1084h] BYREF
  int v44; // [sp+C0h] [bp-1064h] BYREF
  char v45[32]; // [sp+E0h] [bp-1044h] BYREF
  int v46; // [sp+100h] [bp-1024h] BYREF
  _BYTE v47[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = *(_DWORD **)(a1 + 356);
  v3 = *(_DWORD *)(a1 + 364);
  v36 = v3;
  v37 = -64;
  v38 = -64;
  if ( v3 > 0 )
  {
    v5 = (int *)(a2 + 4);
    v6 = 0;
    do
    {
      v39 = 0;
      v25 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
              a1,
              &v37,
              &v39,
              *v2,
              v2[1],
              v2[2],
              v2[3],
              v2[4],
              v2[5]);
      if ( v39 )
      {
        v7 = v37;
        if ( v37 >= -63 )
          goto LABEL_4;
        v37 = -64;
        V_LOCK(v25);
        V_INT((int)v41, "chain");
        v30 = logfmt_raw((int)v47, 0x1000u);
        V_UNLOCK(v30);
        v27 = 299;
      }
      else
      {
        v37 = -64;
        V_LOCK(v25);
        V_INT((int)&v42, "chain");
        v26 = logfmt_raw((int)v47, 0x1000u);
        V_UNLOCK(v26);
        v27 = 304;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        174,
        "read_temperature_hns",
        20,
        v27,
        100,
        v47);
      v7 = v37;
LABEL_4:
      *(v5 - 1) = v7;
      v8 = v2[1];
      v9 = v2[2];
      v10 = v2[3];
      v11 = v2[4];
      v12 = *(int (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 156);
      v40 = 0;
      v13 = v12(a1, &v38, &v40, *v2, v8, v9, v10, v11, v2[5]);
      if ( v40 )
      {
        v14 = v38;
        if ( v38 >= -63 )
          goto LABEL_6;
        v38 = -64;
        V_LOCK(v13);
        V_INT((int)v43, "chain");
        v31 = logfmt_raw((int)v47, 0x1000u);
        V_UNLOCK(v31);
        v29 = 315;
      }
      else
      {
        v38 = -64;
        V_LOCK(v13);
        V_INT((int)&v44, "chain");
        v28 = logfmt_raw((int)v47, 0x1000u);
        V_UNLOCK(v28);
        v29 = 320;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        174,
        "read_temperature_hns",
        20,
        v29,
        100,
        v47);
      v14 = v38;
LABEL_6:
      *v5 = v14;
      v15 = v37;
      v16 = v6 + 2 * *(_DWORD *)(a1 + 220);
      v17 = v14 - *(unsigned __int8 *)(a1 + 936) - v37;
      v18 = v16;
      if ( v17 < 0 )
        v17 = v37 - (v14 - *(unsigned __int8 *)(a1 + 936));
      v19 = dword_171964[v16];
      v20 = v17 <= 3;
      v21 = dword_171964[v18 + 6];
      if ( v20 )
        goto LABEL_18;
      v22 = v19 == -64;
      if ( v19 == -64 )
        v22 = v21 == -64;
      if ( v22 )
      {
        v21 = -64;
        v19 = -64;
        goto LABEL_18;
      }
      v23 = v37 - v19;
      v24 = v14 - v21;
      if ( v37 - v19 < 0 )
        v23 = v19 - v37;
      if ( v24 < 0 )
        v24 = v21 - v14;
      if ( v23 > v24 )
      {
        V_LOCK(v18 * 4);
        V_INT((int)v45, "chain");
        v33 = logfmt_raw((int)v47, 0x1000u);
        V_UNLOCK(v33);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          174,
          "read_temperature_hns",
          20,
          332,
          20,
          v47);
        v14 = v38;
        v15 = v38 - *(unsigned __int8 *)(a1 + 936);
        *(v5 - 1) = v15;
        v34 = *(_DWORD *)(a1 + 220);
        v37 = v15;
LABEL_32:
        v16 = v6 + 2 * v34;
        v18 = v16;
        v19 = dword_171964[v16];
        v21 = dword_171964[v16 + 6];
        goto LABEL_18;
      }
      if ( v23 < v24 )
      {
        V_LOCK(v18 * 4);
        V_INT((int)&v46, "chain");
        v35 = logfmt_raw((int)v47, 0x1000u);
        V_UNLOCK(v35);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          174,
          "read_temperature_hns",
          20,
          337,
          20,
          v47);
        v15 = v37;
        v14 = *(unsigned __int8 *)(a1 + 936) + v37;
        *v5 = v14;
        v38 = v14;
        v34 = *(_DWORD *)(a1 + 220);
        goto LABEL_32;
      }
LABEL_18:
      ++v6;
      if ( v19 != v15 )
        dword_171964[v16] = v15;
      if ( v21 != v14 )
        dword_171964[v18 + 6] = v14;
      v2 += 6;
      v5 += 2;
    }
    while ( v36 != v6 );
  }
  return 0;
}

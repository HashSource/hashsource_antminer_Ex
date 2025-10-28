int __fastcall sub_81E48(int a1, int *a2)
{
  int v2; // r2
  _DWORD *v3; // r5
  int *v5; // r7
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int (__fastcall *v11)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r9
  int v12; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r12
  int v16; // r0
  int v17; // r3
  bool v18; // zf
  int v19; // r8
  int v20; // r9
  int v21; // r0
  int v22; // r0
  int v23; // r2
  int v24; // r0
  int v25; // r2
  int v26; // r0
  int v27; // r0
  int v29; // r0
  int v30; // r0
  int *v31; // [sp+3Ch] [bp-10E0h]
  int v32; // [sp+48h] [bp-10D4h] BYREF
  int v33; // [sp+4Ch] [bp-10D0h] BYREF
  int v34; // [sp+50h] [bp-10CCh] BYREF
  int v35; // [sp+54h] [bp-10C8h] BYREF
  char v36[32]; // [sp+58h] [bp-10C4h] BYREF
  int v37; // [sp+78h] [bp-10A4h] BYREF
  char v38[32]; // [sp+98h] [bp-1084h] BYREF
  int v39; // [sp+B8h] [bp-1064h] BYREF
  char v40[32]; // [sp+D8h] [bp-1044h] BYREF
  int v41; // [sp+F8h] [bp-1024h] BYREF
  _BYTE v42[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 352);
  v3 = *(_DWORD **)(a1 + 344);
  v32 = -64;
  v33 = -64;
  if ( v2 > 0 )
  {
    v31 = &a2[2 * v2];
    v5 = a2;
    do
    {
      v34 = 0;
      v21 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
              a1,
              &v32,
              &v34,
              *v3,
              v3[1],
              v3[2],
              v3[3],
              v3[4],
              v3[5]);
      if ( v34 )
      {
        v6 = v32;
        if ( v32 >= -63 )
          goto LABEL_4;
        v32 = -64;
        V_LOCK(v21);
        V_INT((int)v36, "chain");
        v26 = logfmt_raw((int)v42, 0x1000u);
        V_UNLOCK(v26);
        v23 = 350;
      }
      else
      {
        v32 = -64;
        V_LOCK(v21);
        V_INT((int)&v37, "chain");
        v22 = logfmt_raw((int)v42, 0x1000u);
        V_UNLOCK(v22);
        v23 = 355;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
        170,
        "read_temperature_ltc",
        20,
        v23,
        100,
        v42);
      v6 = v32;
LABEL_4:
      *v5 = v6;
      v7 = v3[1];
      v8 = v3[2];
      v9 = v3[3];
      v10 = v3[4];
      v11 = *(int (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 156);
      v35 = 0;
      v12 = v11(a1, &v33, &v35, *v3, v7, v8, v9, v10, v3[5]);
      if ( !v35 )
      {
        v33 = -64;
        V_LOCK(v12);
        V_INT((int)&v39, "chain");
        v24 = logfmt_raw((int)v42, 0x1000u);
        V_UNLOCK(v24);
        v25 = 371;
LABEL_28:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
          170,
          "read_temperature_ltc",
          20,
          v25,
          100,
          v42);
        v13 = v33;
        goto LABEL_6;
      }
      v13 = v33;
      if ( v33 < -63 )
      {
        v33 = -64;
        V_LOCK(v12);
        V_INT((int)v38, "chain");
        v27 = logfmt_raw((int)v42, 0x1000u);
        V_UNLOCK(v27);
        v25 = 366;
        goto LABEL_28;
      }
LABEL_6:
      v5[1] = v13;
      v14 = v32;
      v15 = dword_1637B8;
      v16 = dword_1637BC;
      v17 = v13 - *(unsigned __int8 *)(a1 + 928) - v32;
      if ( v17 < 0 )
        v17 = v32 - (v13 - *(unsigned __int8 *)(a1 + 928));
      if ( v17 > 3 )
      {
        v18 = dword_1637B8 == -64;
        if ( dword_1637B8 == -64 )
          v18 = dword_1637BC == -64;
        if ( v18 )
        {
          v16 = -64;
          v15 = -64;
        }
        else
        {
          v19 = v32 - dword_1637B8;
          v20 = v13 - dword_1637BC;
          if ( v32 - dword_1637B8 < 0 )
            v19 = dword_1637B8 - v32;
          if ( v20 < 0 )
            v20 = dword_1637BC - v13;
          if ( v19 > v20 )
          {
            V_LOCK(dword_1637BC);
            V_INT((int)v40, "chain");
            v29 = logfmt_raw((int)v42, 0x1000u);
            V_UNLOCK(v29);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
              170,
              "read_temperature_ltc",
              20,
              383,
              20,
              v42);
            v13 = v33;
            v15 = dword_1637B8;
            v16 = dword_1637BC;
            v14 = v33 - *(unsigned __int8 *)(a1 + 928);
            v32 = v14;
            *v5 = v14;
          }
          else if ( v19 < v20 )
          {
            V_LOCK(dword_1637BC);
            V_INT((int)&v41, "chain");
            v30 = logfmt_raw((int)v42, 0x1000u);
            V_UNLOCK(v30);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
              170,
              "read_temperature_ltc",
              20,
              388,
              20,
              v42);
            v14 = v32;
            v15 = dword_1637B8;
            v16 = dword_1637BC;
            v13 = *(unsigned __int8 *)(a1 + 928) + v32;
            v33 = v13;
            v5[1] = v13;
          }
        }
      }
      if ( v15 != v14 )
        dword_1637B8 = v14;
      v5 += 2;
      v3 += 6;
      if ( v16 != v13 )
        dword_1637BC = v13;
    }
    while ( v31 != v5 );
  }
  return 0;
}

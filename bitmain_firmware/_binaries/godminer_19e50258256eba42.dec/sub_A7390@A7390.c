int __fastcall sub_A7390(int a1, int a2)
{
  char v2; // r0
  _BYTE v6[44]; // [sp+20h] [bp-106Ch] BYREF
  _QWORD v7[2]; // [sp+1020h] [bp-6Ch] BYREF
  _DWORD v8[8]; // [sp+1030h] [bp-5Ch] BYREF
  _DWORD v9[8]; // [sp+1050h] [bp-3Ch] BYREF
  __int64 v10; // [sp+1070h] [bp-1Ch]
  char v11; // [sp+1078h] [bp-14h]
  void *src; // [sp+107Ch] [bp-10h]
  int v13; // [sp+1080h] [bp-Ch]
  char v14; // [sp+1087h] [bp-5h]

  v13 = a2 + 8;
  v14 = 0;
  v7[0] = *(_QWORD *)a2;
  v10 = *(_QWORD *)&dword_5AD510;
  *(_DWORD *)(a1 + 532) = 1;
  if ( *(_DWORD *)(a2 + 1132) )
  {
    src = *(void **)(a2 + 1132);
    memcpy(v8, (const void *)(a2 + 8), sizeof(v8));
    memcpy(v9, src, sizeof(v9));
    v11 = (unsigned int)*(double *)(a2 + 1064);
    if ( *(_BYTE *)(a1 + 280) )
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "kiss99 param is ready...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
        173,
        "push_work_rvn_2044",
        18,
        82,
        40,
        v6);
      *(_BYTE *)(a1 + 280) = 0;
      (*(void (__fastcall **)(int, _QWORD *))(a1 + 36))(a1, v7);
    }
    else
    {
      v14 = memcmp(dword_5AD528, v8, 0x20u);
      v2 = memcmp(dword_5AD548, v9, 0x20u);
      v14 |= v2;
      if ( v14 )
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "push work begin for new job comming...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
          173,
          "push_work_rvn_2044",
          18,
          91,
          40,
          v6);
        (*(void (__fastcall **)(int, _QWORD *))(a1 + 36))(a1, v7);
      }
    }
    qword_5AD518 = v7[0];
    qword_5AD568 = v10;
    dword_5AD528[0] = v8[0];
    dword_5AD528[1] = v8[1];
    dword_5AD528[2] = v8[2];
    dword_5AD528[3] = v8[3];
    unk_5AD538 = v8[4];
    unk_5AD53C = v8[5];
    unk_5AD540 = v8[6];
    unk_5AD544 = v8[7];
    dword_5AD548[0] = v9[0];
    dword_5AD548[1] = v9[1];
    dword_5AD548[2] = v9[2];
    dword_5AD548[3] = v9[3];
    unk_5AD558 = v9[4];
    unk_5AD55C = v9[5];
    unk_5AD560 = v9[6];
    unk_5AD564 = v9[7];
    byte_5AD570 = v11;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
  }
  return 0;
}

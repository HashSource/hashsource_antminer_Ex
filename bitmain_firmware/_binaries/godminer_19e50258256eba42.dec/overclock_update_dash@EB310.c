int __fastcall overclock_update_dash(int a1, int a2)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r12
  unsigned __int64 v6; // r2
  _BYTE v10[20]; // [sp+38h] [bp-1054h] BYREF
  _DWORD v11[7]; // [sp+1038h] [bp-54h] BYREF
  int v12; // [sp+1054h] [bp-38h]
  _DWORD v13[7]; // [sp+1058h] [bp-34h] BYREF
  int v14; // [sp+1074h] [bp-18h]
  char v15; // [sp+107Bh] [bp-11h]
  unsigned int i; // [sp+107Ch] [bp-10h]

  v15 = 0;
  if ( *(_BYTE *)(a1 + 276) != 1 )
  {
    for ( i = 0; i <= 1; ++i )
    {
      if ( a2 == dword_4B3CD0[2 * i] )
      {
        v2 = sub_34579C(*(_QWORD *)(a1 + 1048), a2);
        v3 = (int)*(float *)(a1 + 1020);
        v5 = v3 * v4 + v2 * (v3 >> 31);
        v6 = (unsigned int)v2 * (unsigned __int64)(unsigned int)v3;
        HIDWORD(v6) += v5;
        *(_QWORD *)(a1 + 1048) = v6;
        *(float *)(a1 + 1020) = (float)a2;
        *(_DWORD *)(a1 + 1036) = dword_4B3CD0[2 * i + 1];
        v15 = 1;
        break;
      }
    }
    V_LOCK();
    if ( v15 )
    {
      sub_DA978((int)v11, *(int *)(a1 + 272));
      logfmt_raw(
        v10,
        0x1000u,
        0,
        v12,
        v11[0],
        v11[1],
        v11[2],
        v11[3],
        v11[4],
        v11[5],
        v11[6],
        v12,
        "overclock freq %d voltage %d",
        (int)*(float *)(a1 + 1020),
        *(_DWORD *)(a1 + 1036));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
        173,
        "overclock_update_dash",
        21,
        989,
        40,
        v10);
    }
    else
    {
      sub_DA978((int)v13, *(int *)(a1 + 272));
      logfmt_raw(
        v10,
        0x1000u,
        0,
        v14,
        v13[0],
        v13[1],
        v13[2],
        v13[3],
        v13[4],
        v13[5],
        v13[6],
        v14,
        "cannot overclock with freq %d",
        a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
        173,
        "overclock_update_dash",
        21,
        991,
        40,
        v10);
    }
  }
  return 0;
}

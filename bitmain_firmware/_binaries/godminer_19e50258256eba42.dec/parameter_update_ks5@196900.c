int __fastcall parameter_update_ks5(int a1, char a2, int a3, char a4, int a5)
{
  double v5; // r0
  int v10; // [sp+20h] [bp-1004h] BYREF

  if ( *(_BYTE *)(a1 + 276) != 1 )
  {
    if ( a2 && a3 <= 800 )
    {
      LODWORD(v5) = sub_345474(*(_QWORD *)(a1 + 1048));
      *(_QWORD *)(a1 + 1048) = (unsigned __int64)(v5 / (double)a3 * *(float *)(a1 + 1020));
      *(float *)(a1 + 1020) = (float)a3;
    }
    else
    {
      V_LOCK();
      logfmt_raw(&v10, 0x1000u, 0, "Update parameter failed, freq:%f", *(float *)(a1 + 1020));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
        171,
        "parameter_update_ks5",
        20,
        901,
        40,
        &v10);
    }
    if ( a4 && a5 > 1399 && a5 <= 1700 )
      *(_DWORD *)(a1 + 1036) = a5;
  }
  return 0;
}

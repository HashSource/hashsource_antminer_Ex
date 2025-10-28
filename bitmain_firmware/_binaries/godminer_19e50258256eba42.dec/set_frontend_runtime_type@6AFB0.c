_DWORD *__fastcall set_frontend_runtime_type(int a1, int a2)
{
  _BYTE v5[8]; // [sp+1Ch] [bp-1008h] BYREF
  _DWORD *v6; // [sp+101Ch] [bp-8h]

  v6 = 0;
  switch ( a2 )
  {
    case 0:
    case 1:
      v6 = frontend_runtime_ckb();
      break;
    case 2:
      v6 = frontend_runtime_kda();
      break;
    case 3:
      v6 = frontend_runtime_hns();
      break;
    case 4:
      v6 = frontend_runtime_dcr();
      break;
    case 5:
      v6 = frontend_runtime_dash();
      break;
    case 6:
      v6 = frontend_runtime_eth();
      break;
    case 7:
      v6 = frontend_runtime_eth_2282();
      break;
    case 8:
      v6 = frontend_runtime_ltc();
      break;
    case 9:
      v6 = frontend_runtime_zec();
      break;
    case 10:
      v6 = frontend_runtime_rvn();
      break;
    case 11:
      v6 = frontend_runtime_kas();
      break;
    case 12:
      v6 = frontend_runtime_ks5();
      break;
    default:
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "ALGO %d does not define Frontend_Base", a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_interface.c",
        157,
        "set_frontend_runtime_type",
        25,
        63,
        100,
        v5);
      break;
  }
  if ( v6 )
  {
    v6[18] = a1;
    if ( dword_5AD174 )
      free((void *)dword_5AD174);
    v6[19] = a2;
    dword_5AD174 = (int)v6;
  }
  return v6;
}

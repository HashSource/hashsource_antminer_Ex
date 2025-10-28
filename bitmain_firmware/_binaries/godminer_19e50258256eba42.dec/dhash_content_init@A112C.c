void *__fastcall dhash_content_init(int a1)
{
  _BYTE v3[8]; // [sp+1Ch] [bp-1008h] BYREF
  void *v4; // [sp+101Ch] [bp-8h]

  v4 = 0;
  switch ( a1 )
  {
    case 1:
      v4 = dhash_content_ckb_2042();
      break;
    case 2:
      v4 = dhash_content_kda_2110();
      break;
    case 3:
      v4 = dhash_content_hns_2130();
      break;
    case 4:
      v4 = dhash_content_dcr_1727();
      break;
    case 5:
      v4 = dhash_content_dash_1766();
      break;
    case 6:
      v4 = dhash_content_eth_2280();
      break;
    case 7:
      v4 = dhash_content_eth_2282();
      break;
    case 8:
      v4 = dhash_content_ltc_1489();
      break;
    case 9:
      v4 = dhash_content_zec_1746();
      break;
    case 10:
      v4 = dhash_content_rvn_2044();
      break;
    case 11:
      v4 = dhash_content_kas_2380();
      break;
    case 12:
      v4 = dhash_content_ks5_2382();
      break;
    default:
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "ALGO %d does not define dhash_content", a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/dhash_content.c",
        157,
        "dhash_content_init",
        18,
        59,
        100,
        v3);
      break;
  }
  return v4;
}

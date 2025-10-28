int __fastcall sub_20157C(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  char v6[8]; // [sp+24h] [bp-1808h] BYREF
  _BYTE v7[8]; // [sp+824h] [bp-1008h] BYREF
  int v8; // [sp+1824h] [bp-8h]

  v8 = 0;
  switch ( a1 )
  {
    case 0:
      *a2 = 24;
      *a3 = 384;
      *a4 = 400;
      *a5 = 404;
      break;
    case 1:
      *a2 = 16;
      *a3 = 384;
      *a4 = 408;
      *a5 = 412;
      break;
    case 2:
      *a2 = 8;
      *a3 = 384;
      *a4 = 416;
      *a5 = 420;
      break;
    case 3:
      *a2 = 0;
      *a3 = 384;
      *a4 = 424;
      *a5 = 428;
      break;
    case 4:
      *a2 = 24;
      *a3 = 388;
      *a4 = 432;
      *a5 = 436;
      break;
    case 5:
      *a2 = 16;
      *a3 = 388;
      *a4 = 440;
      *a5 = 444;
      break;
    case 6:
      *a2 = 8;
      *a3 = 388;
      *a4 = 448;
      *a5 = 452;
      break;
    case 7:
      *a2 = 0;
      *a3 = 388;
      *a4 = 456;
      *a5 = 460;
      break;
    case 8:
      *a2 = 24;
      *a3 = 392;
      *a4 = 464;
      *a5 = 468;
      break;
    case 9:
      *a2 = 16;
      *a3 = 392;
      *a4 = 472;
      *a5 = 476;
      break;
    case 10:
      *a2 = 8;
      *a3 = 392;
      *a4 = 608;
      *a5 = 612;
      break;
    case 11:
      *a2 = 0;
      *a3 = 392;
      *a4 = 616;
      *a5 = 620;
      break;
    case 12:
      *a2 = 24;
      *a3 = 396;
      *a4 = 624;
      *a5 = 628;
      break;
    case 13:
      *a2 = 16;
      *a3 = 396;
      *a4 = 632;
      *a5 = 636;
      break;
    case 14:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1376;
      *a5 = 1380;
      break;
    case 15:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1408;
      *a5 = 1412;
      break;
    case 16:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1416;
      *a5 = 1420;
      break;
    case 17:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1424;
      *a5 = 1428;
      break;
    case 18:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1432;
      *a5 = 1436;
      break;
    case 19:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1440;
      *a5 = 1444;
      break;
    case 20:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1448;
      *a5 = 1452;
      break;
    case 21:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1472;
      *a5 = 1476;
      break;
    case 22:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1480;
      *a5 = 1484;
      break;
    case 23:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1488;
      *a5 = 1492;
      break;
    case 24:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1496;
      *a5 = 1500;
      break;
    case 25:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1504;
      *a5 = 1508;
      break;
    case 26:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1512;
      *a5 = 1516;
      break;
    case 27:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1536;
      *a5 = 1540;
      break;
    case 28:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1544;
      *a5 = 1548;
      break;
    case 29:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1552;
      *a5 = 1556;
      break;
    case 30:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1560;
      *a5 = 1564;
      break;
    case 31:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1568;
      *a5 = 1572;
      break;
    case 32:
      *a2 = 0;
      *a3 = 1360;
      *a4 = 1576;
      *a5 = 1580;
      break;
    default:
      snprintf(v6, 0x800u, "%s: The uart %d is not supported!!!", "get_send_address_info", a1);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
        178,
        "get_send_address_info",
        21,
        255,
        100,
        v7);
      v8 = -1;
      break;
  }
  return v8;
}

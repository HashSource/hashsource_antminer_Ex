char *__fastcall stratum_recv_line(pthread_mutex_t *a1)
{
  int *v1; // r0
  int *v2; // r0
  _BYTE v5[104]; // [sp+34h] [bp-5068h] BYREF
  char v6[16384]; // [sp+1034h] [bp-4068h] BYREF
  time_t timer; // [sp+5034h] [bp-68h] BYREF
  _DWORD v8[7]; // [sp+5038h] [bp-64h] BYREF
  int v9; // [sp+5054h] [bp-48h]
  _DWORD v10[7]; // [sp+5058h] [bp-44h] BYREF
  int v11; // [sp+5074h] [bp-28h]
  size_t v12; // [sp+5078h] [bp-24h]
  char *s; // [sp+507Ch] [bp-20h]
  signed int v14; // [sp+5080h] [bp-1Ch]
  char *v15; // [sp+5084h] [bp-18h]
  ssize_t v16; // [sp+5088h] [bp-14h]
  char v17; // [sp+508Fh] [bp-Dh]

  v15 = 0;
  pthread_mutex_lock(a1 + 2);
  if ( strchr((const char *)a1[1].__spins, 10) || a1[1].__kind == -1 )
    goto LABEL_15;
  v17 = 1;
  time(&timer);
  while ( 1 )
  {
    memset(v6, 0, sizeof(v6));
    v16 = recv(a1[1].__kind, v6, 0x3FFCu, 0);
    if ( !v16 )
    {
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "stratum_recv_line read 0 bytes");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/stratum_handler.c",
        145,
        "stratum_recv_line",
        17,
        58,
        20,
        v5);
      v17 = 0;
      goto LABEL_13;
    }
    if ( v16 < 0 )
      break;
    stratum_buffer_append((int)a1, v6);
LABEL_11:
    if ( time(0) - timer > 59 || strchr((const char *)a1[1].__spins, 10) )
      goto LABEL_13;
  }
  V_LOCK();
  v1 = _errno_location();
  logfmt_raw(v5, 0x1000u, 0, "stratum_recv_line recv failed err %zd %d", v16, *v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/stratum_handler.c",
    145,
    "stratum_recv_line",
    17,
    63,
    20,
    v5);
  if ( sock_blocks() && (unsigned __int8)socket_full(a1[1].__kind, 1) == 1 )
    goto LABEL_11;
  V_LOCK();
  v2 = _errno_location();
  logfmt_raw(v5, 0x1000u, 0, "stratum_recv_line recv failed detailed error %d", *v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/stratum_handler.c",
    145,
    "stratum_recv_line",
    17,
    65,
    20,
    v5);
  v17 = 0;
LABEL_13:
  if ( v17 != 1 )
  {
    V_LOCK();
    sub_45774((int)v8, a1->__lock);
    logfmt_raw(v6, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, "stratum_recv_line failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_recv_line",
      17,
      74,
      20,
      v6);
    goto LABEL_20;
  }
LABEL_15:
  v14 = strlen((const char *)a1[1].__spins);
  s = strtok((char *)a1[1].__spins, "\n");
  if ( s )
  {
    v15 = strdup(s);
    v12 = strlen(v15);
    if ( v14 <= (int)(v12 + 1) )
      *(_BYTE *)a1[1].__spins = 0;
    else
      memmove(a1[1].__list.__next, (const void *)(a1[1].__spins + v12 + 1), v14 - v12 + 1);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "stratum_recv_line failed to parse a newline-terminated string");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_recv_line",
      17,
      82,
      100,
      v6);
  }
LABEL_20:
  pthread_mutex_unlock(a1 + 2);
  if ( v15 && opt_protocol )
  {
    V_LOCK();
    sub_45774((int)v10, a1->__lock);
    logfmt_raw(v6, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, "< %s", v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_recv_line",
      17,
      97,
      60,
      v6);
  }
  return v15;
}

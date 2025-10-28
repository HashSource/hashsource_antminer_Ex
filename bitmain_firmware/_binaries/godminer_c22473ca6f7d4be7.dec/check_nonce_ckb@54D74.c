int __fastcall check_nonce_ckb(int a1, int a2)
{
  _DWORD *v2; // r8
  int v3; // r12
  int v5; // r4
  unsigned int v6; // r6
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // t1
  int v20; // r3
  int v21; // r1
  int v22; // r2
  unsigned int v23; // r0
  unsigned int v24; // r7
  unsigned int v25; // r3
  unsigned __int8 *v26; // r3
  int v27; // r4
  int v28; // r2
  int v29; // r4
  unsigned int v30; // r0
  unsigned int v31; // t1
  unsigned int v32; // t1
  bool v33; // cc
  _DWORD *v35; // r3
  int v36; // r1
  int v37; // r3
  _DWORD *v38; // r3
  int v39; // r1
  int v40; // r3
  _DWORD *v41; // r3
  int v42; // r1
  _BYTE v43[32]; // [sp+10h] [bp-40h] BYREF
  _DWORD v44[8]; // [sp+30h] [bp-20h] BYREF
  int v45; // [sp+50h] [bp+0h]
  int v46; // [sp+54h] [bp+4h]
  int v47; // [sp+58h] [bp+8h]
  int v48; // [sp+5Ch] [bp+Ch]
  char v49[4096]; // [sp+60h] [bp+10h] BYREF

  v2 = (_DWORD *)a2;
  v3 = *(unsigned __int8 *)(a2 + 65);
  v5 = *(_DWORD *)(a1 + 624);
  v6 = *(_DWORD *)(v5 + 4 * (v3 + 5632));
  v7 = (int *)(v5 + 48 * v3 + 10240);
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v11 = v7[3];
  v7 += 4;
  v44[0] = v8;
  v44[1] = v9;
  v44[2] = v10;
  v44[3] = v11;
  v12 = *v7;
  v13 = v7[1];
  v14 = v7[2];
  v15 = v7[3];
  v7 += 4;
  v44[4] = v12;
  v44[5] = v13;
  v44[6] = v14;
  v44[7] = v15;
  v16 = v7[1];
  v17 = v7[2];
  v18 = v7[3];
  v45 = *v7;
  v46 = v16;
  v47 = v17;
  v48 = v18;
  v19 = v2[12];
  v2 += 12;
  v20 = v2[3];
  v21 = v2[1];
  v22 = v2[2];
  v45 = v19;
  v46 = v21;
  v47 = v22;
  v48 = v20;
  EaglesongHash((int)v43, (int)v44, 0x30u);
  v23 = target_to_diff_ckb(v43);
  v24 = v23;
  if ( v23 <= 0x1F )
  {
    V_LOCK();
    LOWORD(v40) = 27208;
    HIWORD(v40) = (unsigned int)&unk_135D78 >> 16;
    logfmt_raw(v49, 0x1000u, 0, v40, v24, *(unsigned __int8 *)(a2 + 64), 32);
    V_UNLOCK();
    LOWORD(v41) = -14512;
    HIWORD(v41) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v42) = 26996;
    HIWORD(v42) = (unsigned int)&unk_135CA4 >> 16;
    zlog(*v41, v42, 154, "check_nonce_ckb", 15, 336, 20, v49);
    return 2;
  }
  else
  {
    v25 = *(unsigned __int8 *)(a2 + 64);
    if ( v25 == v23 )
    {
      if ( v6 > v25 )
      {
LABEL_9:
        V_LOCK();
        logfmt_raw(v49, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 64), v6);
        V_UNLOCK();
        LOWORD(v35) = -14512;
        HIWORD(v35) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v36) = 26996;
        HIWORD(v36) = (unsigned int)&unk_135CA4 >> 16;
        zlog(*v35, v36, 154, "check_nonce_ckb", 15, 346, 20, v49);
        return 1;
      }
      else
      {
        v26 = v43;
        v27 = v5 + 32 * (*(unsigned __int8 *)(a2 + 65) + 736);
        v28 = v27 - 1;
        v29 = v27 + 31;
        do
        {
          v31 = *v26++;
          v30 = v31;
          v32 = *(unsigned __int8 *)++v28;
          v33 = v30 > v32;
          if ( v30 < v32 )
            break;
          if ( v33 )
            goto LABEL_9;
        }
        while ( v28 != v29 );
        return 0;
      }
    }
    else
    {
      V_LOCK();
      LOWORD(v37) = 27268;
      HIWORD(v37) = (unsigned int)&unk_135DB4 >> 16;
      logfmt_raw(v49, 0x1000u, 0, v37, v24, *(unsigned __int8 *)(a2 + 64), v6);
      V_UNLOCK();
      LOWORD(v38) = -14512;
      HIWORD(v38) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v39) = 26996;
      HIWORD(v39) = (unsigned int)&unk_135CA4 >> 16;
      zlog(*v38, v39, 154, "check_nonce_ckb", 15, 341, 20, v49);
      return 3;
    }
  }
}

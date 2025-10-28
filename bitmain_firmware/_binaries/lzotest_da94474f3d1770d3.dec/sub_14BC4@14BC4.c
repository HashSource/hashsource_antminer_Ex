int __fastcall sub_14BC4(
        int a1,
        int (__fastcall *a2)(int, size_t, int, _DWORD *, int),
        const char *a3,
        const char *a4,
        int a5,
        int a6)
{
  double v6; // d0
  double v7; // d6
  double v8; // d7
  double v10; // d8
  char v11; // r4
  double v12; // d9
  double v13; // d10
  char v14; // r0
  int v15; // r2
  unsigned int v16; // r0
  _BOOL4 v17; // r3
  bool v18; // zf
  unsigned int v19; // r2
  unsigned int v20; // r1
  unsigned int v21; // r1
  unsigned int v22; // r3
  int v23; // r3
  int v24; // r8
  unsigned int v25; // r1
  int v26; // r4
  size_t v27; // r7
  int v28; // r1
  int v29; // r10
  size_t v30; // r8
  int v31; // r0
  unsigned int v32; // r3
  size_t v33; // r0
  FILE *v34; // r0
  size_t v35; // r10
  int v36; // r6
  unsigned int v37; // r1
  int v38; // r4
  int v39; // r7
  int v40; // r2
  int v41; // r0
  int v42; // r5
  int v43; // r2
  int v44; // r10
  int v45; // r5
  int v46; // r4
  int v47; // r0
  int v48; // r2
  int (__fastcall *v49)(unsigned __int8 *, size_t, int, size_t *, int, int, int); // r10
  int v50; // r0
  int v51; // r0
  int v52; // r6
  int (__fastcall *v54)(int, size_t, int, _DWORD *, int); // r4
  int v55; // r0
  int v56; // r1
  int v57; // r0
  unsigned int v58; // r3
  int v59; // r0
  int v60; // r5
  int v61; // r4
  int v62; // r10
  int v63; // r8
  double v64; // d7
  double v65; // d11
  int v66; // r3
  const char *v67; // r12
  int v68; // r3
  const char *v69; // r0
  const char *v70; // r2
  bool v71; // zf
  int v72; // r1
  int v73; // r3
  bool v74; // zf
  int v75; // t1
  int v76; // r1
  unsigned __int8 *v77; // r3
  size_t v78; // r2
  int v79; // r12
  int v80; // t1
  int v81; // t1
  int v82; // r2
  size_t v83; // [sp+24h] [bp-80h]
  unsigned __int8 *v84; // [sp+28h] [bp-7Ch]
  int v85; // [sp+2Ch] [bp-78h]
  size_t v86; // [sp+2Ch] [bp-78h]
  unsigned int v87; // [sp+2Ch] [bp-78h]
  int v89; // [sp+34h] [bp-70h]
  int v90; // [sp+3Ch] [bp-68h]
  unsigned int v91; // [sp+40h] [bp-64h]
  FILE *s; // [sp+44h] [bp-60h]
  int v93; // [sp+48h] [bp-5Ch]
  size_t n[2]; // [sp+58h] [bp-4Ch] BYREF
  _DWORD v97[4]; // [sp+60h] [bp-44h] BYREF
  _DWORD v98[4]; // [sp+70h] [bp-34h] BYREF
  int v99; // [sp+80h] [bp-24h] BYREF
  int v100; // [sp+84h] [bp-20h]
  int v101; // [sp+88h] [bp-1Ch]
  int v102; // [sp+90h] [bp-14h] BYREF
  int v103; // [sp+94h] [bp-10h]
  int v104; // [sp+98h] [bp-Ch]

  if ( opt_dump_compressed_data )
    s = (FILE *)fopen64(opt_dump_compressed_data, "wb");
  else
    s = 0;
  if ( !off_2A640 || ((int (__fastcall *)(int *, _DWORD *))off_2A640)(&dword_2A630, v97) )
  {
    dword_2A638 = 1;
    memset(v97, 0, 12);
  }
  v10 = 0.0;
  v11 = dword_2A658;
  v93 = 0;
  v12 = 0.0;
  v13 = 0.0;
  v91 = dword_2A658;
  v90 = 0;
  v84 = (unsigned __int8 *)dword_2A654;
  v98[0] = 0;
  n[0] = 0;
  while ( 2 )
  {
    v14 = clock();
    v15 = *(_DWORD *)(a1 + 4);
    v89 = (unsigned __int8)(v14 ^ v11);
    ++v90;
    if ( v91 >= dword_2A628 )
      v16 = dword_2A628;
    else
      v16 = v91;
    v83 = v16;
    v17 = v15 > 4998;
    if ( v15 == 999 )
      v17 = 1;
    if ( v17 )
    {
      v21 = v16;
    }
    else
    {
      v18 = v15 == 952;
      if ( v15 != 952 )
        v18 = v15 == 942;
      if ( v18 )
      {
        v21 = v16 + 256 + (v16 >> 3);
      }
      else
      {
        v19 = v15 - 1;
        if ( v19 > 0x3E4 )
          v20 = v16 + 256;
        else
          v20 = v16 + 67;
        if ( v19 > 0x3E4 )
          v21 = v20 + (v16 >> 3);
        else
          v21 = v20 + (v16 >> 4);
      }
    }
    dword_2A674 = v21;
    v22 = v16;
    if ( opt_use_asm_fast_decompressor )
      v22 = v16 + 3;
    dword_2A694 = v22;
    if ( dword_2A688 < v21 )
      _assert_fail(
        "block_c.len <= block_c.saved_len",
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/lzo-2.10/lzotest/lzotest.c",
        0x414u,
        "process_file");
    if ( dword_2A6A8 < v22 )
      _assert_fail(
        "block_d.len <= block_d.saved_len",
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/lzo-2.10/lzotest/lzotest.c",
        0x415u,
        "process_file");
    sub_13F88((unsigned int *)&dword_2A670, v21, v89);
    sub_13F88((unsigned int *)&dword_2A690, dword_2A694, v89);
    n[0] = 0;
    if ( !off_2A640 || ((int (__fastcall *)(int *, int *))off_2A640)(&dword_2A630, &v99) )
    {
      dword_2A638 = 1;
      v99 = 0;
      v100 = 0;
      v101 = 0;
    }
    if ( a5 <= 0 )
    {
      v27 = 0;
      v29 = 0;
      goto LABEL_39;
    }
    v23 = *(_DWORD *)(a1 + 16);
    v24 = dword_2A670;
    n[0] = dword_2A674;
    if ( !v23 || (v25 = *(_DWORD *)(a1 + 8), v25 > dword_2A6B0) )
    {
      v27 = 0;
      v29 = -100;
      goto LABEL_39;
    }
    v26 = 0;
    v27 = 0;
    do
    {
      sub_13F88((unsigned int *)&dword_2A6AC, v25, v83);
      if ( opt_clear_wrkmem )
      {
        lzo_memset(dword_2A6AC, 0, *(_DWORD *)(a1 + 8));
        v28 = dword_2A6AC;
        if ( !opt_dict )
          goto LABEL_35;
      }
      else
      {
        v28 = dword_2A6AC;
        if ( !opt_dict )
          goto LABEL_35;
      }
      v49 = *(int (__fastcall **)(unsigned __int8 *, size_t, int, size_t *, int, int, int))(a1 + 48);
      if ( !v49 )
      {
LABEL_35:
        v29 = (*(int (__fastcall **)(unsigned __int8 *, size_t, int, size_t *, int))(a1 + 16))(v84, v83, v24, n, v28);
        goto LABEL_36;
      }
      v29 = v49(v84, v83, v24, n, v28, dword_2A200[0], dword_2A204);
LABEL_36:
      if ( sub_14024((unsigned int *)&dword_2A6AC, *(_DWORD *)(a1 + 8), (unsigned __int8)v83) )
        puts("WARNING: wrkmem overwrite error (compress) !!!");
      if ( v29 )
        goto LABEL_39;
      if ( opt_compute_adler32 )
      {
        v50 = lzo_adler32(0, 0, 0);
        dword_2A6D4 = lzo_adler32(v50, v84, v83);
      }
      if ( opt_compute_crc32 )
      {
        v47 = lzo_crc32(0, 0);
        dword_2A6DC = lzo_crc32(v47, v84);
      }
      v30 = n[0];
      v32 = dword_2A674;
      if ( v27 < n[0] )
        v27 = n[0];
      if ( n[0] > dword_2A674 )
        goto LABEL_108;
      if ( ++v26 == a5 )
        goto LABEL_39;
      v48 = *(_DWORD *)(a1 + 16);
      n[0] = dword_2A674;
      v24 = dword_2A670;
      if ( !v48 )
        break;
      v25 = *(_DWORD *)(a1 + 8);
    }
    while ( dword_2A6B0 >= v25 );
    v29 = -100;
LABEL_39:
    if ( !off_2A640 || ((int (__fastcall *)(int *, int *))off_2A640)(&dword_2A630, &v102) )
    {
      dword_2A638 = 1;
      v102 = 0;
      v103 = 0;
      v104 = 0;
    }
    if ( dword_2A630 )
    {
      sub_14378(&v99, &v102);
    }
    else
    {
      v6 = 0.0;
      dword_2A634 = -1;
    }
    v12 = v12 + v6;
    v30 = n[0];
    if ( v29 )
    {
      printf("  compression failed in block %lu (%d) (%lu %lu)\n", v90, v29, n[0], v83);
      return 5;
    }
    v85 = dword_2A674;
    v31 = sub_14024((unsigned int *)&dword_2A670, dword_2A674, v89);
    v32 = v85;
    if ( v31 )
    {
LABEL_108:
      printf("  compression overwrite error in block %lu (%lu %lu %lu %lu)\n", v90, v30, v98[0], v83, v32);
      return 5;
    }
    if ( v83 > v30 && opt_optimize_compressed_data )
    {
      v54 = *(int (__fastcall **)(int, size_t, int, _DWORD *, int))(a1 + 20);
      v98[0] = v83;
      if ( !v54 || (unsigned int)dword_2A6B0 < *(_DWORD *)(a1 + 12) )
        goto LABEL_119;
      v55 = v54(dword_2A670, v30, dword_2A690, v98, dword_2A6AC);
      if ( v55 )
      {
        v82 = v55;
        v56 = v98[0];
      }
      else
      {
        v56 = v98[0];
        if ( v83 == v98[0] )
        {
          v32 = dword_2A674;
LABEL_119:
          v87 = v32;
          v57 = sub_14024((unsigned int *)&dword_2A670, v32, v89);
          v58 = v87;
          if ( !v57 )
          {
            v59 = sub_14024((unsigned int *)&dword_2A690, dword_2A694, v89);
            v58 = v87;
            if ( !v59 )
              goto LABEL_48;
          }
          printf("  optimize overwrite error in block %lu (%lu %lu %lu %lu)\n", v90, n[0], v83, v83, v58);
          return 5;
        }
        v82 = 0;
      }
      printf("  optimization failed in block %lu (%d) (%lu %lu %lu)\n", v90, v82, n[0], v56, v83);
      return 5;
    }
LABEL_48:
    if ( s )
    {
      v33 = fwrite((const void *)dword_2A670, 1u, n[0], s);
      if ( v33 != n[0] || fflush(s) )
      {
        v34 = s;
        s = 0;
        fclose(v34);
      }
    }
    if ( !off_2A640 || ((int (__fastcall *)(int *, int *))off_2A640)(&dword_2A630, &v99) )
    {
      dword_2A638 = 1;
      v99 = 0;
      v100 = 0;
      v101 = 0;
    }
    if ( a6 <= 0 )
    {
LABEL_107:
      v44 = 0;
    }
    else
    {
      v35 = n[0];
      v36 = dword_2A690;
      v98[0] = v83;
      if ( a2 )
      {
        v37 = *(_DWORD *)(a1 + 12);
        if ( v37 <= dword_2A6B0 )
        {
          v86 = v27;
          v38 = 0;
          v39 = dword_2A670;
          while ( 1 )
          {
            v42 = (unsigned __int8)v35;
            sub_13F88((unsigned int *)&dword_2A6AC, v37, v35);
            if ( opt_clear_wrkmem )
            {
              lzo_memset(dword_2A6AC, 0, *(_DWORD *)(a1 + 12));
              v43 = dword_2A6AC;
              if ( !opt_dict )
                goto LABEL_67;
            }
            else
            {
              v43 = dword_2A6AC;
              if ( !opt_dict )
                goto LABEL_67;
            }
            if ( *(_DWORD *)(a1 + 52) )
            {
              v44 = (*(int (__fastcall **)(int, size_t, int, _DWORD *, int, int, int))(a1 + 52))(
                      v39,
                      v35,
                      v36,
                      v98,
                      v43,
                      dword_2A200[0],
                      dword_2A204);
              goto LABEL_68;
            }
LABEL_67:
            v44 = a2(v39, v35, v36, v98, v43);
LABEL_68:
            if ( sub_14024((unsigned int *)&dword_2A6AC, *(_DWORD *)(a1 + 12), v42) )
              puts("WARNING: wrkmem overwrite error (decompress) !!!");
            if ( v44 )
            {
              v27 = v86;
              goto LABEL_72;
            }
            v40 = v98[0];
            if ( opt_compute_adler32 )
            {
              v51 = lzo_adler32(1, v36, v98[0]);
              v40 = v98[0];
              dword_2A6E4 = v51;
            }
            if ( opt_compute_crc32 )
            {
              v41 = lzo_crc32(0, v36);
              v40 = v98[0];
              dword_2A6E8 = v41;
            }
            if ( v83 != v40 || (++v38, v38 == a6) )
            {
              v27 = v86;
              goto LABEL_107;
            }
            v37 = *(_DWORD *)(a1 + 12);
            v39 = dword_2A670;
            v35 = n[0];
            v36 = dword_2A690;
            if ( dword_2A6B0 < v37 )
            {
              v27 = v86;
              break;
            }
          }
        }
      }
      v44 = -100;
    }
LABEL_72:
    if ( !off_2A640 || ((int (__fastcall *)(int *, int *))off_2A640)(&dword_2A630, &v102) )
    {
      dword_2A638 = 1;
      v102 = 0;
      v103 = 0;
      v104 = 0;
    }
    if ( dword_2A630 )
    {
      sub_14378(&v99, &v102);
    }
    else
    {
      v6 = 0.0;
      dword_2A634 = -1;
    }
    v10 = v10 + v6;
    v45 = v98[0];
    if ( v44 )
    {
      printf("  decompression failed in block %lu (%d) (%lu %lu %lu)\n", v90, v44, n[0], v98[0], v83);
      return 5;
    }
    if ( v83 != v98[0] )
    {
      printf("  decompression size error in block %lu (%lu %lu %lu)\n", v90, n[0], v98[0], v83);
      return 5;
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 4) - 5000) <= 0x1270 )
      goto LABEL_84;
    if ( lzo_memcmp(v84, dword_2A690, v83) )
    {
      if ( v83 )
      {
        v76 = dword_2A690;
        if ( *(unsigned __int8 *)dword_2A690 != *v84 )
        {
          v78 = 0;
LABEL_189:
          printf("  decompression data error in block %lu at offset %lu (%lu %lu)\n", v90, v78, n[0], v98[0]);
          if ( opt_compute_adler32 )
            printf("      checksum: 0x%08lx 0x%08lx\n", dword_2A6D4, dword_2A6E4);
          return 5;
        }
        v77 = v84;
        v78 = 0;
        while ( ++v78 != v45 )
        {
          v80 = *(unsigned __int8 *)++v76;
          v79 = v80;
          v81 = *++v77;
          if ( v79 != v81 )
            goto LABEL_189;
        }
      }
      v78 = v83;
      goto LABEL_189;
    }
    if ( opt_compute_adler32 && dword_2A6D4 != dword_2A6E4 || opt_compute_crc32 && dword_2A6DC != dword_2A6E8 )
    {
      printf("  checksum error in block %lu (%lu %lu)\n", v90, n[0], v98[0]);
      printf("      adler32: 0x%08lx 0x%08lx\n", dword_2A6D4, dword_2A6E4);
      printf("      crc32: 0x%08lx 0x%08lx\n", dword_2A6DC, dword_2A6E8);
      return 5;
    }
LABEL_84:
    v46 = dword_2A694;
    if ( sub_14024((unsigned int *)&dword_2A690, dword_2A694, v89) )
    {
      printf("  decompression overwrite error in block %lu (%lu %lu %lu %lu)\n", v90, n[0], v98[0], v45, v46);
      return 5;
    }
    v18 = v91 == v83;
    v91 -= v83;
    v84 += v83;
    v93 += v27;
    if ( !v18 )
    {
      v11 = dword_2A658;
      continue;
    }
    break;
  }
  v52 = 0;
  if ( !off_2A640 || ((int (__fastcall *)(int *, _DWORD *))off_2A640)(&dword_2A630, v98) )
  {
    dword_2A638 = 1;
    memset(v98, 0, 12);
  }
  if ( !dword_2A630 )
    dword_2A634 = -1;
  if ( s )
    fclose(s);
  v60 = dword_2A658;
  opt_dump_compressed_data = 0;
  LOWORD(v61) = (unsigned __int16)&off_2A1D4;
  if ( dword_2A658 )
    HIDWORD(v8) = v93;
  HIWORD(v61) = (unsigned int)&off_2A1D4 >> 16;
  if ( !dword_2A658 )
    v6 = 0.0;
  v62 = dword_2A658 * a5;
  if ( dword_2A658 )
  {
    v7 = (double)HIDWORD(v8);
    v8 = 100.0;
  }
  v63 = dword_2A658 * a6;
  if ( dword_2A658 )
  {
    v7 = v7 * v8;
    v6 = v7 / (double)(unsigned int)dword_2A658;
  }
  sub_142B0((char *)n);
  if ( *(_DWORD *)(v61 + 4) )
  {
    v64 = 0.001;
    if ( v12 <= 0.001 )
    {
      v13 = 0.0;
    }
    else
    {
      v64 = (double)(unsigned int)v62;
      v7 = 1000000.0;
    }
    if ( v12 > 0.001 )
      v13 = v64 / v12 / v7;
    if ( v10 <= 0.001 )
      v65 = 0.0;
    else
      v65 = (double)(unsigned int)v63 / v10 / 1000000.0;
  }
  else
  {
    v10 = 0.0;
    v12 = 0.0;
    v13 = 0.0;
    v65 = 0.0;
  }
  dword_2A6F0 += v93;
  ++dword_2A6EC;
  dbl_2A700 = dbl_2A700 + v6;
  dword_2A6F4 += v60;
  dword_2A6F8 += v90;
  if ( v13 > 0.0 )
  {
    ++dword_2A708;
    dbl_2A718 = dbl_2A718 + v13;
    dbl_2A710 = dbl_2A710 + 1.0 / v13;
  }
  if ( v65 > 0.0 )
  {
    ++dword_2A720;
    dbl_2A730 = dbl_2A730 + v65;
    dbl_2A728 = dbl_2A728 + 1.0 / v65;
  }
  v66 = *(_DWORD *)(v61 + 8);
  if ( v66 > 1 )
  {
    printf("  compressed into %lu bytes,  %s%%  (%s%.3f bits/byte)\n", v93, (const char *)n, "", v6 * 0.08);
    printf("%-15s %5ld: ", "compress", a5);
    printf("%10lu bytes, %8.2f secs, %8.3f MB/sec\n", v62, v12, v13);
    printf("%-15s %5ld: ", "decompress", a6);
    printf("%10lu bytes, %8.2f secs, %8.3f MB/sec\n", v63, v10, v65);
    putchar(10);
    if ( *(int *)(v61 + 8) > 0 )
    {
LABEL_163:
      v67 = a4;
      v68 = *(unsigned __int8 *)a4;
      if ( *a4 )
      {
        v69 = a4 + 1;
        v70 = a4;
        do
        {
          v71 = v68 == 92;
          if ( v68 != 92 )
            v71 = v68 == 47;
          v72 = v71;
          if ( v68 == 58 )
            v73 = v72 | 1;
          else
            v73 = v72;
          v74 = v73 == 0;
          if ( v73 )
            v67 = v69;
          v75 = *(unsigned __int8 *)v69++;
          v68 = v75;
          if ( v74 )
            v70 = v67;
        }
        while ( v68 );
      }
      else
      {
        v70 = a4;
      }
      printf("%-13s| %-14s %8lu %4lu %9lu %4s %s%8.3f %8.3f |\n", a3, v70, v60, v90, v93, (const char *)n, "", v13, v65);
      if ( *(int *)(v61 + 8) > 1 )
        putchar(10);
    }
  }
  else if ( v66 == 1 )
  {
    goto LABEL_163;
  }
  if ( *(_DWORD *)a1 != dword_2A738 )
  {
    dword_2A738 = *(_DWORD *)a1;
    ++dword_2A73C;
  }
  return v52;
}

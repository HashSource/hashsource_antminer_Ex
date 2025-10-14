// Decompiled: lzotest_9c21fc69afefc2d9

int _init(EVP_PKEY_CTX *ctx)

{
    int iVar1;

    iVar1 = FUN_00013850();
    return iVar1;
}

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int main(int param_1, undefined4 *param_2)

{
    byte bVar1;
    bool bVar2;
    ulonglong uVar3;
    long lVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    int iVar8;
    time_t tVar9;
    size_t sVar10;
    time_t tVar11;
    FILE *pFVar12;
    char *pcVar13;
    int iVar14;
    char cVar15;
    int *piVar16;
    byte *pbVar17;
    int *piVar18;
    uint uVar19;
    byte *__s;
    char *pcVar20;
    undefined4 *puVar21;
    int iVar22;
    int unaff_r11;
    char *pcVar23;
    uint uVar24;
    uint uVar25;
    bool bVar26;
    bool bVar27;
    double dVar28;
    double dVar29;
    undefined8 uVar30;
    int *piVar31;
    byte *local_270;
    int local_268;
    int local_244;
    int local_240;
    byte abStack_239[5];
    char *local_234;
    byte *local_22c;
    code *local_228;
    int local_224;
    undefined4 local_220;
    int local_218;
    undefined4 *local_214;
    int local_20c;
    undefined1 local_39;

    lzo_pclock_open_default(&DAT_00043518);
    DAT_000430bc = (char *)*param_2;
    cVar15 = *DAT_000430bc;
    if (cVar15 != '\0') {
        pcVar13 = DAT_000430bc;
        pcVar20 = DAT_000430bc;
        bVar26 = false;
        do {
            while (true) {
                bVar2 = bVar26;
                pcVar23 = pcVar20;
                bVar26 = cVar15 == '\\';
                bVar27 = cVar15 == '/';
                pcVar13 = pcVar13 + 1;
                cVar15 = *pcVar13;
                if (!bVar26 && !bVar27)
                    break;
                pcVar20 = pcVar13;
                bVar26 = bVar26 || bVar27;
                if (cVar15 == '\0')
                    goto LAB_00012734;
            }
            pcVar20 = pcVar23;
            bVar26 = bVar2;
        } while (cVar15 != '\0');
    LAB_00012734:
        if (bVar2) {
            DAT_000430bc = pcVar23;
        }
    }
    uVar5 = lzo_version_string();
    uVar6 = lzo_version_date();
    printf("\nLZO real-time data compression library (v%s, %s).\n", uVar5,
           uVar6);
    puts("Copyright (C) 1996-2017 Markus Franz Xaver Johannes Oberhumer\nAll "
         "Rights Reserved.\n");
    dVar29 = 5.09278989851428e-313;
    pcVar13 = (char *)0x4;
    piVar31 = (int *)0x4;
    uVar30 = 0x400000004;
    iVar7 = __lzo_init_v2(0x20a0, 2, 4, 4, 4, 4, 4, 4, 4, 0x18);
    if (iVar7 == 0) {
        DAT_0004350c = 0x4000000;
        DAT_00043510 = 0x40000;
        pcVar20 = DAT_000430bc;
        if (1 < param_1) {
            __s = abStack_239 + 1;
            memset(__s, 0, 0x38);
            local_228 = FUN_00013b6c;
            local_224 = 1;
            local_220 = 0xffffffff;
            pbVar17 = opt_corpus_path;
            piVar18 = opt_corpus;
            local_234 = pcVar20;
            local_218 = param_1;
            local_214 = param_2;
        LAB_00012824:
            do {
                opt_corpus = piVar18;
                opt_corpus_path = pbVar17;
                iVar8 =
                    lzo_getopt(__s, "Ab::c:C:d:D:FhHLm::n:OqQs:STvV@123456789",
                               &DAT_000307d0, 0);
                iVar7 = local_224;
                pFVar12 = stdout;
                if (iVar8 < 0) {
                    if (DAT_00043104 == 0) {
                        FUN_00014378(default_method);
                    }
                    if ((DAT_00043104 < 2) || (opt_read_from_stdin == 0)) {
                        if ((DAT_00043510 == 0) ||
                            (DAT_0004350c < DAT_00043510)) {
                            DAT_00043510 = DAT_0004350c;
                        }
                        iVar8 = 0;
                        DAT_00043598 = 0;
                        if (opt_c_loops < 1) {
                            opt_c_loops = 1;
                        }
                        if (opt_d_loops < 1) {
                            opt_d_loops = 1;
                        }
                        if (0 < DAT_00043104) {
                            bVar26 = false;
                            uVar24 = 0;
                            piVar18 = &DAT_00043108;
                            do {
                                iVar14 = 0x15;
                                piVar16 = (int *)&UNK_0002f870;
                                while (*piVar18 != iVar14) {
                                    if ((piVar16 == (int *)&DAT_00030558) ||
                                        (piVar16[0xe] == 0)) {
                                        if (bVar26) {
                                            DAT_00043598 = uVar24;
                                        }
                                        /* WARNING: Subroutine does not return
                                         */
                                        __assert_fail(
                                            "c != NULL",
                                            "/workspace/jenkins/jenkins/"
                                            "workspace/Antminer_E9-Pro_release/"
                                            "build/rootfs/buildroot/tmp/"
                                            "release/build/lzo-2.10/lzotest/"
                                            "lzotest.c",
                                            0x7b2, "main");
                                    }
                                    iVar14 = piVar16[0xf];
                                    piVar16 = piVar16 + 0xe;
                                }
                                iVar8 = iVar8 + 1;
                                if (uVar24 < (uint)piVar16[2]) {
                                    bVar26 = true;
                                    uVar24 = piVar16[2];
                                }
                                if (uVar24 < (uint)piVar16[3]) {
                                    bVar26 = true;
                                    uVar24 = piVar16[3];
                                }
                                piVar18 = piVar18 + 1;
                            } while (DAT_00043104 != iVar8);
                            if (bVar26) {
                                DAT_00043598 = uVar24;
                            }
                        }
                        FUN_000140b4(&DAT_00043594, DAT_00043598, 0);
                        lzo_memset(DAT_00043594, 0, DAT_00043598);
                        FUN_000140b4(&DAT_00043558,
                                     DAT_00043510 + 0x100 + (DAT_00043510 >> 3),
                                     0x10);
                        if (opt_use_asm_fast_decompressor == 0) {
                            iVar8 = 0;
                        } else {
                            iVar8 = 3;
                        }
                        FUN_000140b4(&DAT_00043578, DAT_00043510 + iVar8, 0x10);
                        if (opt_dict != 0) {
                            opt_optimize_compressed_data = 0;
                            iVar8 = opt_max_dict_len;
                            if (0xbffd < opt_max_dict_len - 1U) {
                                iVar8 = 0xbfff;
                            }
                            FUN_000140b4(&DAT_000430e8, iVar8, 0, 0);
                            if (opt_dictionary_file == (byte *)0x0) {
                            LAB_00013718:
                                if (DAT_000430ec != 0)
                                    goto LAB_00012be0;
                            } else {
                                DAT_000430ec = 0;
                                pFVar12 =
                                    fopen64((char *)opt_dictionary_file, "rb");
                                if (pFVar12 != (FILE *)0x0) {
                                    DAT_000430ec = fread(DAT_000430e8, 1,
                                                         DAT_000430fc, pFVar12);
                                    fclose(pFVar12);
                                    DAT_000430f0 = lzo_adler32(1, DAT_000430e8,
                                                               DAT_000430ec);
                                }
                                if (DAT_000430ec != 0) {
                                    printf("Using dictionary \'%s\', %lu "
                                           "bytes, ID 0x%08lx.\n",
                                           opt_dictionary_file, DAT_000430ec,
                                           DAT_000430f0);
                                    goto LAB_00013718;
                                }
                            }
                            DAT_000430ec = 0x1000;
                            if (DAT_000430fc < 0x1000) {
                                DAT_000430ec = DAT_000430fc;
                            }
                            lzo_memset(DAT_000430e8, 0, DAT_000430ec);
                            uVar24 = 0;
                            iVar8 = 0;
                            do {
                                uVar25 = uVar24 + 0x10;
                                uVar19 = uVar24;
                                do {
                                    if (DAT_000430ec <= uVar19)
                                        goto LAB_000134a0;
                                    uVar24 = uVar19 + 1;
                                    *(char *)((int)DAT_000430e8 + uVar19) =
                                        (char)iVar8;
                                    uVar19 = uVar24;
                                } while (uVar25 != uVar24);
                                iVar8 = iVar8 + 1;
                            } while (iVar8 != 0x100);
                        LAB_000134a0:
                            DAT_000430f0 =
                                lzo_adler32(1, DAT_000430e8, DAT_000430ec);
                            printf("Using default dictionary, %lu bytes, ID "
                                   "0x%08lx.\n",
                                   DAT_000430ec, DAT_000430f0);
                        }
                    LAB_00012be0:
                        tVar9 = time((time_t *)0x0);
                        if (DAT_00043104 < 1) {
                            unaff_r11 = 0;
                            goto LAB_00012cd4;
                        }
                        local_270 = (byte *)&DAT_00043108;
                        local_268 = 0;
                        do {
                            pbVar17 = local_270 + 4;
                            iVar8 = *(int *)local_270;
                            local_270 = pbVar17;
                            if (((iVar7 < param_1) ||
                                 (opt_corpus_path != (byte *)0x0)) ||
                                (opt_read_from_stdin != 0)) {
                                if ((local_268 == 0) && (0 < opt_verbose)) {
                                    printf("%lu block-size\n\n", DAT_00043510);
                                }
                                pbVar17 = opt_corpus_path;
                                iVar14 = 0x15;
                                piVar18 = (int *)&UNK_0002f870;
                                while (iVar8 != iVar14) {
                                    if ((piVar18 == (int *)&DAT_00030558) ||
                                        (piVar18[0xe] == 0)) {
                                        /* WARNING: Subroutine does not return
                                         */
                                        __assert_fail(
                                            "find_method_by_id(method) != NULL",
                                            "/workspace/jenkins/jenkins/"
                                            "workspace/Antminer_E9-Pro_release/"
                                            "build/rootfs/buildroot/tmp/"
                                            "release/build/lzo-2.10/lzotest/"
                                            "lzotest.c",
                                            0x7e1, "main");
                                    }
                                    iVar14 = piVar18[0xf];
                                    piVar18 = piVar18 + 0xe;
                                }
                                if (opt_corpus_path == (byte *)0x0) {
                                    iVar14 = iVar7;
                                    if (iVar7 < param_1) {
                                        do {
                                            puVar21 = param_2 + iVar14;
                                            while (true) {
                                                iVar14 = iVar14 + 1;
                                                uVar30 = 0;
                                                unaff_r11 = FUN_00015c94(
                                                    iVar8, *puVar21,
                                                    opt_c_loops, opt_d_loops, 0,
                                                    0);
                                                if (unaff_r11 != 2)
                                                    break;
                                                puVar21 = puVar21 + 1;
                                                if (param_1 <= iVar14)
                                                    goto LAB_00012df0;
                                            }
                                            if (param_1 <= iVar14)
                                                goto LAB_00012df4;
                                        } while (unaff_r11 == 0);
                                        if (opt_read_from_stdin == 0)
                                            goto LAB_00012cd4;
                                    } else {
                                    LAB_00012df0:
                                        unaff_r11 = 0;
                                    LAB_00012df4:
                                        iVar14 = unaff_r11;
                                        if (opt_read_from_stdin == 0)
                                            goto LAB_00013048;
                                        while (unaff_r11 = iVar14,
                                               unaff_r11 == 0) {
                                        LAB_00012e10:
                                            do {
                                                do {
                                                    pcVar20 =
                                                        fgets((char *)__s,
                                                              0x1ff, stdin);
                                                    if (pcVar20 == (char *)0x0)
                                                        goto LAB_00013094;
                                                    local_39 = 0;
                                                    sVar10 =
                                                        strlen((char *)__s);
                                                    if ((__s < __s + sVar10) &&
                                                        (uVar24 =
                                                             (uint)abStack_239
                                                                 [sVar10],
                                                         uVar24 - 9 < 2 ||
                                                             (uVar24 == 0x20 ||
                                                              uVar24 == 0xd))) {
                                                        pbVar17 = abStack_239 +
                                                                  sVar10;
                                                        do {
                                                            *pbVar17 = 0;
                                                            if (__s == pbVar17)
                                                                break;
                                                            pbVar17 =
                                                                pbVar17 + -1;
                                                            uVar24 =
                                                                (uint)*pbVar17;
                                                        } while (
                                                            uVar24 - 9 < 2 ||
                                                            (uVar24 == 0xd ||
                                                             uVar24 == 0x20));
                                                    }
                                                    uVar24 =
                                                        (uint)abStack_239[1];
                                                } while (uVar24 == 0);
                                                pbVar17 = __s;
                                                if (uVar24 - 9 < 2 ||
                                                    (uVar24 == 0x20 ||
                                                     uVar24 == 0xd)) {
                                                    do {
                                                        pbVar17 = pbVar17 + 1;
                                                        uVar24 = (uint)*pbVar17;
                                                        if (uVar24 == 0)
                                                            goto LAB_00012e10;
                                                    } while (uVar24 - 9 < 2 ||
                                                             (uVar24 == 0xd ||
                                                              uVar24 == 0x20));
                                                }
                                                uVar30 = 0;
                                                iVar14 = FUN_00015c94(
                                                    iVar8, pbVar17, opt_c_loops,
                                                    opt_d_loops, 0, 0);
                                            } while (iVar14 == 2);
                                        }
                                    }
                                    bVar26 = false;
                                    goto LAB_00013098;
                                }
                                sVar10 = strlen((char *)opt_corpus_path);
                                piVar18 = opt_corpus;
                                lVar4 = opt_d_loops;
                                iVar14 = opt_c_loops;
                                if (0xf3 < sVar10) {
                                    unaff_r11 = 1;
                                    goto LAB_00012cd4;
                                }
                                memcpy(__s, pbVar17, sVar10 + 1);
                                if ((sVar10 != 0) &&
                                    (bVar1 = abStack_239[sVar10],
                                     bVar1 != 0x3a &&
                                         (bVar1 != 0x5c && bVar1 != 0x2f))) {
                                    (__s + sVar10)[0] = 0x2f;
                                    (__s + sVar10)[1] = 0;
                                    sVar10 = sVar10 + 1;
                                }
                                pcVar20 = (char *)*piVar18;
                                if (pcVar20 != (char *)0x0) {
                                    do {
                                        iVar22 = piVar18[1];
                                        strcpy((char *)(__s + sVar10), pcVar20);
                                        uVar30 =
                                            CONCAT44(&local_240, &local_244);
                                        unaff_r11 = FUN_00015c94(
                                            iVar8, __s, iVar22 * iVar14,
                                            iVar22 * lVar4, &local_244,
                                            &local_240);
                                        if (unaff_r11 != 0)
                                            goto LAB_00013048;
                                        if (piVar18[2] != local_244) {
                                            unaff_r11 = 4;
                                            puts("  invalid test suite");
                                            goto LAB_00012cd4;
                                        }
                                        if ((piVar18[3] != 0) &&
                                            (piVar18[3] != local_240)) {
                                            unaff_r11 = 7;
                                            printf("  internal checksum error "
                                                   "!!  (0x%08lx 0x%08lx)\n");
                                            goto LAB_00012cd4;
                                        }
                                        piVar18 = piVar18 + 4;
                                        pcVar20 = (char *)*piVar18;
                                    } while (pcVar20 != (char *)0x0);
                                }
                                unaff_r11 = 0;
                            LAB_00013048:
                                bVar26 = unaff_r11 == 0;
                            } else {
                                FUN_00014610(DAT_000430bc, 0xffffffff);
                            LAB_00013094:
                                bVar26 = true;
                            LAB_00013098:
                                opt_read_from_stdin = 0;
                            }
                            local_268 = local_268 + 1;
                            if (DAT_00043104 <= local_268) {
                                bVar26 = false;
                            }
                            if (!bVar26) {
                            LAB_00012cd4:
                                tVar11 = time((time_t *)0x0);
                                if ((opt_totals != 0) &&
                                    (((0 < opt_verbose && (1 < DAT_000435d4)) ||
                                      (1 < opt_totals)))) {
                                    uVar24 = DAT_000435d4;
                                    if (DAT_000435d4 == 0) {
                                        uVar24 = 1;
                                    }
                                    pbVar17 = DAT_00043620;
                                    if (DAT_00043624 != (byte *)0x1) {
                                        local_270 = (byte *)0x31a84;
                                        pbVar17 = DAT_00043624;
                                    }
                                    pcVar13 = "";
                                    if (DAT_00043624 == (byte *)0x1) {
                                        local_270 = pbVar17;
                                    }
                                    piVar31 = &local_240;
                                    sprintf((char *)__s, "[clock=%d]",
                                            DAT_0004351c);
                                    if (opt_pclock == 0) {
                                        __s = local_270;
                                    }
                                    FUN_000144e8(
                                        SUB84(DAT_000435e8 / (double)uVar24, 0),
                                        piVar31);
                                    uVar5 = FUN_0002f078(DAT_000435dc, uVar24);
                                    uVar3 = (ulonglong)DAT_000435e0;
                                    uVar6 = FUN_0002f078(DAT_000435d8, uVar24);
                                    if (1e-05 < DAT_000435f8) {
                                        dVar29 =
                                            (double)DAT_000435f0 / DAT_000435f8;
                                    } else {
                                        dVar29 = 0.0;
                                    }
                                    if (1e-05 < DAT_00043610) {
                                        dVar28 =
                                            (double)DAT_00043608 / DAT_00043610;
                                    } else {
                                        dVar28 = 0.0;
                                    }
                                    printf("%-13s  %-12s %10lu %4.1f %9lu %4s "
                                           "%8.3f %8.3f\n",
                                           __s, "***AVG***", uVar5,
                                           (double)uVar3 / (double)uVar24,
                                           uVar6, piVar31, dVar29, dVar28);
                                    if (DAT_000435dc == 0) {
                                        uVar5 = 0;
                                    } else {
                                        uVar5 = SUB84(
                                            ((double)DAT_000435d8 * 100.0) /
                                                (double)DAT_000435dc,
                                            0);
                                    }
                                    FUN_000144e8(uVar5, piVar31);
                                    if (1e-05 < DAT_000435f8) {
                                        dVar29 =
                                            (double)DAT_000435f0 / DAT_000435f8;
                                    } else {
                                        dVar29 = 0.0;
                                    }
                                    if (1e-05 < DAT_00043610) {
                                        dVar28 =
                                            (double)DAT_00043608 / DAT_00043610;
                                    } else {
                                        dVar28 = 0.0;
                                    }
                                    uVar30 =
                                        CONCAT44(DAT_000435d8, DAT_000435e0);
                                    printf("%-13s  %-12s %10lu %4lu %9lu %4s "
                                           "%s%8.3f %8.3f\n",
                                           local_270, "***TOTALS***",
                                           DAT_000435dc, DAT_000435e0,
                                           DAT_000435d8, piVar31, "", dVar29,
                                           dVar28);
                                }
                                if ((opt_execution_time != 0) ||
                                    ((1 < DAT_00043104 && (0 < opt_verbose)))) {
                                    printf(
                                        "\n%s: execution time: %lu seconds\n",
                                        DAT_000430bc, tVar11 - tVar9,
                                        &DAT_000430bc, uVar30, piVar31, pcVar13,
                                        dVar29);
                                }
                                if (unaff_r11 != 0) {
                                    printf("\n%s: exit code: %d\n",
                                           DAT_000430bc, unaff_r11,
                                           &DAT_000430bc, uVar30, piVar31,
                                           pcVar13, dVar29);
                                }
                                DAT_00043518 = 0;
                                DAT_00043524 = 0;
                                DAT_00043528 = 0;
                                DAT_0004351c = -1;
                                return unaff_r11;
                            }
                        } while (true);
                    }
                    printf("%s: cannot use multiple methods and \'-@\'\n",
                           DAT_000430bc);
                LAB_000128d0:
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                if (iVar8 == 100) {
                LAB_00012a04:
                    if ((local_22c == (byte *)0x0) || (9 < *local_22c - 0x30))
                        goto LAB_000128d0;
                    opt_d_loops = strtol((char *)local_22c, (char **)0x0, 10);
                    pbVar17 = opt_corpus_path;
                    piVar18 = opt_corpus;
                    goto LAB_00012824;
                }
                pbVar17 = opt_corpus_path;
                piVar18 = opt_corpus;
                if (iVar8 < 0x65) {
                    if (iVar8 != 0x46) {
                        if (iVar8 < 0x47) {
                            if (iVar8 == 0x3f)
                                goto LAB_00013754;
                            if (iVar8 < 0x40) {
                                if (0x39 < iVar8) {
                                    if (iVar8 != 0x3a) {
                                    LAB_00013564:
                                        fprintf(stderr,
                                                "%s: internal error in getopt "
                                                "(%d)\n",
                                                DAT_000430bc, iVar8);
                                    }
                                    goto LAB_000128d0;
                                }
                                if (iVar8 < 0x31) {
                                    if (iVar8 != 0)
                                        goto LAB_00013564;
                                    goto LAB_000128d0;
                                }
                                if (local_20c == 0) {
                                    local_240._0_2_ = (ushort)(byte)iVar8;
                                    FUN_00014ad0(&local_240);
                                    pbVar17 = opt_corpus_path;
                                    piVar18 = opt_corpus;
                                } else {
                                    FUN_00014ad0(local_214[local_224] +
                                                 local_20c + -1);
                                    local_20c = 0;
                                    local_224 = local_224 + 1;
                                    pbVar17 = opt_corpus_path;
                                    piVar18 = opt_corpus;
                                }
                                goto LAB_00012824;
                            }
                            if (iVar8 == 0x41) {
                                opt_use_asm_decompressor = 1;
                                goto LAB_00012824;
                            }
                            if (iVar8 < 0x41) {
                                opt_read_from_stdin = 1;
                                goto LAB_00012824;
                            }
                            if (iVar8 != 0x43) {
                                if (iVar8 == 0x44)
                                    goto LAB_00012a04;
                                goto LAB_00013564;
                            }
                        } else {
                            if (iVar8 == 0x53) {
                                opt_use_safe_decompressor = 1;
                                goto LAB_00012824;
                            }
                            if (iVar8 < 0x54) {
                                if (iVar8 == 0x4c) {
                                    fflush(stdout);
                                    fflush(stderr);
                                    fwrite(
                                        "   The LZO library is free software; "
                                        "you can redistribute it and/or\n   "
                                        "modify it under the terms of the GNU "
                                        "General Public License as\n   "
                                        "published by the Free Software "
                                        "Foundation; either version 2 of\n   "
                                        "the License, or (at your option) any "
                                        "later version.\n\n   The LZO library "
                                        "is distributed in the hope that it "
                                        "will be useful,\n   but WITHOUT ANY "
                                        "WARRANTY; without even the implied "
                                        "warranty of\n   MERCHANTABILITY or "
                                        "FITNESS FOR A PARTICULAR PURPOSE.  "
                                        "See the\n   GNU General Public "
                                        "License for more details.\n",
                                        1, 0x1f9, pFVar12);
                                    fwrite(
                                        "\n   You should have received a copy "
                                        "of the GNU General Public License\n   "
                                        "along with the LZO library; see the "
                                        "file COPYING.\n   If not, write to "
                                        "the Free Software Foundation, Inc.,\n "
                                        "  51 Franklin Street, Fifth Floor, "
                                        "Boston, MA 02110-1301, USA.\n\n   "
                                        "Markus F.X.J. Oberhumer\n   "
                                        "<markus@oberhumer.com>\n   "
                                        "http://www.oberhumer.com/opensource/"
                                        "lzo/\n\n",
                                        1, 0x156, pFVar12);
                                    fflush(pFVar12);
                                    /* WARNING: Subroutine does not return */
                                    exit(0);
                                }
                                if (iVar8 < 0x4d)
                                    goto LAB_00013768;
                                if (iVar8 == 0x4f) {
                                    opt_optimize_compressed_data = 1;
                                } else {
                                    if (iVar8 != 0x51)
                                        goto LAB_00013564;
                                    opt_verbose = 0;
                                }
                                goto LAB_00012824;
                            }
                            if (iVar8 == 0x56)
                                goto LAB_00013620;
                            if (iVar8 < 0x57) {
                                if (iVar8 != 0x54)
                                    goto LAB_00013564;
                                opt_totals = opt_totals + 1;
                                goto LAB_00012824;
                            }
                            if (iVar8 == 0x62) {
                                DAT_00043510 = 0;
                                if (local_22c != (byte *)0x0) {
                                    if (9 < *local_22c - 0x30)
                                        goto LAB_000128d0;
                                    DAT_00043510 = strtol((char *)local_22c,
                                                          (char **)0x0, 10);
                                    pbVar17 = opt_corpus_path;
                                    piVar18 = opt_corpus;
                                }
                                goto LAB_00012824;
                            }
                            if (iVar8 != 99)
                                goto LAB_00013564;
                        }
                        if ((local_22c == (byte *)0x0) ||
                            (9 < *local_22c - 0x30))
                            goto LAB_000128d0;
                        opt_c_loops =
                            strtol((char *)local_22c, (char **)0x0, 10);
                        pbVar17 = opt_corpus_path;
                        piVar18 = opt_corpus;
                        goto LAB_00012824;
                    }
                    opt_use_asm_fast_decompressor = 1;
                    goto LAB_00012824;
                }
                if (iVar8 == 0x202) {
                LAB_00013698:
                    if ((local_22c == (byte *)0x0) || (*local_22c == 0))
                        goto LAB_000128d0;
                    opt_corpus_path = local_22c;
                    pbVar17 = opt_corpus_path;
                    piVar18 = (int *)&DAT_00030610;
                } else if (iVar8 < 0x203) {
                    if (iVar8 == 0x73)
                        goto LAB_00013698;
                    if (iVar8 < 0x74) {
                        if (iVar8 == 0x6d) {
                            FUN_00014ad0(local_22c);
                            pbVar17 = opt_corpus_path;
                            piVar18 = opt_corpus;
                        } else {
                            if (iVar8 < 0x6e) {
                                if (iVar8 == 0x68) {
                                LAB_00013754:
                                    do {
                                        iVar8 = FUN_00014610(DAT_000430bc, 0);
                                    LAB_00013768:
                                    } while (iVar8 == 0x48);
                                }
                                goto LAB_00013564;
                            }
                            if (iVar8 == 0x6e) {
                                if ((local_22c == (byte *)0x0) ||
                                    (9 < *local_22c - 0x30))
                                    goto LAB_000128d0;
                                opt_c_loops =
                                    strtol((char *)local_22c, (char **)0x0, 10);
                                opt_d_loops = opt_c_loops;
                                pbVar17 = opt_corpus_path;
                                piVar18 = opt_corpus;
                            } else {
                                if (iVar8 != 0x71)
                                    goto LAB_00013564;
                                opt_verbose = opt_verbose + -1;
                            }
                        }
                    } else {
                        if (iVar8 == 0x156) {
                        LAB_00013620:
                            /* WARNING: Subroutine does not return */
                            exit(0);
                        }
                        if (iVar8 < 0x157) {
                            if (iVar8 != 0x76)
                                goto LAB_00013564;
                            opt_verbose = opt_verbose + 1;
                        } else {
                            if (iVar8 == 0x168)
                                goto LAB_00013754;
                            if (iVar8 != 0x201)
                                goto LAB_00013564;
                            opt_compute_adler32 = 1;
                        }
                    }
                } else if (iVar8 == 0x207) {
                    opt_execution_time = 1;
                } else if (iVar8 < 0x208) {
                    if (iVar8 == 0x204) {
                        opt_compute_crc32 = 1;
                    } else if (iVar8 < 0x204) {
                        opt_clear_wrkmem = 1;
                    } else if (iVar8 == 0x205) {
                        opt_dictionary_file = local_22c;
                        opt_dict = 1;
                    } else {
                        if (iVar8 != 0x206)
                            goto LAB_00013564;
                        opt_dump_compressed_data = local_22c;
                    }
                } else if (iVar8 == 0x209) {
                    if ((local_22c == (byte *)0x0) || (9 < *local_22c - 0x30))
                        goto LAB_000128d0;
                    opt_max_dict_len =
                        strtol((char *)local_22c, (char **)0x0, 10);
                    pbVar17 = opt_corpus_path;
                    piVar18 = opt_corpus;
                } else if (iVar8 < 0x209) {
                    if ((local_22c == (byte *)0x0) || (9 < *local_22c - 0x30))
                        goto LAB_000128d0;
                    DAT_0004350c = strtol((char *)local_22c, (char **)0x0, 10);
                    pbVar17 = opt_corpus_path;
                    piVar18 = opt_corpus;
                } else if (iVar8 == 0x20a) {
                    if ((local_22c == (byte *)0x0) ||
                        (pbVar17 = local_22c, piVar18 = (int *)&DAT_00030700,
                         *local_22c == 0))
                        goto LAB_000128d0;
                } else {
                    if (iVar8 != 0x20b)
                        goto LAB_00013564;
                    if ((local_22c == (byte *)0x0) || (9 < *local_22c - 0x30))
                        goto LAB_000128d0;
                    opt_pclock = strtol((char *)local_22c, (char **)0x0, 10);
                    pbVar17 = opt_corpus_path;
                    piVar18 = opt_corpus;
                    if (0 < opt_pclock) {
                        DAT_0004351c = opt_pclock;
                    }
                }
            } while (true);
        }
        FUN_00014610(DAT_000430bc, 0xffffffff, 0);
    }
    puts("internal error - lzo_init() failed !!!");
    puts("(this usually indicates a compiler bug - try recompiling\nwithout "
         "optimizations, and enable `-DLZO_DEBUG\' for diagnostics)");
    /* WARNING: Subroutine does not return */
    exit(1);
}

/* WARNING: Control flow encountered bad instruction data */

void _start(undefined4 param_1, undefined4 *param_2)

{
    undefined4 *extraout_r1;
    undefined1 *unaff_r10;
    undefined4 unaff_r11;
    undefined1 in_NG;
    undefined1 in_ZR;
    char in_OV;
    undefined4 in_cr0;
    undefined4 in_cr15;

    if ((bool)in_ZR) {
        func_0x0004f964();
        param_2 = extraout_r1;
    }
    if ((bool)in_ZR) {
        coprocessor_function(0, 0, 2, in_cr15, in_cr0, in_cr15);
    }
    if ((bool)in_NG) {
        *unaff_r10 = (char)unaff_r11;
    }
    if (in_NG != in_OV) {
        *param_2 = unaff_r11;
    }
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/* WARNING: Removing unreachable block (ram,0x00013864) */

void FUN_00013850(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00013888) */
/* WARNING: Removing unreachable block (ram,0x00013892) */

void FUN_00013874(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x000138b4) */
/* WARNING: Removing unreachable block (ram,0x000138be) */

void FUN_00013898(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_000430e0 == '\0') {
        FUN_00013874();
        DAT_000430e0 = '\x01';
    }
    return;
}

int FUN_000138e0(int param_1, int param_2, int param_3, int param_4)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;

    iVar1 = param_3;
    iVar3 = param_3;
    iVar4 = param_2;
    if (param_3 <= param_2 || param_4 <= param_3) {
        return 0;
    }
    do {
        while (true) {
            uVar2 = *(undefined4 *)(param_1 + iVar4 * 4);
            *(undefined4 *)(param_1 + iVar4 * 4) =
                *(undefined4 *)(param_1 + iVar3 * 4);
            iVar4 = iVar4 + 1;
            *(undefined4 *)(param_1 + iVar3 * 4) = uVar2;
            iVar3 = iVar3 + 1;
            if (iVar1 == iVar4)
                break;
            if (param_4 == iVar3) {
                iVar3 = iVar1;
            }
        }
        iVar1 = iVar3;
    } while (param_4 != iVar3);
    return param_3 - param_2;
}

undefined4 FUN_00013954(int param_1, undefined4 param_2, undefined4 param_3)

{
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(param_1, param_3);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return param_2;
}

undefined4 FUN_000139a8(undefined4 param_1, int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    timeval local_18;

    iVar1 = gettimeofday(&local_18, (__timezone_ptr_t)0x0);
    if (iVar1 == 0) {
        *param_2 = local_18.tv_sec;
        param_2[1] = local_18.tv_sec >> 0x1f;
        param_2[2] = local_18.tv_usec * 1000;
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 FUN_000139f4(undefined4 param_1, undefined8 *param_2)

{
    clock_t cVar1;
    undefined4 uVar2;
    undefined4 extraout_r2;
    double dVar3;
    undefined8 uVar4;
    undefined8 uVar5;

    cVar1 = clock();
    dVar3 = ((double)(longlong)cVar1 / 1000000.0) * 1000000000.0;
    uVar4 = FUN_0002f6a8(SUB84(dVar3, 0), (int)((ulonglong)dVar3 >> 0x20));
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar5 = FUN_0002f668((int)uVar4, uVar2, 1000000000, 0);
    *param_2 = uVar5;
    FUN_0002f668((int)uVar4, uVar2, 1000000000, 0);
    *(undefined4 *)(param_2 + 1) = extraout_r2;
    return 0;
}

undefined4 FUN_00013a70(undefined4 param_1, int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    timespec local_10;

    iVar1 = clock_gettime(2, &local_10);
    if (iVar1 == 0) {
        param_2[2] = local_10.tv_nsec;
        *param_2 = local_10.tv_sec;
        param_2[1] = local_10.tv_sec >> 0x1f;
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 FUN_00013ab4(undefined4 param_1, int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    timespec local_10;

    iVar1 = clock_gettime(3, &local_10);
    if (iVar1 == 0) {
        param_2[2] = local_10.tv_nsec;
        *param_2 = local_10.tv_sec;
        param_2[1] = local_10.tv_sec >> 0x1f;
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 FUN_00013af8(undefined4 param_1, int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    rusage local_58;

    iVar1 = getrusage(RUSAGE_SELF, &local_58);
    if (iVar1 == 0) {
        *param_2 = local_58.ru_utime.tv_sec;
        param_2[1] = local_58.ru_utime.tv_sec >> 0x1f;
        param_2[2] = local_58.ru_utime.tv_usec * 1000;
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 FUN_00013b44(undefined4 param_1, size_t param_2, void *param_3,
                        size_t *param_4)

{
    lzo_memset(param_3, 0, param_2);
    *param_4 = param_2;
    return 0;
}

void FUN_00013b6c(int param_1, char *param_2, undefined4 *param_3)

{
    fprintf(stderr, "%s: ", *(undefined4 *)(param_1 + 4));
    if (param_3 != (undefined4 *)0x0) {
        vfprintf(stderr, param_2, (__gnuc_va_list)*param_3);
        fputc(10, stderr);
        return;
    }
    fwrite("UNKNOWN GETOPT ERROR", 1, 0x14, stderr);
    fputc(10, stderr);
    return;
}

undefined4 FUN_00013be4(undefined4 param_1, undefined4 param_2,
                        undefined4 param_3, undefined4 *param_4)

{
    undefined4 uVar1;

    uVar1 = lzo_crc32(0, 0);
    lzo_crc32(uVar1, param_3, param_2);
    *param_4 = param_2;
    return 0;
}

undefined4 FUN_00013c1c(undefined4 param_1, undefined4 param_2,
                        undefined4 param_3, undefined4 *param_4)

{
    undefined4 uVar1;

    uVar1 = lzo_adler32(0, 0);
    lzo_adler32(uVar1, param_3, param_2);
    *param_4 = param_2;
    return 0;
}

undefined4 FUN_00013c54(void *param_1, size_t param_2, void *param_3,
                        size_t *param_4)

{
    lzo_memcpy(param_3, param_1, param_2);
    *param_4 = param_2;
    return 0;
}

void FUN_000140b4(int *param_1, int param_2, int param_3, int param_4)

{
    void *pvVar1;
    int iVar2;
    size_t __size;

    __size = param_2 + param_4 + param_3;
    param_1[5] = __size;
    *param_1 = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    if (__size == 0) {
        __size = 1;
        param_1[5] = 1;
        pvVar1 = malloc(1);
        param_1[4] = (int)pvVar1;
        if (pvVar1 == (void *)0x0) {
        LAB_00014164:
            fprintf(stderr, "%s: out of memory (wanted %lu bytes)\n",
                    DAT_000430bc, __size);
            /* WARNING: Subroutine does not return */
            exit(3);
        }
    } else {
        pvVar1 = malloc(__size);
        param_1[4] = (int)pvVar1;
        if (pvVar1 == (void *)0x0)
            goto LAB_00014164;
        if (7 < __size) {
            iVar2 = __lzo_align_gap(pvVar1, 8);
            if (iVar2 != 0) {
                fprintf(stderr,
                        "%s: C library problem: malloc() returned misaligned "
                        "pointer!\n",
                        DAT_000430bc);
                /* WARNING: Subroutine does not return */
                exit(3);
            }
            pvVar1 = (void *)param_1[4];
        }
    }
    *param_1 = (int)pvVar1 + param_3;
    param_1[6] = param_2;
    param_1[1] = param_2;
    param_1[2] = 1;
    param_1[3] = 0;
    return;
}

void FUN_000141c0(int *param_1, uint param_2, char param_3)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    char *pcVar4;

    if ((uint)param_1[1] < param_2) {
        /* WARNING: Subroutine does not return */
        __assert_fail("len <= mb->len",
                      "/workspace/jenkins/jenkins/workspace/"
                      "Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                      "release/build/lzo-2.10/lzotest/lzotest.c",
                      0x267, "memchecker_init");
    }
    pcVar2 = (char *)*param_1;
    pcVar4 = pcVar2 + -0x10;
    do {
        pcVar1 = (char *)param_1[4];
        if (pcVar2 <= pcVar1)
            goto LAB_000141fc;
        pcVar2 = pcVar2 + -1;
        *pcVar2 = param_3;
        param_3 = param_3 + '\x01';
    } while (pcVar4 != pcVar2);
    pcVar1 = (char *)param_1[4];
LAB_000141fc:
    iVar3 = *param_1;
    pcVar2 = (char *)(iVar3 + param_2);
    while (true) {
        if (pcVar1 + param_1[5] <= pcVar2) {
            return;
        }
        *pcVar2 = param_3;
        param_3 = param_3 + '\x01';
        if ((char *)(iVar3 + param_2) + 0x10 == pcVar2 + 1)
            break;
        pcVar1 = (char *)param_1[4];
        pcVar2 = pcVar2 + 1;
    }
    return;
}

undefined4 FUN_0001425c(undefined4 *param_1, uint param_2, uint param_3)

{
    uint uVar1;
    uint uVar2;
    byte *pbVar3;
    byte *pbVar4;

    if ((uint)param_1[1] < param_2) {
        /* WARNING: Subroutine does not return */
        __assert_fail("len <= mb->len",
                      "/workspace/jenkins/jenkins/workspace/"
                      "Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                      "release/build/lzo-2.10/lzotest/lzotest.c",
                      0x281, "memchecker_check");
    }
    pbVar4 = (byte *)*param_1;
    pbVar3 = pbVar4;
    do {
        if (pbVar3 <= (byte *)param_1[4])
            break;
        pbVar3 = pbVar3 + -1;
        uVar2 = param_3 + 1 & 0xff;
        if (*pbVar3 != param_3) {
            return 0xffffffff;
        }
        param_3 = uVar2;
    } while (pbVar3 != pbVar4 + -0x10);
    pbVar3 = pbVar4 + param_2;
    uVar2 = param_3;
    while (true) {
        if ((byte *)param_1[4] + param_1[5] <= pbVar3) {
            return 0;
        }
        uVar1 = uVar2 + 1 & 0xff;
        if (*pbVar3 != uVar2)
            break;
        pbVar3 = pbVar3 + 1;
        uVar2 = uVar1;
        if ((param_3 + 0x10 & 0xff) == uVar1) {
            return 0;
        }
    }
    return 0xffffffff;
}

bool FUN_00014320(char *param_1, char *param_2)

{
    size_t __n;
    int iVar1;

    __n = strlen(param_2);
    iVar1 = strncmp(param_1, param_2, __n);
    if (iVar1 == 0) {
        return param_1[__n] != '\0' && param_1[__n] != ',';
    }
    return true;
}

void FUN_00014378(int param_1)

{
    int iVar1;
    int *piVar2;

    if (param_1 < 1) {
        return;
    }
    iVar1 = 0x15;
    piVar2 = (int *)&UNK_0002f870;
    while (param_1 != iVar1) {
        if ((piVar2 == (int *)&DAT_00030558) || (piVar2[0xe] == 0)) {
            fprintf(stdout, "%s: invalid method %d\n", DAT_000430bc);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
        iVar1 = piVar2[0xf];
        piVar2 = piVar2 + 0xe;
    }
    if (0 < DAT_00043104) {
        if (param_1 == DAT_00043108) {
            return;
        }
        piVar2 = &DAT_00043108;
        iVar1 = 0;
        while (iVar1 = iVar1 + 1, iVar1 != DAT_00043104) {
            piVar2 = piVar2 + 1;
            if (*piVar2 == param_1) {
                return;
            }
        }
        if (0xff < iVar1) {
            fprintf(stderr, "%s: too many methods\n", DAT_000430bc);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    }
    iVar1 = DAT_00043104 + 1;
    (&DAT_00043108)[DAT_00043104] = param_1;
    DAT_00043104 = iVar1;
    (&DAT_00043108)[iVar1] = 0;
    return;
}

void FUN_00014480(int param_1, int param_2)

{
    int iVar1;
    int *piVar2;

    if (param_2 < param_1) {
        return;
    }
    do {
        iVar1 = 0x15;
        piVar2 = (int *)&UNK_0002f870;
        while (param_1 != iVar1) {
            if ((piVar2 == (int *)&DAT_00030558) || (piVar2[0xe] == 0))
                goto LAB_000144c4;
            iVar1 = piVar2[0xf];
            piVar2 = piVar2 + 0xe;
        }
        FUN_00014378(param_1);
    LAB_000144c4:
        param_1 = param_1 + 1;
        if (param_1 == param_2 + 1) {
            return;
        }
    } while (true);
}

undefined4 FUN_000144e8(char *param_1)

{
    undefined4 uVar1;
    double in_d0;
    int iVar2;

    if (in_d0 <= 0.0) {
        builtin_strncpy(param_1, "0.0", 4);
        return 0;
    }
    uVar1 = SUB84(in_d0, 0);
    if (in_d0 <= 99.9375) {
        sprintf(param_1, "%4.1f");
        return uVar1;
    }
    iVar2 = (int)(longlong)(in_d0 + 0.5);
    if (iVar2 < 100) {
        builtin_strncpy(param_1, "???", 4);
        return uVar1;
    }
    if (iVar2 < 9999) {
        sprintf(param_1, "%ld");
        return uVar1;
    }
    builtin_strncpy(param_1, "9999", 5);
    return uVar1;
}

undefined4 FUN_000145b0(undefined4 *param_1, undefined4 *param_2)

{
    double dVar1;
    uint uVar2;
    double dVar3;

    dVar3 = (double)FUN_0002f60c(*param_2, param_2[1]);
    uVar2 = param_2[2];
    dVar1 = (double)FUN_0002f60c(*param_1, param_1[1]);
    return SUB84((dVar3 + (double)uVar2 / 1000000000.0) -
                     (dVar1 + (double)(uint)param_1[2] / 1000000000.0),
                 0);
}

void FUN_00014610(undefined4 param_1, int param_2, int param_3)

{
    FILE *__stream;
    int iVar1;
    char *pcVar2;
    int iVar3;
    int *piVar4;
    undefined4 local_48;
    undefined4 uStack_44;
    undefined4 local_40;
    char acStack_38[20];

    __stream = stdout;
    fflush(stdout);
    fflush(stderr);
    fprintf(__stream, "Usage: %s [option..] file...\n", param_1);
    fputc(10, __stream);
    fwrite("Options:\n", 1, 9, __stream);
    fwrite("  -m#     compression method\n", 1, 0x1d, __stream);
    fprintf(__stream, "  -b#     set input block size (default %lu, max %lu)\n",
            DAT_00043510, DAT_0004350c);
    fwrite("  -n#     number of compression/decompression runs\n", 1, 0x33,
           __stream);
    fwrite("  -c#     number of compression runs\n", 1, 0x25, __stream);
    fwrite("  -d#     number of decompression runs\n", 1, 0x27, __stream);
    fwrite("  -S      use safe decompressor (if available)\n", 1, 0x2f,
           __stream);
    fwrite("  -A      use assembler decompressor (if available)\n", 1, 0x34,
           __stream);
    fwrite("  -F      use fast assembler decompressor (if available)\n", 1,
           0x39, __stream);
    fwrite("  -O      optimize compressed data (if available)\n", 1, 0x32,
           __stream);
    fwrite("  -s DIR  process Calgary Corpus test suite in directory `DIR\'\n",
           1, 0x3f, __stream);
    fwrite("  -@      read list of files to compress from stdin\n", 1, 0x34,
           __stream);
    fwrite("  -q      be quiet\n", 1, 0x13, __stream);
    fwrite("  -Q      be very quiet\n", 1, 0x18, __stream);
    fwrite("  -v      be verbose\n", 1, 0x15, __stream);
    fwrite("  -L      display software license\n", 1, 0x23, __stream);
    if (param_3 == 0) {
        fputc(10, __stream);
        fprintf(__stream, "Type \'%s -m\' to list all available methods.\n",
                param_1);
    } else {
        if ((DAT_00043528 == (code *)0x0) ||
            (iVar1 = (*DAT_00043528)(&DAT_00043518, &local_48), iVar1 != 0)) {
            DAT_00043520 = 1;
            local_48 = 0;
            uStack_44 = 0;
            local_40 = 0;
        }
        if (DAT_00043518 == 0) {
            DAT_0004351c = 0xffffffff;
        }
        iVar1 = 0;
        fprintf(__stream,
                "\nAll timings are recorded using pclock mode %d %s.\n",
                DAT_0004351c, DAT_00043524);
        fwrite("\n\n", 1, 2, __stream);
        fwrite("The following compression methods are available:\n", 1, 0x31,
               __stream);
        fputc(10, __stream);
        fwrite("  usage   name           memory          available extras\n", 1,
               0x3a, __stream);
        fwrite("  -----   ----           ------          ----------------\n", 1,
               0x3a, __stream);
        do {
            iVar3 = 0x15;
            piVar4 = (int *)&UNK_0002f870;
            while (iVar1 != iVar3) {
                if ((piVar4 == (int *)&DAT_00030558) || (piVar4[0xe] == 0))
                    goto joined_r0x000148fc;
                iVar3 = piVar4[0xf];
                piVar4 = piVar4 + 0xe;
            }
            iVar3 = piVar4[2];
            sprintf(acStack_38, "-m%d", iVar1);
            fprintf(__stream, "  %-6s  %-13s", acStack_38, *piVar4);
            fprintf(__stream, "%9lu", iVar3);
            if (piVar4[7] == 0) {
                pcVar2 = "          ";
            } else {
                fprintf(__stream, "%s%s", "          ", "safe");
                pcVar2 = ", ";
            }
            if (piVar4[8] != 0) {
                fprintf(__stream, "%s%s", pcVar2, "asm");
                pcVar2 = ", ";
            }
            if (piVar4[9] != 0) {
                fprintf(__stream, "%s%s", pcVar2, "asm+safe");
                pcVar2 = ", ";
            }
            if (piVar4[10] != 0) {
                fprintf(__stream, "%s%s", pcVar2, "fastasm");
                pcVar2 = ", ";
            }
            if (piVar4[0xb] != 0) {
                fprintf(__stream, "%s%s", pcVar2, "fastasm+safe");
                pcVar2 = ", ";
            }
            if (piVar4[5] != 0) {
                fprintf(__stream, "%s%s", pcVar2, "optimize");
            }
            fputc(10, __stream);
        joined_r0x000148fc:
            iVar1 = iVar1 + 1;
        } while (iVar1 != 5000);
    }
    fflush(__stream);
    /* WARNING: Subroutine does not return */
    exit((uint)(param_2 == -1));
}

void FUN_00014ad0(byte *param_1)

{
    byte bVar1;
    int iVar2;
    byte *pbVar3;
    uint uVar4;
    char *__s2;
    int *piVar5;
    undefined4 *puVar6;
    size_t __n;
    undefined4 *unaff_r8;
    char *unaff_r9;
    undefined *unaff_r10;

    if (param_1 == (byte *)0x0)
        goto LAB_00014cdc;
    if (*param_1 == 0)
        goto LAB_00014cdc;
    unaff_r8 = (undefined4 *)&DAT_00030558;
    unaff_r9 = "LZO1-1";
    unaff_r10 = &DAT_00030f24;
    do {
        puVar6 = (undefined4 *)&UNK_0002f870;
        __n = 6;
        __s2 = unaff_r9;
        while (true) {
            iVar2 = strncasecmp((char *)param_1, __s2, __n);
            if ((iVar2 == 0) && (param_1[__n] == 0x2c || param_1[__n] == 0)) {
                FUN_00014378(puVar6[1]);
                goto LAB_00014c94;
            }
            if (unaff_r8 == puVar6)
                break;
            puVar6 = puVar6 + 0xe;
            __s2 = (char *)*puVar6;
            if (__s2 == (char *)0x0)
                break;
            __n = strlen(__s2);
        }
        iVar2 = FUN_00014320(param_1, unaff_r10);
        if (iVar2 == 0)
            goto LAB_00014cf4;
        iVar2 = FUN_00014320(param_1, "avail");
        if (iVar2 == 0)
            goto LAB_00014cf4;
        iVar2 = FUN_00014320(param_1, &DAT_00030ef4);
        if (iVar2 == 0) {
            FUN_00014480(1, 4999);
            FUN_00014480(0x25f9, 0x2601);
            FUN_00014480(0x2635, 0x263d);
        } else {
            iVar2 = FUN_00014320(param_1, &DAT_00030ef8);
            if (iVar2 == 0) {
                FUN_00014480(1, 999);
            } else {
                iVar2 = FUN_00014320(param_1, "bench");
                if (iVar2 == 0) {
                    piVar5 = (int *)&UNK_00030590;
                    iVar2 = 1;
                    do {
                        FUN_00014378(iVar2);
                        piVar5 = piVar5 + 1;
                        iVar2 = *piVar5;
                    } while (iVar2 != 0);
                } else {
                    iVar2 = FUN_00014320(param_1, &DAT_00030f04);
                    if (iVar2 == 0) {
                        piVar5 = (int *)&UNK_000305ac;
                        iVar2 = 0x15;
                        do {
                            FUN_00014378(iVar2);
                            piVar5 = piVar5 + 1;
                            iVar2 = *piVar5;
                        } while (iVar2 != 0);
                    } else {
                        iVar2 = FUN_00014320(param_1, &DAT_00030f08);
                        if (iVar2 == 0) {
                            piVar5 = (int *)&UNK_000305cc;
                            iVar2 = 0x399;
                            do {
                                FUN_00014378(iVar2);
                                piVar5 = piVar5 + 1;
                                iVar2 = *piVar5;
                            } while (iVar2 != 0);
                        } else {
                            iVar2 = FUN_00014320(param_1, &DAT_00030f0c);
                            if (iVar2 == 0) {
                                piVar5 = (int *)&UNK_000305e0;
                                iVar2 = 0x386;
                                do {
                                    FUN_00014378(iVar2);
                                    piVar5 = piVar5 + 1;
                                    iVar2 = *piVar5;
                                } while (iVar2 != 0);
                            } else {
                                iVar2 = FUN_00014320(param_1, "1x999");
                                if (iVar2 == 0) {
                                    FUN_00014480(0x25f9, 0x2601);
                                } else {
                                    iVar2 = FUN_00014320(param_1, "1y999");
                                    if (iVar2 == 0) {
                                        FUN_00014480(0x265d, 0x2665);
                                    } else {
                                        uVar4 = (uint)*param_1;
                                        pbVar3 = param_1;
                                        do {
                                            if (9 < uVar4 - 0x30) {
                                                printf("%s: invalid method "
                                                       "\'%s\'\n\n",
                                                       DAT_000430bc, param_1);
                                                /* WARNING: Subroutine does not
                                                 * return */
                                                exit(1);
                                            }
                                            pbVar3 = pbVar3 + 1;
                                            uVar4 = (uint)*pbVar3;
                                        } while (uVar4 != 0x2c && uVar4 != 0);
                                        strtol((char *)param_1, (char **)0x0,
                                               10);
                                        FUN_00014378();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    LAB_00014c94:
        while (true) {
            bVar1 = *param_1;
            if (bVar1 != 0x2c && bVar1 != 0) {
                do {
                    param_1 = param_1 + 1;
                    bVar1 = *param_1;
                } while (bVar1 != 0 && bVar1 != 0x2c);
            }
            while (bVar1 == 0x2c) {
                param_1 = param_1 + 1;
                bVar1 = *param_1;
            }
            if (bVar1 == 0) {
                return;
            }
            if (*param_1 != 0)
                break;
        LAB_00014cdc:
            FUN_00014610(DAT_000430bc, 0xffffffff, 1);
        LAB_00014cf4:
            FUN_00014480(1, 4999);
        }
    } while (true);
}

undefined4 FUN_00014dfc(int *param_1, code *param_2, undefined4 param_3,
                        char *param_4, int param_5, int param_6)

{
    char cVar1;
    void *pvVar2;
    FILE *__stream;
    int iVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    size_t sVar7;
    int iVar8;
    uint uVar9;
    char *pcVar10;
    uint uVar11;
    uint uVar12;
    char *pcVar13;
    bool bVar14;
    bool bVar15;
    bool bVar16;
    undefined4 uVar17;
    undefined4 extraout_s1;
    undefined4 extraout_s1_00;
    undefined4 extraout_s1_01;
    double extraout_d5;
    double dVar18;
    double extraout_d6;
    double dVar19;
    double dVar20;
    double dVar21;
    double dVar22;
    undefined8 in_stack_ffffff18;
    undefined8 uVar23;
    char *local_c0;
    int local_ac;
    uint local_a8;
    FILE *local_a4;
    int local_a0;
    size_t local_90[2];
    undefined4 local_88;
    undefined4 uStack_84;
    undefined4 local_80;
    uint local_78[4];
    undefined4 local_68;
    undefined4 uStack_64;
    undefined4 local_60;
    undefined4 local_58;
    undefined4 uStack_54;
    undefined4 local_50;

    if (opt_dump_compressed_data == (FILE *)0x0) {
        local_a4 = opt_dump_compressed_data;
    } else {
        local_a4 = fopen64((char *)opt_dump_compressed_data, "wb");
    }
    if ((DAT_00043528 == (code *)0x0) ||
        (iVar3 = (*DAT_00043528)(&DAT_00043518, &local_88), iVar3 != 0)) {
        DAT_00043520 = 1;
        local_88 = 0;
        uStack_84 = 0;
        local_80 = 0;
    }
    dVar20 = 0.0;
    local_a0 = 0;
    local_a8 = DAT_00043540;
    local_ac = 0;
    local_c0 = DAT_0004353c;
    local_78[0] = 0;
    local_90[0] = 0;
    dVar21 = dVar20;
    dVar22 = dVar20;
    do {
        __stream = local_a4;
        uVar5 = DAT_00043540;
        uVar4 = clock();
        uVar4 = (uVar4 ^ uVar5) & 0xff;
        iVar3 = param_1[1];
        local_ac = local_ac + 1;
        uVar5 = local_a8;
        if (DAT_00043510 <= local_a8) {
            uVar5 = DAT_00043510;
        }
        DAT_0004355c = uVar5;
        if (iVar3 != 999 && iVar3 < 4999) {
            if (iVar3 == 0x3b8 || iVar3 == 0x3ae) {
                DAT_0004355c = uVar5 + 0x100 + (uVar5 >> 3);
            } else if (iVar3 - 1U < 0x3e5) {
                DAT_0004355c = uVar5 + 0x43 + (uVar5 >> 4);
            } else {
                DAT_0004355c = uVar5 + 0x100 + (uVar5 >> 3);
            }
        }
        DAT_0004357c = uVar5;
        if (opt_use_asm_fast_decompressor != 0) {
            DAT_0004357c = uVar5 + 3;
        }
        if (DAT_00043570 < DAT_0004355c) {
            /* WARNING: Subroutine does not return */
            __assert_fail("block_c.len <= block_c.saved_len",
                          "/workspace/jenkins/jenkins/workspace/"
                          "Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                          "release/build/lzo-2.10/lzotest/lzotest.c",
                          0x414, "process_file");
        }
        if (DAT_00043590 < DAT_0004357c) {
            /* WARNING: Subroutine does not return */
            __assert_fail("block_d.len <= block_d.saved_len",
                          "/workspace/jenkins/jenkins/workspace/"
                          "Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                          "release/build/lzo-2.10/lzotest/lzotest.c",
                          0x415, "process_file");
        }
        FUN_000141c0(&DAT_00043558, DAT_0004355c, uVar4);
        FUN_000141c0(&DAT_00043578, DAT_0004357c, uVar4);
        local_90[0] = 0;
        if ((DAT_00043528 == (code *)0x0) ||
            (iVar3 = (*DAT_00043528)(&DAT_00043518, &local_68), iVar3 != 0)) {
            DAT_00043520 = 1;
            local_68 = 0;
            uStack_64 = 0;
            local_60 = 0;
        }
        if (param_5 < 1) {
            uVar12 = 0;
            uVar9 = uVar12;
        } else {
            local_90[0] = DAT_0004355c;
            if ((param_1[4] == 0) ||
                (uVar9 = param_1[2], DAT_00043598 < uVar9)) {
                uVar12 = 0;
                uVar9 = 0xffffff9c;
            } else {
                iVar3 = 0;
                uVar12 = 0;
                do {
                    pvVar2 = DAT_00043558;
                    uVar17 = (undefined4)((ulonglong)in_stack_ffffff18 >> 0x20);
                    local_90[0] = DAT_0004355c;
                    FUN_000141c0(&DAT_00043594, uVar9, uVar5 & 0xff);
                    if (opt_clear_wrkmem == 0) {
                        if (opt_dict == 0)
                            goto LAB_0001502c;
                    LAB_000154b4:
                        if ((code *)param_1[0xc] == (code *)0x0)
                            goto LAB_0001502c;
                        in_stack_ffffff18 =
                            CONCAT44(DAT_000430e8, DAT_00043594);
                        uVar9 = (*(code *)param_1[0xc])(
                            local_c0, uVar5, pvVar2, local_90, DAT_00043594,
                            DAT_000430e8, DAT_000430ec);
                    } else {
                        lzo_memset(DAT_00043594, 0, param_1[2]);
                        if (opt_dict != 0)
                            goto LAB_000154b4;
                    LAB_0001502c:
                        in_stack_ffffff18 = CONCAT44(uVar17, DAT_00043594);
                        uVar9 = (*(code *)param_1[4])(local_c0, uVar5, pvVar2,
                                                      local_90, DAT_00043594);
                    }
                    iVar6 =
                        FUN_0001425c(&DAT_00043594, param_1[2], uVar5 & 0xff);
                    if (iVar6 != 0) {
                        puts("WARNING: wrkmem overwrite error (compress) !!!");
                    }
                    if (uVar9 != 0)
                        goto LAB_0001506c;
                    if (opt_compute_adler32 != 0) {
                        uVar17 = lzo_adler32(0, 0, 0);
                        DAT_000435bc = lzo_adler32(uVar17, local_c0, uVar5);
                    }
                    if (opt_compute_crc32 != 0) {
                        uVar17 = lzo_crc32(0, 0);
                        DAT_000435c4 = lzo_crc32(uVar17, local_c0, uVar5);
                    }
                    if (uVar12 < local_90[0]) {
                        uVar12 = local_90[0];
                    }
                    uVar11 = DAT_0004355c;
                    sVar7 = local_90[0];
                    if (DAT_0004355c < local_90[0])
                        goto LAB_000155c0;
                    iVar3 = iVar3 + 1;
                    if (iVar3 == param_5)
                        goto LAB_0001506c;
                } while ((param_1[4] != 0) &&
                         (uVar9 = param_1[2], uVar9 <= DAT_00043598));
                uVar9 = 0xffffff9c;
                local_90[0] = DAT_0004355c;
            }
        }
    LAB_0001506c:
        if ((DAT_00043528 == (code *)0x0) ||
            (iVar3 = (*DAT_00043528)(&DAT_00043518, &local_58), iVar3 != 0)) {
            DAT_00043520 = 1;
            local_58 = 0;
            uStack_54 = 0;
            local_50 = 0;
        }
        if (DAT_00043518 == 0) {
            DAT_0004351c = 0xffffffff;
            dVar19 = dVar20;
        } else {
            uVar17 = FUN_000145b0(&local_68, &local_58);
            dVar19 = (double)CONCAT44(extraout_s1, uVar17);
        }
        sVar7 = local_90[0];
        uVar11 = DAT_0004355c;
        dVar22 = dVar22 + dVar19;
        if (uVar9 != 0) {
            printf("  compression failed in block %lu (%d) (%lu %lu)\n",
                   local_ac, uVar9, local_90[0], uVar5);
            return 5;
        }
        iVar3 = FUN_0001425c(&DAT_00043558, DAT_0004355c, uVar4);
        if (iVar3 != 0) {
        LAB_000155c0:
            printf("  compression overwrite error in block %lu (%lu %lu %lu "
                   "%lu)\n",
                   local_ac, sVar7, local_78[0], uVar5, uVar11);
            return 5;
        }
        if ((sVar7 < uVar5) && (opt_optimize_compressed_data != 0)) {
            local_78[0] = uVar5;
            if (((code *)param_1[5] != (code *)0x0) &&
                ((uint)param_1[3] <= DAT_00043598)) {
                in_stack_ffffff18 = CONCAT44(
                    (int)((ulonglong)in_stack_ffffff18 >> 0x20), DAT_00043594);
                iVar3 = (*(code *)param_1[5])(DAT_00043558, sVar7, DAT_00043578,
                                              local_78);
                if ((iVar3 != 0) ||
                    (uVar11 = DAT_0004355c, uVar5 != local_78[0])) {
                    printf("  optimization failed in block %lu (%d) (%lu %lu "
                           "%lu)\n",
                           local_ac, iVar3, local_90[0], local_78[0], uVar5);
                    return 5;
                }
            }
            iVar3 = FUN_0001425c(&DAT_00043558, uVar11, uVar4);
            if ((iVar3 != 0) ||
                (iVar3 = FUN_0001425c(&DAT_00043578, DAT_0004357c, uVar4),
                 iVar3 != 0)) {
                printf("  optimize overwrite error in block %lu (%lu %lu %lu "
                       "%lu)\n",
                       local_ac, local_90[0], uVar5, uVar5, uVar11);
                return 5;
            }
        }
        if ((local_a4 != (FILE *)0x0) &&
            ((sVar7 = fwrite(DAT_00043558, 1, local_90[0], local_a4),
              sVar7 != local_90[0] ||
                  (iVar3 = fflush(local_a4), iVar3 != 0)))) {
            local_a4 = (FILE *)0x0;
            fclose(__stream);
        }
        if ((DAT_00043528 == (code *)0x0) ||
            (iVar3 = (*DAT_00043528)(&DAT_00043518, &local_68), iVar3 != 0)) {
            DAT_00043520 = 1;
            local_68 = 0;
            uStack_64 = 0;
            local_60 = 0;
        }
        if (param_6 < 1) {
        LAB_000155b8:
            iVar6 = 0;
        } else {
            local_78[0] = uVar5;
            if ((param_2 != (code *)0x0) &&
                (uVar9 = param_1[3], uVar9 <= DAT_00043598)) {
                iVar3 = 0;
                do {
                    sVar7 = local_90[0];
                    pcVar10 = DAT_00043578;
                    pvVar2 = DAT_00043558;
                    uVar17 = (undefined4)((ulonglong)in_stack_ffffff18 >> 0x20);
                    uVar11 = local_90[0] & 0xff;
                    FUN_000141c0(&DAT_00043594, uVar9, uVar11);
                    if (opt_clear_wrkmem == 0) {
                        if (opt_dict == 0)
                            goto LAB_0001528c;
                    LAB_00015528:
                        if ((code *)param_1[0xd] == (code *)0x0)
                            goto LAB_0001528c;
                        in_stack_ffffff18 =
                            CONCAT44(DAT_000430e8, DAT_00043594);
                        iVar6 = (*(code *)param_1[0xd])(
                            pvVar2, sVar7, pcVar10, local_78, DAT_00043594,
                            DAT_000430e8, DAT_000430ec);
                    } else {
                        lzo_memset(DAT_00043594, 0, param_1[3]);
                        if (opt_dict != 0)
                            goto LAB_00015528;
                    LAB_0001528c:
                        in_stack_ffffff18 = CONCAT44(uVar17, DAT_00043594);
                        iVar6 = (*param_2)(pvVar2, sVar7, pcVar10, local_78);
                    }
                    iVar8 = FUN_0001425c(&DAT_00043594, param_1[3], uVar11);
                    if (iVar8 != 0) {
                        puts(
                            "WARNING: wrkmem overwrite error (decompress) !!!");
                    }
                    if (iVar6 != 0)
                        goto LAB_000152d0;
                    if (opt_compute_adler32 != 0) {
                        DAT_000435cc = lzo_adler32(1, pcVar10);
                    }
                    if (opt_compute_crc32 != 0) {
                        DAT_000435d0 = lzo_crc32(0, pcVar10);
                    }
                    if ((uVar5 != local_78[0]) ||
                        (iVar3 = iVar3 + 1, iVar3 == param_6))
                        goto LAB_000155b8;
                    uVar9 = param_1[3];
                } while (uVar9 <= DAT_00043598);
            }
            iVar6 = -100;
        }
    LAB_000152d0:
        if ((DAT_00043528 == (code *)0x0) ||
            (iVar3 = (*DAT_00043528)(&DAT_00043518, &local_58), iVar3 != 0)) {
            DAT_00043520 = 1;
            local_58 = 0;
            uStack_54 = 0;
            local_50 = 0;
        }
        if (DAT_00043518 == 0) {
            DAT_0004351c = 0xffffffff;
            dVar19 = dVar20;
        } else {
            uVar17 = FUN_000145b0(&local_68, &local_58);
            dVar19 = (double)CONCAT44(extraout_s1_00, uVar17);
        }
        uVar9 = local_78[0];
        dVar21 = dVar21 + dVar19;
        if (iVar6 != 0) {
            printf("  decompression failed in block %lu (%d) (%lu %lu %lu)\n",
                   local_ac, iVar6, local_90[0], local_78[0], uVar5);
            return 5;
        }
        if (uVar5 != local_78[0]) {
            printf("  decompression size error in block %lu (%lu %lu %lu)\n",
                   local_ac, local_90[0], local_78[0], uVar5);
            return 5;
        }
        if (0x1270 < param_1[1] - 5000U) {
            iVar3 = lzo_memcmp(local_c0, DAT_00043578, uVar5);
            if (iVar3 != 0) {
                uVar4 = uVar5;
                if (uVar5 == 0)
                    goto LAB_00015aec;
                if (*DAT_00043578 != *local_c0) {
                    uVar4 = 0;
                    goto LAB_00015aec;
                }
                uVar12 = 0;
                pcVar10 = DAT_00043578;
                goto LAB_00015adc;
            }
            if (((opt_compute_adler32 != 0) &&
                 (DAT_000435bc != DAT_000435cc)) ||
                ((opt_compute_crc32 != 0 && (DAT_000435c4 != DAT_000435d0)))) {
                printf("  checksum error in block %lu (%lu %lu)\n", local_ac,
                       local_90[0], local_78[0]);
                printf("      adler32: 0x%08lx 0x%08lx\n", DAT_000435bc,
                       DAT_000435cc);
                printf("      crc32: 0x%08lx 0x%08lx\n", DAT_000435c4,
                       DAT_000435d0);
                return 5;
            }
        }
        uVar11 = DAT_0004357c;
        iVar3 = FUN_0001425c(&DAT_00043578, DAT_0004357c, uVar4);
        if (iVar3 != 0) {
            printf("  decompression overwrite error in block %lu (%lu %lu %lu "
                   "%lu)\n",
                   local_ac, local_90[0], local_78[0], uVar9, uVar11);
            return 5;
        }
        local_a8 = local_a8 - uVar5;
        local_c0 = local_c0 + uVar5;
        local_a0 = local_a0 + uVar12;
    } while (local_a8 != 0);
    if ((DAT_00043528 == (code *)0x0) ||
        (iVar3 = (*DAT_00043528)(&DAT_00043518, local_78), iVar3 != 0)) {
        DAT_00043520 = 1;
        local_78[0] = 0;
        local_78[1] = 0;
        local_78[2] = 0;
    }
    if (DAT_00043518 == 0) {
        DAT_0004351c = 0xffffffff;
    }
    if (local_a4 != (FILE *)0x0) {
        fclose(local_a4);
    }
    uVar5 = DAT_00043540;
    opt_dump_compressed_data = (FILE *)0x0;
    uVar12 = DAT_00043540 * param_5;
    uVar4 = DAT_00043540 * param_6;
    uVar17 = FUN_000144e8(local_90);
    if (opt_pclock == 0) {
        dVar21 = 0.0;
        dVar22 = dVar21;
        dVar20 = dVar21;
        dVar19 = dVar21;
    } else {
        dVar18 = extraout_d5;
        dVar19 = extraout_d6;
        if (0.001 < dVar22) {
            dVar19 = 1000000.0;
            dVar18 = (double)uVar12 / dVar22;
        }
        dVar20 = 0.0;
        if (0.001 < dVar22) {
            dVar20 = dVar18 / dVar19;
        }
        if (dVar21 <= 0.001) {
            dVar19 = 0.0;
        } else {
            dVar19 = ((double)uVar4 / dVar21) / 1000000.0;
        }
    }
    DAT_000435d8 = DAT_000435d8 + local_a0;
    DAT_000435e8 = DAT_000435e8 + (double)CONCAT44(extraout_s1_01, uVar17);
    DAT_000435d4 = DAT_000435d4 + 1;
    DAT_000435dc = DAT_000435dc + uVar5;
    DAT_000435e0 = DAT_000435e0 + local_ac;
    if (0.0 < dVar20) {
        DAT_00043600 = DAT_00043600 + dVar20;
        DAT_000435f0 = DAT_000435f0 + 1;
        DAT_000435f8 = DAT_000435f8 + 1.0 / dVar20;
    }
    if (0.0 < dVar19) {
        DAT_00043608 = DAT_00043608 + 1;
        DAT_00043618 = DAT_00043618 + dVar19;
        DAT_00043610 = DAT_00043610 + 1.0 / dVar19;
    }
    if (opt_verbose < 2) {
        if (opt_verbose != 1)
            goto LAB_00015a7c;
    } else {
        printf("  compressed into %lu bytes,  %s%%  (%s%.3f bits/byte)\n",
               local_a0, local_90, "",
               (double)CONCAT44(extraout_s1_01, uVar17) * 0.08);
        printf("%-15s %5ld: ", "compress", param_5);
        printf("%10lu bytes, %8.2f secs, %8.3f MB/sec\n", uVar12,
               SUB84(dVar22, 0), (int)((ulonglong)dVar22 >> 0x20), dVar20);
        printf("%-15s %5ld: ", "decompress", param_6);
        printf("%10lu bytes, %8.2f secs, %8.3f MB/sec\n", uVar4,
               SUB84(dVar21, 0), (int)((ulonglong)dVar21 >> 0x20), dVar19);
        putchar(10);
        if (opt_verbose < 1)
            goto LAB_00015a7c;
    }
    cVar1 = *param_4;
    pcVar10 = param_4;
    pcVar13 = param_4;
    while (cVar1 != '\0') {
        param_4 = param_4 + 1;
        bVar14 = cVar1 != '\\';
        bVar15 = cVar1 != '/';
        bVar16 = cVar1 != ':';
        if (!bVar16 || (!bVar14 || !bVar15)) {
            pcVar13 = param_4;
        }
        cVar1 = *param_4;
        if (bVar16 && (bVar14 && bVar15)) {
            pcVar10 = pcVar13;
        }
    }
    printf("%-13s| %-14s %8lu %4lu %9lu %4s %s%8.3f %8.3f |\n", param_3,
           pcVar10, uVar5, local_ac, local_a0, local_90, "", dVar20, dVar19);
    if (1 < opt_verbose) {
        putchar(10);
    }
LAB_00015a7c:
    if (*param_1 != DAT_00043620) {
        DAT_00043624 = DAT_00043624 + 1;
        DAT_00043620 = *param_1;
    }
    return 0;
    while (true) {
        pcVar10 = pcVar10 + 1;
        local_c0 = local_c0 + 1;
        uVar4 = uVar12;
        if (*pcVar10 != *local_c0)
            break;
    LAB_00015adc:
        uVar12 = uVar12 + 1;
        uVar4 = uVar5;
        if (uVar12 == uVar9)
            break;
    }
LAB_00015aec:
    uVar23 = CONCAT44((int)((ulonglong)in_stack_ffffff18 >> 0x20), local_78[0]);
    printf("  decompression data error in block %lu at offset %lu (%lu %lu)\n",
           local_ac, uVar4, local_90[0], local_78[0]);
    if (opt_compute_adler32 != 0) {
        printf("      checksum: 0x%08lx 0x%08lx\n", DAT_000435bc, DAT_000435cc,
               opt_compute_adler32, uVar23);
    }
    return 5;
}

undefined4 FUN_00015c94(int param_1, char *param_2, int param_3, int param_4,
                        undefined4 *param_5, undefined4 *param_6)

{
    uint uVar1;
    FILE *__stream;
    int iVar2;
    uint uVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    uint uVar7;
    undefined4 *puVar8;
    char *__src;
    char *pcVar9;
    int iVar10;
    char acStack_12c[264];

    iVar10 = 0x15;
    DAT_000435cc = 0;
    if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
    }
    DAT_000435bc = 0;
    DAT_000435d0 = 0;
    DAT_000435c4 = 0;
    if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0;
    }
    pcVar9 = "LZO1-1";
    puVar8 = (undefined4 *)&UNK_0002f870;
    while (iVar10 != param_1) {
        if (puVar8 == (undefined4 *)&DAT_00030558) {
            return 7;
        }
        pcVar9 = (char *)puVar8[0xe];
        if (pcVar9 == (char *)0x0) {
            return 7;
        }
        iVar10 = puVar8[0xf];
        puVar8 = puVar8 + 0xe;
    }
    if (puVar8[4] == 0) {
        return 7;
    }
    if (opt_use_safe_decompressor == 0) {
    LAB_00015d34:
        if ((opt_use_asm_fast_decompressor == 0) ||
            (iVar10 = puVar8[10], iVar10 == 0)) {
            if ((opt_use_asm_decompressor == 0) ||
                (iVar10 = puVar8[8], iVar10 == 0)) {
                iVar10 = puVar8[6];
                if (iVar10 == 0) {
                    return 7;
                }
                __src = "";
            } else {
                __src = " [a]";
            }
        } else {
            __src = " [f]";
        }
    } else if ((opt_use_asm_fast_decompressor == 0) ||
               (iVar10 = puVar8[0xb], iVar10 == 0)) {
        if ((opt_use_asm_decompressor == 0) ||
            (iVar10 = puVar8[9], iVar10 == 0)) {
            iVar10 = puVar8[7];
            if (iVar10 == 0)
                goto LAB_00015d34;
            __src = " [s]";
        } else {
            __src = " [as]";
        }
    } else {
        __src = " [fs]";
    }
    if ((opt_dict != 0) && (puVar8[0xd] != 0)) {
        __src = "";
    }
    if (DAT_00043598 < (uint)puVar8[3]) {
        return 7;
    }
    pcVar9 = stpcpy(acStack_12c, pcVar9);
    strcpy(pcVar9, __src);
    fflush(stdout);
    fflush(stderr);
    uVar1 = DAT_0004350c;
    if (DAT_0004354c != (void *)0x0) {
        free(DAT_0004354c);
    }
    DAT_0004353c = (void *)0x0;
    DAT_0004354c = (void *)0x0;
    DAT_00043540 = 0;
    DAT_00043550 = 0;
    __stream = fopen64(param_2, "rb");
    if (__stream == (FILE *)0x0) {
        fflush(stdout);
        fflush(stderr);
        fprintf(stderr, "%s: ", param_2);
        fflush(stderr);
        pcVar9 = "fopen";
    LAB_00015fd8:
        perror(pcVar9);
        fflush(stdout);
        fflush(stderr);
        return 2;
    }
    iVar2 = fseek(__stream, 0, 2);
    if (iVar2 == 0) {
        uVar3 = ftell(__stream);
        iVar2 = fseek(__stream, 0, 0);
        if (iVar2 == 0) {
            uVar7 = uVar3 >> 0x1f;
        } else {
            uVar7 = 1;
        }
        if (uVar7 == 0) {
            uVar7 = uVar1;
            if (uVar3 <= uVar1) {
                uVar7 = uVar3;
            }
            if (uVar3 != uVar7) {
                uVar7 = uVar1;
            }
            FUN_000140b4(&DAT_0004353c, uVar7, 0);
            DAT_00043540 = fread(DAT_0004353c, 1, DAT_00043540, __stream);
            iVar2 = ferror(__stream);
            iVar4 = fclose(__stream);
            if (iVar2 == 0 && iVar4 == 0) {
                uVar5 = lzo_adler32(0, 0);
                uVar5 = lzo_adler32(uVar5, DAT_0004353c, DAT_00043540);
                if (param_5 != (undefined4 *)0x0) {
                    *param_5 = uVar5;
                }
                uVar6 = lzo_crc32(0, 0);
                uVar6 = lzo_crc32(uVar6, DAT_0004353c, DAT_00043540);
                if (param_6 != (undefined4 *)0x0) {
                    *param_6 = uVar6;
                }
                if (param_3 < 1) {
                    param_3 = 1;
                }
                if (param_4 < 1) {
                    param_4 = 1;
                }
                if (1 < opt_verbose) {
                    printf("File %s: %lu bytes   (0x%08lx, 0x%08lx)\n", param_2,
                           DAT_00043540, uVar5, uVar6);
                    printf("  compressing %lu bytes (%ld/%ld/%ld loops, %lu "
                           "block-size)\n",
                           DAT_00043540, 1, param_3, param_4, DAT_00043510);
                    printf("  %s\n", acStack_12c);
                }
                uVar5 = FUN_00014dfc(puVar8, iVar10, acStack_12c, param_2,
                                     param_3, param_4);
                return uVar5;
            }
            if (DAT_0004354c != (void *)0x0) {
                free(DAT_0004354c);
            }
            DAT_0004353c = (void *)0x0;
            DAT_0004354c = (void *)0x0;
            DAT_00043540 = 0;
            DAT_00043550 = 0;
            fflush(stdout);
            fflush(stderr);
            fprintf(stderr, "%s: ", param_2);
            fflush(stderr);
            pcVar9 = "fclose";
            goto LAB_00015fd8;
        }
    }
    fflush(stdout);
    fflush(stderr);
    fprintf(stderr, "%s: ", param_2);
    fflush(stderr);
    perror("fseek");
    fflush(stdout);
    fflush(stderr);
    fclose(__stream);
    return 2;
}

void lzo_getopt_init(void *param_1, undefined4 param_2, undefined4 param_3,
                     undefined4 param_4)

{
    memset(param_1, 0, 0x38);
    *(undefined4 *)((int)param_1 + 0x14) = param_2;
    *(undefined4 *)((int)param_1 + 0x20) = param_3;
    *(undefined4 *)((int)param_1 + 0x24) = param_4;
    *(undefined4 *)((int)param_1 + 0x18) = 0xffffffff;
    return;
}

char *lzo_getopt(int param_1, char *param_2, int *param_3, int *param_4)

{
    char *pcVar1;
    int iVar2;
    char *pcVar3;
    uint uVar4;
    undefined4 uVar5;
    int iVar6;
    int iVar7;
    undefined4 uVar8;
    char *pcVar9;
    int iVar10;
    int *piVar11;
    int *piVar12;
    char cVar13;
    int *piVar14;
    int iVar15;
    int iVar16;
    uint uVar17;
    char *__s1;
    undefined4 *puVar18;
    char *__n;
    bool bVar19;
    int *local_50;

    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar8 = uVar5;
    if (param_2 == (char *)0x0) {
        iVar15 = 0;
    } else {
        cVar13 = *param_2;
        if ((cVar13 - 0x2bU & 0xfd) == 0) {
            bVar19 = cVar13 == '-';
            cVar13 = param_2[1];
            if (bVar19) {
                iVar15 = 1;
                param_2 = param_2 + 1;
            } else {
                iVar15 = 2;
                param_2 = param_2 + 1;
            }
        } else {
            iVar15 = 0;
        }
        if (cVar13 == ':') {
            param_2 = param_2 + 1;
            uVar8 = 0x3a;
        }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x18) == -1) {
        *(undefined4 *)(param_1 + 0x18) = uVar5;
    }
    if (param_4 != (int *)0x0) {
        *param_4 = -1;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
        return (char *)0xffffffff;
    }
    iVar6 = *(int *)(param_1 + 0x2c);
    iVar16 = *(int *)(param_1 + 0x24);
    iVar10 = *(int *)(param_1 + 0x14);
    if (iVar6 != 0) {
        pcVar3 = *(char **)(iVar16 + iVar10 * 4);
    LAB_00016218:
        *(int *)(param_1 + 0x2c) = iVar6 + 1;
        __s1 = (char *)(uint)(byte)pcVar3[iVar6 + 1];
        if ((__s1 == (char *)0x3a || param_2 == (char *)0x0) ||
            (pcVar1 = strchr(param_2, (int)__s1), pcVar1 == (char *)0x0)) {
            cVar13 = pcVar3[iVar6 + 2];
            uVar8 = *(undefined4 *)(param_1 + 8);
            *(char **)(param_1 + 0x18) = __s1;
            if (cVar13 == '\0') {
                *(undefined4 *)(param_1 + 0x2c) = 0;
            }
            pcVar3 = "invalid option \'-%c\'";
            if (cVar13 == '\0') {
                *(int *)(param_1 + 0x14) = iVar10 + 1;
            }
        } else {
            if (pcVar1[1] != ':') {
                if (pcVar3[iVar6 + 2] != '\0') {
                    return __s1;
                }
                *(undefined4 *)(param_1 + 0x2c) = 0;
                *(int *)(param_1 + 0x14) = iVar10 + 1;
                return __s1;
            }
            iVar15 = iVar10 + 1;
            *(int *)(param_1 + 0x14) = iVar15;
            *(undefined4 *)(param_1 + 0x2c) = 0;
            if (pcVar3[iVar6 + 2] != '\0') {
                *(char **)(param_1 + 0xc) = pcVar3 + iVar6 + 2;
                return __s1;
            }
            if (pcVar1[2] == ':') {
                return __s1;
            }
            if (iVar15 < *(int *)(param_1 + 0x20)) {
                uVar8 = *(undefined4 *)(iVar16 + iVar15 * 4);
                *(int *)(param_1 + 0x14) = iVar10 + 2;
                *(undefined4 *)(param_1 + 0xc) = uVar8;
                return __s1;
            }
            *(char **)(param_1 + 0x18) = __s1;
            pcVar3 = "option \'-%c\' requires an argument";
        }
    LAB_0001629c:
        pcVar3 = (char *)FUN_00013954(param_1, uVar8, pcVar3, __s1);
        return pcVar3;
    }
    iVar6 = FUN_000138e0(iVar16, *(undefined4 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x34), iVar10);
    iVar7 = *(int *)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x14) - iVar6;
    *(int *)(param_1 + 0x14) = iVar6;
    *(int *)(param_1 + 0x34) = iVar6;
    *(int *)(param_1 + 0x30) = iVar6;
    iVar10 = iVar6;
    if (iVar15 == 0) {
        iVar16 = *(int *)(param_1 + 0x24);
        iVar2 = iVar6;
        if (iVar6 < iVar7) {
            puVar18 = (undefined4 *)(iVar16 + iVar6 * 4);
            do {
                if ((*(char *)*puVar18 == '-') &&
                    (((char *)*puVar18)[1] != '\0')) {
                    iVar10 = *(int *)(param_1 + 0x14);
                    break;
                }
                iVar2 = iVar2 + 1;
                *(int *)(param_1 + 0x14) = iVar2;
                iVar10 = iVar2;
                puVar18 = puVar18 + 1;
            } while (iVar2 != iVar7);
        }
        *(int *)(param_1 + 0x34) = iVar2;
    } else {
        iVar16 = *(int *)(param_1 + 0x24);
    }
    if (iVar7 <= iVar10) {
        *(int *)(param_1 + 0x14) = iVar6;
        iVar2 = iVar6;
        goto LAB_0001658c;
    }
    pcVar3 = *(char **)(iVar16 + iVar10 * 4);
    if (*pcVar3 == '-') {
        if (pcVar3[1] == '-') {
            iVar2 = iVar10 + 1;
            *(int *)(param_1 + 0x14) = iVar2;
            cVar13 = pcVar3[2];
            if (cVar13 == '\0')
                goto LAB_0001658c;
            __s1 = pcVar3 + 2;
            if ((cVar13 != '=') && (cVar13 != '#')) {
                pcVar1 = pcVar3 + 3;
                do {
                    pcVar9 = pcVar1;
                    __n = pcVar9 + (-2 - (int)pcVar3);
                    cVar13 = *pcVar9;
                    if (cVar13 == '\0' || cVar13 == '=')
                        break;
                    pcVar1 = pcVar9 + 1;
                } while (cVar13 != '#');
                if ((param_3 != (int *)0x0 && __n != (char *)0x0) &&
                    (pcVar3 = (char *)*param_3, pcVar3 != (char *)0x0)) {
                    uVar17 = 0;
                    local_50 = (int *)0x0;
                    piVar11 = (int *)0x0;
                    piVar14 = param_3;
                    do {
                        iVar15 = strncmp(__s1, pcVar3, (size_t)__n);
                        piVar12 = piVar11;
                        if (iVar15 == 0) {
                            uVar4 = piVar14[1];
                            if (pcVar3[(int)__n] == '\0')
                                goto LAB_000165e4;
                            uVar17 = uVar17 | uVar4 & 0x10;
                            piVar12 = piVar14;
                            if (piVar11 != (int *)0x0) {
                                piVar12 = piVar11;
                                local_50 = piVar14;
                            }
                        }
                        piVar14 = piVar14 + 4;
                    } while ((piVar14 != (int *)0x0) &&
                             (pcVar3 = (char *)*piVar14, piVar11 = piVar12,
                              pcVar3 != (char *)0x0));
                    if (uVar17 != 0) {
                        uVar17 = 1;
                    }
                    if (piVar12 == (int *)0x0) {
                        uVar17 = 1;
                    }
                    if (uVar17 == 0) {
                        if (local_50 != (int *)0x0) {
                            pcVar3 = (char *)FUN_00013954(
                                param_1, *(undefined4 *)(param_1 + 8),
                                "option \'--%s\' is ambiguous (could be "
                                "\'--%s\' or \'--%s\')",
                                __s1, *piVar12, *local_50);
                            return pcVar3;
                        }
                        uVar4 = piVar12[1];
                        piVar14 = piVar12;
                    LAB_000165e4:
                        uVar4 = uVar4 & 0x2f;
                        if (uVar4 == 2) {
                            if (cVar13 != '\0') {
                                *(char **)(param_1 + 0xc) = pcVar9 + 1;
                            }
                        LAB_0001660c:
                            if (param_4 != (int *)0x0) {
                                *param_4 = (int)piVar14 - (int)param_3 >> 4;
                            }
                            if ((int *)piVar14[2] == (int *)0x0) {
                                return (char *)piVar14[3];
                            }
                            *(int *)piVar14[2] = piVar14[3];
                            return (char *)0x0;
                        }
                        if (uVar4 == 0x21) {
                            if ((cVar13 == '\0') || (pcVar9[1] == '\0')) {
                                pcVar9 = *(char **)(param_1 + 0xc);
                            } else {
                                pcVar9 = pcVar9 + 1;
                                *(char **)(param_1 + 0xc) = pcVar9;
                            }
                            if (pcVar9 == (char *)0x0) {
                                __s1 = (char *)*piVar14;
                                pcVar3 =
                                    "option \'--%s=\' requires an argument";
                                goto LAB_0001629c;
                            }
                            goto LAB_0001660c;
                        }
                        if (uVar4 == 1) {
                            if (cVar13 == '\0') {
                                if (iVar2 < iVar7) {
                                    pcVar9 =
                                        *(char **)(iVar16 + iVar10 * 4 + 4);
                                    *(int *)(param_1 + 0x14) = iVar10 + 2;
                                    *(char **)(param_1 + 0xc) = pcVar9;
                                } else {
                                    pcVar9 = *(char **)(param_1 + 0xc);
                                }
                            } else {
                                pcVar9 = pcVar9 + 1;
                                *(char **)(param_1 + 0xc) = pcVar9;
                            }
                            if (pcVar9 != (char *)0x0)
                                goto LAB_0001660c;
                            __s1 = (char *)*piVar14;
                            pcVar3 = "option \'--%s\' requires an argument";
                        } else {
                            if (cVar13 == '\0')
                                goto LAB_0001660c;
                            __s1 = (char *)*piVar14;
                            pcVar3 =
                                "option \'--%s\' doesn\'t allow an argument";
                            uVar8 = *(undefined4 *)(param_1 + 8);
                        }
                        goto LAB_0001629c;
                    }
                }
            }
            pcVar3 = "unrecognized option \'--%s\'";
            uVar8 = *(undefined4 *)(param_1 + 8);
            goto LAB_0001629c;
        }
        if (pcVar3[1] != '\0') {
            iVar6 = *(int *)(param_1 + 0x2c);
            goto LAB_00016218;
        }
    }
    iVar2 = iVar10;
    if (iVar15 == 1) {
        *(char **)(param_1 + 0xc) = pcVar3;
        *(int *)(param_1 + 0x14) = iVar10 + 1;
        return (char *)0x1;
    }
LAB_0001658c:
    iVar15 =
        FUN_000138e0(iVar16, iVar6, *(undefined4 *)(param_1 + 0x34), iVar2);
    *(undefined4 *)(param_1 + 0x28) = 1;
    iVar15 = *(int *)(param_1 + 0x14) - iVar15;
    *(int *)(param_1 + 0x14) = iVar15;
    *(int *)(param_1 + 0x34) = iVar15;
    *(int *)(param_1 + 0x30) = iVar15;
    return (char *)0xffffffff;
}

undefined4 lzo_pclock_open(int *param_1, int param_2)

{
    int iVar1;
    clock_t cVar2;
    int iVar3;
    undefined4 uVar4;
    char *pcVar5;
    int extraout_r2;
    char *pcVar6;
    code *pcVar7;
    double dVar8;
    undefined8 uVar9;
    undefined8 local_70;
    int local_68;
    rusage local_60;

    param_1[1] = -1;
    param_1[2] = 2;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    switch (param_2) {
    case 0:
        iVar1 = gettimeofday(&local_60.ru_utime, (__timezone_ptr_t)0x0);
        if (iVar1 == 0) {
            param_1[4] = (int)FUN_000139a8;
            local_68 = local_60.ru_utime.tv_usec * 1000;
            pcVar5 = "gettimeofday";
            param_1[3] = (int)"gettimeofday";
            local_70 = (longlong)local_60.ru_utime.tv_sec;
            break;
        }
    LAB_000167cc:
        pcVar7 = (code *)param_1[4];
        if (pcVar7 == (code *)0x0) {
        LAB_00016990:
            return 0xffffffff;
        }
        pcVar5 = (char *)param_1[3];
        if (*param_1 == 0)
            goto LAB_0001691c;
        goto LAB_00016924;
    case 1:
        cVar2 = clock();
        dVar8 = ((double)(longlong)cVar2 / 1000000.0) * 1000000000.0;
        uVar9 = FUN_0002f6a8(SUB84(dVar8, 0), (int)((ulonglong)dVar8 >> 0x20));
        uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
        local_70 = FUN_0002f668((int)uVar9, uVar4, 1000000000, 0);
        FUN_0002f668((int)uVar9, uVar4, 1000000000, 0);
        pcVar5 = "clock";
        param_1[4] = (int)FUN_000139f4;
        param_1[3] = (int)"clock";
        local_68 = extraout_r2;
        break;
    case 2:
        iVar1 = clock_gettime(2, (timespec *)&local_60);
        if (iVar1 != 0) {
            iVar1 = getrusage(RUSAGE_SELF, &local_60);
            if (iVar1 != 0)
                goto LAB_000167cc;
            param_1[4] = (int)FUN_00013af8;
            local_68 = local_60.ru_utime.tv_usec * 1000;
            pcVar5 = "getrusage";
            param_1[3] = (int)"getrusage";
            local_70 = (longlong)local_60.ru_utime.tv_sec;
            break;
        }
        pcVar5 = "CLOCK_PROCESS_CPUTIME_ID/libc";
        param_1[3] = (int)"CLOCK_PROCESS_CPUTIME_ID/libc";
        param_1[4] = (int)FUN_00013a70;
        iVar1 = *param_1;
        local_70 = (longlong)local_60.ru_utime.tv_sec;
        local_68 = local_60.ru_utime.tv_usec;
        goto joined_r0x00016838;
    case 3:
        iVar1 = clock_gettime(3, (timespec *)&local_60);
        if (iVar1 != 0)
            goto LAB_000167cc;
        local_68 = local_60.ru_utime.tv_usec;
        pcVar5 = "CLOCK_THREAD_CPUTIME_ID/libc";
        param_1[4] = (int)FUN_00013ab4;
        local_70 = (longlong)local_60.ru_utime.tv_sec;
        param_1[3] = (int)"CLOCK_THREAD_CPUTIME_ID/libc";
        break;
    default:
        goto LAB_00016990;
    }
    iVar1 = *param_1;
joined_r0x00016838:
    if (iVar1 == 0) {
        pcVar7 = (code *)param_1[4];
    LAB_0001691c:
        *param_1 = 1;
    LAB_00016924:
        pcVar6 = (char *)0x0;
        param_1[2] = 0;
        if (pcVar5 == (char *)0x0) {
            pcVar6 = "unknown";
        }
        param_1[1] = param_2;
        if (pcVar5 == (char *)0x0) {
            param_1[3] = (int)pcVar6;
        }
    } else {
        param_1[1] = param_2;
        param_1[2] = 0;
        pcVar7 = (code *)param_1[4];
    }
    iVar1 = 10;
    do {
        if (pcVar7 == (code *)0x0) {
        LAB_00016974:
            param_1[2] = 1;
            local_70 = 0;
            local_68 = 0;
        } else {
            iVar3 = (*pcVar7)(param_1, &local_70);
            if (iVar3 != 0)
                goto LAB_00016974;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
            return 0;
        }
        pcVar7 = (code *)param_1[4];
    } while (true);
}

int lzo_pclock_open_default(undefined4 param_1)

{
    int iVar1;

    iVar1 = lzo_pclock_open(param_1, 2);
    if (((iVar1 != 0) && (iVar1 = lzo_pclock_open(param_1, 1), iVar1 != 0)) &&
        (iVar1 = lzo_pclock_open(param_1, 0), iVar1 != 0)) {
        iVar1 = lzo_pclock_open(param_1, 3);
        if (iVar1 != 0) {
            iVar1 = 1;
        }
        return -iVar1;
    }
    return 0;
}

undefined4 lzo_pclock_close(undefined4 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    param_1[3] = 0;
    param_1[4] = 0;
    return 0;
}

void lzo_pclock_read(int param_1, undefined4 *param_2)

{
    int iVar1;

    if ((*(code **)(param_1 + 0x10) != (code *)0x0) &&
        (iVar1 = (**(code **)(param_1 + 0x10))(), iVar1 == 0)) {
        return;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
}

undefined4 lzo_pclock_get_elapsed(int *param_1, undefined4 param_2,
                                  undefined4 param_3)

{
    undefined4 uVar1;

    if (*param_1 != 0) {
        uVar1 = FUN_000145b0(param_2, param_3);
        return uVar1;
    }
    param_1[1] = -1;
    return 0;
}

undefined4 lzo_pclock_flush_cpu_cache(void)

{
    return 0xffffffff;
}

void lzo_wildargv(void)

{
    return;
}

char *FUN_00016b44(char *param_1, char *param_2, uint param_3)

{
    uint __n;
    void *pvVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    uint uVar5;

    if (0x1ff < param_3) {
        uVar5 = 7;
        do {
            for (; __n = 0x100 << (uVar5 & 0xff), __n <= param_3;
                 param_3 = param_3 - __n) {
                *param_1 = '\0';
                param_1[1] = (char)uVar5 + -8;
                pvVar1 = memcpy(param_1 + 2, param_2, __n);
                param_2 = param_2 + __n;
                param_1 = (char *)((int)pvVar1 + __n);
            }
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    for (; 0x117 < param_3; param_3 = param_3 - 0x118) {
        *param_1 = '\0';
        param_1[1] = -8;
        memcpy(param_1 + 2, param_2, 0x118);
        param_2 = param_2 + 0x118;
        param_1 = param_1 + 0x11a;
    }
    if (0x1f < param_3) {
        *param_1 = '\0';
        pcVar2 = param_1 + 1;
        *pcVar2 = (char)param_3 + -0x20;
        pcVar3 = param_2;
        do {
            pcVar4 = pcVar3 + 1;
            pcVar2 = pcVar2 + 1;
            *pcVar2 = *pcVar3;
            pcVar3 = pcVar4;
        } while (pcVar4 != param_2 + param_3);
        return param_1 + param_3 + 2;
    }
    if (param_3 == 0) {
        return param_1;
    }
    *param_1 = (char)param_3;
    pcVar3 = param_1;
    pcVar2 = param_2;
    do {
        pcVar4 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
        *pcVar3 = *pcVar2;
        pcVar2 = pcVar4;
    } while (pcVar4 != param_2 + param_3);
    return param_1 + param_3 + 1;
}

undefined4 lzo1_info(undefined4 *param_1, undefined4 *param_2)

{
    if (param_1 != (undefined4 *)0x0) {
        *param_1 = 5;
    }
    if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
    }
    return 0x8000;
}

undefined4 lzo1_decompress(byte *param_1, int param_2, undefined1 *param_3,
                           int *param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined1 *puVar3;
    byte *pbVar4;
    uint uVar5;
    undefined1 *puVar6;
    uint uVar7;
    undefined1 *puVar8;
    int iVar9;
    undefined1 *__dest;
    undefined1 *puVar10;
    byte *pbVar11;
    byte *__src;
    size_t __n;
    uint unaff_lr;

    pbVar11 = param_1 + param_2;
    __dest = param_3;
    if (param_1 < pbVar11) {
        do {
            while (true) {
                uVar5 = (uint)*param_1;
                uVar7 = (uint)param_1[1];
                if (uVar5 < 0x20)
                    break;
                if (uVar5 < 0xe0) {
                    unaff_lr = (uint)(*param_1 >> 5);
                    uVar1 = uVar5;
                } else {
                    uVar1 = (uint)param_1[2];
                }
                puVar8 = __dest + ~(uVar5 & 0x1f | uVar7 << 5);
                if (0xdf < uVar5) {
                    unaff_lr = uVar1 + 7;
                    param_1 = param_1 + 3;
                }
                if (uVar5 < 0xe0) {
                    param_1 = param_1 + 2;
                }
                *__dest = *puVar8;
                puVar3 = __dest + 1;
                *puVar3 = puVar8[1];
                puVar10 = puVar8 + 2;
                do {
                    puVar6 = puVar10 + 1;
                    puVar3 = puVar3 + 1;
                    *puVar3 = *puVar10;
                    puVar10 = puVar6;
                } while (puVar6 != puVar8 + 2 + unaff_lr);
                puVar10 = __dest + unaff_lr + 2;
                __dest = puVar10;
                if (pbVar11 <= param_1)
                    goto LAB_00016d5c;
            }
            if (uVar5 == 0) {
                __src = param_1 + 2;
                if (uVar7 < 0xf8) {
                    uVar5 = uVar7 + 0x20;
                    uVar7 = (uint)param_1[2];
                    goto LAB_00016d7c;
                }
                iVar9 = uVar7 - 0xf8;
                if (iVar9 == 0) {
                    __n = 0x118;
                } else {
                    __n = 0x100;
                    do {
                        iVar9 = iVar9 + -1;
                        __n = __n << 1;
                    } while (iVar9 != 0);
                }
                puVar10 = __dest + __n;
                unaff_lr = 0x16ce0;
                memcpy(__dest, __src, __n);
                param_1 = __src + __n;
            } else {
                __src = param_1 + 1;
            LAB_00016d7c:
                pbVar4 = __src;
                puVar8 = __dest;
                while (true) {
                    puVar10 = puVar8 + 1;
                    *puVar8 = (char)uVar7;
                    if (puVar10 == __dest + uVar5)
                        break;
                    pbVar4 = pbVar4 + 1;
                    uVar7 = (uint)*pbVar4;
                    puVar8 = puVar10;
                }
                param_1 = __src + uVar5;
            }
            __dest = puVar10;
        } while (param_1 < pbVar11);
    LAB_00016d5c:
        iVar9 = (int)puVar10 - (int)param_3;
    } else {
        iVar9 = 0;
    }
    *param_4 = iVar9;
    if (pbVar11 == param_1) {
        uVar2 = 0;
    } else {
        uVar2 = 0xfffffffc;
    }
    return uVar2;
}

undefined4 lzo1_compress(byte *param_1, uint param_2, byte *param_3,
                         int *param_4, void *param_5)

{
    char cVar1;
    byte *pbVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    undefined4 *puVar6;
    uint uVar7;
    uint uVar8;
    byte *pbVar9;
    byte *pbVar10;
    byte *pbVar11;
    byte *pbVar12;
    uint uVar13;
    uint local_2c;

    if (param_2 == 0) {
        *param_4 = 0;
    } else {
        if (param_2 < 0xe) {
            iVar3 = FUN_00016b44(param_3, param_1, param_2);
            *param_4 = iVar3 - (int)param_3;
            return 0;
        }
        memset(param_5, 0, 0x8000);
        pbVar11 = param_1 + 1;
        *(byte **)((int)param_5 +
                   (((uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5)
                                            << 5) *
                        0x27d7c000 >>
                    0x13) *
                       4) = param_1;
        pbVar2 = param_3;
        pbVar9 = param_1;
        do {
            while (true) {
                uVar4 = (uint)pbVar11[1];
                uVar8 = (uint)pbVar11[2];
                uVar13 = (uint)*pbVar11;
                uVar7 = (uVar13 ^ (uVar4 ^ uVar8 << 5) << 5) * 0x21 >> 5;
                uVar5 = uVar7 & 0x1fff;
                pbVar12 = *(byte **)((int)param_5 + uVar5 * 4);
                puVar6 = (undefined4 *)((int)param_5 + uVar5 * 4);
                if ((pbVar12 == (byte *)0x0) ||
                    (local_2c = (int)pbVar11 - (int)pbVar12, 0x2000 < local_2c))
                    break;
                if ((*pbVar12 != uVar13) ||
                    ((pbVar12[1] != uVar4 || (pbVar12[2] != uVar8)))) {
                    uVar7 = ~uVar7 & 0x1fff;
                    pbVar12 = *(byte **)((int)param_5 + uVar7 * 4);
                    puVar6 = (undefined4 *)((int)param_5 + uVar7 * 4);
                    if (((pbVar12 == (byte *)0x0) ||
                         (((local_2c = (int)pbVar11 - (int)pbVar12,
                            0x2000 < local_2c || (*pbVar12 != uVar13)) ||
                           (pbVar12[1] != uVar4)))) ||
                        (pbVar12[2] != uVar8))
                        break;
                }
                *puVar6 = pbVar11;
                if (pbVar11 != pbVar9) {
                    uVar7 = (int)pbVar11 - (int)pbVar9;
                    if (uVar7 < 0x20) {
                        pbVar9 = pbVar9 + -1;
                        *pbVar2 = (byte)uVar7;
                        pbVar10 = pbVar2;
                        do {
                            pbVar9 = pbVar9 + 1;
                            pbVar10 = pbVar10 + 1;
                            *pbVar10 = *pbVar9;
                        } while (pbVar2 + uVar7 != pbVar10);
                        pbVar2 = pbVar2 + uVar7 + 1;
                    } else {
                        pbVar2 = (byte *)FUN_00016b44(pbVar2, pbVar9);
                    }
                }
                cVar1 = (char)pbVar11;
                if (pbVar12[3] == pbVar11[3]) {
                    if (pbVar12[4] != pbVar11[4]) {
                        pbVar9 = pbVar11 + 5;
                        goto LAB_00016f20;
                    }
                    if (pbVar12[5] != pbVar11[5]) {
                        pbVar9 = pbVar11 + 6;
                        goto LAB_00016f20;
                    }
                    pbVar9 = pbVar11 + 7;
                    if (((pbVar12[6] != pbVar11[6]) ||
                         (pbVar9 = pbVar11 + 8, pbVar12[7] != pbVar11[7])) ||
                        (pbVar9 = pbVar11 + 9, pbVar12[8] != pbVar11[8]))
                        goto LAB_00016f20;
                    pbVar12 = pbVar12 + 8;
                    pbVar10 = param_1 + (param_2 - 3);
                    if (0xff <
                        (uint)((int)(param_1 + (param_2 - 3)) - (int)pbVar9)) {
                        pbVar10 = pbVar11 + 0x108;
                    }
                    do {
                        pbVar11 = pbVar9;
                        if (pbVar10 <= pbVar11)
                            break;
                        pbVar12 = pbVar12 + 1;
                        pbVar9 = pbVar11 + 1;
                    } while (*pbVar12 == *pbVar11);
                    pbVar9 = pbVar2 + 3;
                    pbVar2[2] = ((char)pbVar11 - cVar1) - 9;
                    pbVar2[1] = (byte)(local_2c - 1 >> 5);
                    *pbVar2 =
                        ~((byte) ~(byte)((local_2c - 1) * 0x8000000 >> 0x18) >>
                          3);
                } else {
                    pbVar9 = pbVar11 + 4;
                LAB_00016f20:
                    pbVar11 = pbVar9 + -1;
                    pbVar9 = pbVar2 + 2;
                    *pbVar2 = (byte)(local_2c - 1) & 0x1f |
                              (((char)pbVar11 - cVar1) + -2) * ' ';
                    pbVar2[1] = (byte)(local_2c - 1 >> 5);
                }
                pbVar2 = pbVar9;
                pbVar9 = pbVar11;
                if (param_1 + (param_2 - 0xc) <= pbVar11)
                    goto LAB_00016f74;
            }
            *puVar6 = pbVar11;
            pbVar11 = pbVar11 + 1;
        } while (pbVar11 < param_1 + (param_2 - 0xc));
    LAB_00016f74:
        if (param_1 + param_2 != pbVar9) {
            pbVar2 = (byte *)FUN_00016b44(
                pbVar2, pbVar9, (int)(param_1 + param_2) - (int)pbVar9);
        }
        *param_4 = (int)pbVar2 - (int)param_3;
    }
    return 0;
}

undefined4 lzo1_99_compress(byte *param_1, uint param_2, byte *param_3,
                            uint *param_4, void *param_5)

{
    uint uVar1;
    uint uVar2;
    byte *pbVar3;
    undefined4 uVar4;
    uint uVar5;
    int iVar6;
    byte *pbVar7;
    byte bVar8;
    byte *pbVar9;
    byte *pbVar10;
    byte *pbVar11;
    byte *pbVar12;
    uint uVar13;
    byte *pbVar14;
    byte *pbVar15;
    byte *pbVar16;
    byte *extraout_r12;
    bool bVar17;
    bool bVar18;
    uint local_5c;
    uint local_58;
    byte *local_54;

    if (param_2 == 0) {
        *param_4 = 0;
        uVar4 = 0;
    } else {
        if (10 < param_2) {
            pbVar11 = param_1 + (param_2 - 9);
            pbVar12 = param_1 + param_2;
            memset(param_5, 0, 0x40000);
            local_5c = 1;
            uVar13 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5)
                                            << 5;
            *(byte **)((uVar13 * 0x9f5f & 0x3ffe0) + (int)param_5) = param_1;
            uVar13 = (uint)param_1[3] ^ (uVar13 ^ (uint)*param_1 << 10) << 5;
            pbVar3 = param_3;
            pbVar7 = param_1 + 1;
            do {
                uVar2 = uVar13 * 0x9f5f & 0x3ffe0;
                local_58 = 0;
                pbVar14 = (byte *)((int)param_5 + (uVar2 - 4));
                pbVar16 = (byte *)((int)param_5 + uVar2 + 0x1c);
                pbVar15 = (byte *)0x0;
                do {
                    while (true) {
                        pbVar14 = pbVar14 + 4;
                        pbVar9 = *(byte **)pbVar14;
                        pbVar10 = pbVar15;
                        if ((pbVar9 != (byte *)0x0) &&
                            (uVar5 = (int)pbVar7 - (int)pbVar9, uVar5 < 0x2001))
                            break;
                        *(byte **)pbVar14 = pbVar7;
                        if (pbVar16 == pbVar14)
                            goto LAB_00017230;
                    }
                    uVar1 = local_58;
                    if ((pbVar9[(int)pbVar15] == pbVar7[(int)pbVar15]) &&
                        (((*pbVar9 == *pbVar7 && (pbVar9[1] == pbVar7[1])) &&
                          (pbVar9[2] == pbVar7[2])))) {
                        local_54 = pbVar7 + 4;
                        if (((((pbVar9[3] == pbVar7[3]) &&
                               (local_54 = pbVar7 + 5,
                                pbVar9[4] == pbVar7[4])) &&
                              (local_54 = pbVar7 + 6,
                               pbVar9[5] == pbVar7[5])) &&
                             ((local_54 = pbVar7 + 7,
                               pbVar9[6] == pbVar7[6] &&
                                   (local_54 = pbVar7 + 8,
                                    pbVar9[7] == pbVar7[7])))) &&
                            (bVar8 = pbVar7[8], local_54 = pbVar7 + 9,
                             pbVar9[8] == bVar8)) {
                            bVar18 = local_58 <= uVar5;
                            bVar17 = uVar5 == local_58;
                            if (bVar18) {
                                bVar17 = pbVar15 == (byte *)0x8;
                            }
                            if ((!bVar18 || pbVar15 < (byte *)0x8) || bVar17) {
                                bVar8 = 1;
                            }
                            if ((bVar18 && pbVar15 >= (byte *)0x8) && !bVar17) {
                                bVar8 = 0;
                            }
                            if (bVar8 != 0) {
                                pbVar10 = (byte *)0x9;
                                uVar1 = uVar5;
                            }
                        } else {
                            pbVar10 = local_54 + (-1 - (int)pbVar7);
                            bVar17 = pbVar15 == pbVar10;
                            uVar1 = uVar5;
                            if ((pbVar10 <= pbVar15) &&
                                (pbVar10 = pbVar15, uVar1 = local_58,
                                 uVar5 < local_58 && bVar17)) {
                                uVar1 = uVar5;
                            }
                        }
                    }
                    local_58 = uVar1;
                    pbVar15 = pbVar10;
                } while (pbVar16 != pbVar14);
            LAB_00017230:
                *(byte **)((int)param_5 + local_5c * 4 + uVar2) = pbVar7;
                if (pbVar10 < (byte *)0x3) {
                    pbVar15 = pbVar7 + 1;
                    if (pbVar11 <= pbVar15)
                        goto LAB_0001735c;
                    uVar13 = (uint)pbVar7[3] ^ (uVar13 ^ (uint)*pbVar7 << 10)
                                                   << 5;
                } else {
                    pbVar14 = pbVar3;
                    pbVar9 = param_1;
                    if (pbVar7 != param_1) {
                        uVar2 = (int)pbVar7 - (int)param_1;
                        pbVar9 = pbVar7;
                        if (uVar2 < 0x20) {
                            param_1 = param_1 + -1;
                            *pbVar3 = (byte)uVar2;
                            pbVar15 = pbVar3;
                            do {
                                param_1 = param_1 + 1;
                                pbVar15 = pbVar15 + 1;
                                *pbVar15 = *param_1;
                            } while (pbVar3 + uVar2 != pbVar15);
                            pbVar14 = pbVar3 + uVar2 + 1;
                        } else if (uVar2 < 0x118) {
                            pbVar16 = (byte *)0x0;
                            *pbVar3 = 0;
                            pbVar15 = pbVar3 + 1;
                            *pbVar15 = (byte)uVar2 - 0x20;
                            do {
                                pbVar9 = param_1 + 1;
                                pbVar15 = pbVar15 + 1;
                                *pbVar15 = *param_1;
                                param_1 = pbVar9;
                            } while (pbVar9 != pbVar7);
                            pbVar14 = pbVar3 + uVar2 + 2;
                        } else {
                            pbVar14 = (byte *)_lzo1b_store_run(pbVar3, param_1);
                            pbVar16 = extraout_r12;
                        }
                    }
                    pbVar15 = pbVar7 + (int)pbVar10;
                    iVar6 = local_58 - 1;
                    bVar8 = (byte)((uint)(iVar6 * 0x80000) >> 0x18);
                    if (pbVar10 < (byte *)0x9) {
                        pbVar3 = pbVar14 + 2;
                        *pbVar14 =
                            (byte)iVar6 & 0x1f | ((char)pbVar10 + -2) * ' ';
                        pbVar14[1] = bVar8;
                        param_1 = pbVar15;
                        if (pbVar11 <= pbVar15)
                            goto LAB_0001735c;
                        pbVar16 = pbVar9 + -1;
                        pbVar7 = pbVar9 + 2;
                        param_1 = pbVar9 + 1;
                        do {
                            pbVar14 = param_1;
                            pbVar16 = pbVar16 + 1;
                            param_1 = pbVar14 + 1;
                            pbVar7 = pbVar7 + 1;
                            uVar13 = (uint)*pbVar7 ^
                                     (uVar13 ^ (uint)*pbVar16 << 10) << 5;
                            *(byte **)((int)param_5 +
                                       (uVar13 * 0x27d7c000 >> 0x13) * 0x20) =
                                pbVar14;
                        } while (param_1 < pbVar15);
                    } else {
                        if (0xff < (uint)((int)pbVar12 - (int)pbVar15)) {
                            pbVar16 = pbVar15 + 0xff;
                        }
                        pbVar3 = pbVar15 + -local_58;
                        if ((uint)((int)pbVar12 - (int)pbVar15) < 0x100) {
                            pbVar16 = pbVar12;
                        }
                        if ((pbVar15 < pbVar16) && (*pbVar3 == *pbVar15)) {
                            do {
                                pbVar15 = pbVar15 + 1;
                                if (pbVar16 == pbVar15)
                                    break;
                                pbVar3 = pbVar3 + 1;
                            } while (*pbVar3 == *pbVar15);
                        }
                        pbVar14[1] = bVar8;
                        *pbVar14 = ~(
                            (byte) ~(byte)((uint)(iVar6 * 0x8000000) >> 0x18) >>
                            3);
                        pbVar3 = pbVar14 + 3;
                        pbVar14[2] = ((char)pbVar15 - (char)pbVar9) - 9;
                        param_1 = pbVar15;
                        if (pbVar11 <= pbVar15) {
                        LAB_0001735c:
                            if (param_1 != pbVar12) {
                                pbVar3 = (byte *)_lzo1b_store_run(
                                    pbVar3, param_1,
                                    (int)pbVar12 - (int)param_1);
                            }
                            *param_4 = (int)pbVar3 - (int)param_3;
                            return 0;
                        }
                        pbVar16 = pbVar9 + -1;
                        pbVar7 = pbVar9 + 2;
                        param_1 = pbVar9 + 1;
                        do {
                            pbVar14 = param_1;
                            pbVar16 = pbVar16 + 1;
                            param_1 = pbVar14 + 1;
                            pbVar7 = pbVar7 + 1;
                            uVar13 = (uint)*pbVar7 ^
                                     (uVar13 ^ (uint)*pbVar16 << 10) << 5;
                            *(byte **)((int)param_5 +
                                       (uVar13 * 0x27d7c000 >> 0x13) * 0x20) =
                                pbVar14;
                        } while (param_1 < pbVar15);
                    }
                    uVar13 = (uint)param_1[2] ^ (uVar13 ^ (uint)*pbVar14 << 10)
                                                    << 5;
                }
                local_5c = local_5c + 1 & 7;
                pbVar7 = pbVar15;
            } while (true);
        }
        iVar6 = _lzo1b_store_run(param_3, param_1, param_2);
        *param_4 = iVar6 - (int)param_3;
        if (param_2 < (uint)(iVar6 - (int)param_3)) {
            uVar4 = 0;
        } else {
            uVar4 = 0xffffffff;
        }
    }
    return uVar4;
}

char *FUN_0001764c(char *param_1, char *param_2, uint param_3)

{
    char *pcVar1;
    uint uVar2;
    char *pcVar3;
    char *pcVar4;
    uint uVar5;
    int iVar6;

    if (0x1ff < param_3) {
        if (0x7fff < param_3) {
            uVar2 = param_3 - 0x8000;
            uVar5 = uVar2 >> 0xf;
            pcVar1 = param_1 + 2;
            pcVar3 = param_2;
            do {
                pcVar1[-2] = '\0';
                pcVar1[-1] = -1;
                pcVar4 = pcVar1 + 0x8002;
                memcpy(pcVar1, pcVar3, 0x8000);
                pcVar1 = pcVar4;
                pcVar3 = pcVar3 + 0x8000;
            } while (pcVar4 != param_1 + uVar5 * 0x8002 + 0x8004);
            param_3 = param_3 & 0x7fff;
            param_1 = param_1 + (uVar5 + 1) * 0x8002;
            param_2 = param_2 + (uVar2 & 0xffff8000) + 0x8000;
        }
        iVar6 = 6;
        uVar5 = 0x4000;
        do {
            while (uVar5 <= param_3) {
                pcVar1 = param_1 + 2;
                *param_1 = '\0';
                param_1[1] = (char)iVar6 + -8;
                param_1 = pcVar1 + uVar5;
                param_3 = param_3 - uVar5;
                memcpy(pcVar1, param_2, uVar5);
                iVar6 = iVar6 + -1;
                param_2 = param_2 + uVar5;
                uVar5 = uVar5 >> 1;
                if (iVar6 == 0)
                    goto joined_r0x00017750;
            }
            iVar6 = iVar6 + -1;
            uVar5 = uVar5 >> 1;
        } while (iVar6 != 0);
    }
joined_r0x00017750:
    for (; 0x117 < param_3; param_3 = param_3 - 0x118) {
        *param_1 = '\0';
        param_1[1] = -8;
        memcpy(param_1 + 2, param_2, 0x118);
        param_2 = param_2 + 0x118;
        param_1 = param_1 + 0x11a;
    }
    if (param_3 < 0x20) {
        if (param_3 != 0) {
            *param_1 = (char)param_3;
            pcVar1 = param_1;
            pcVar3 = param_2;
            do {
                pcVar4 = pcVar3 + 1;
                pcVar1 = pcVar1 + 1;
                *pcVar1 = *pcVar3;
                pcVar3 = pcVar4;
            } while (pcVar4 != param_2 + param_3);
            return param_1 + param_3 + 1;
        }
    } else {
        *param_1 = '\0';
        pcVar3 = param_1 + 1;
        *pcVar3 = (char)param_3 + -0x20;
        pcVar1 = param_2;
        do {
            pcVar4 = pcVar1 + 1;
            pcVar3 = pcVar3 + 1;
            *pcVar3 = *pcVar1;
            pcVar1 = pcVar4;
        } while (pcVar4 != param_2 + param_3);
        param_1 = param_1 + param_3 + 2;
    }
    return param_1;
}

undefined4 lzo1a_info(undefined4 *param_1, undefined4 *param_2)

{
    if (param_1 != (undefined4 *)0x0) {
        *param_1 = 5;
    }
    if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
    }
    return 0x8000;
}

undefined4 lzo1a_decompress(byte *param_1, int param_2, undefined1 *param_3,
                            int *param_4)

{
    byte bVar1;
    byte *pbVar2;
    undefined4 uVar3;
    uint uVar4;
    uint uVar5;
    undefined1 *puVar6;
    uint uVar7;
    byte *pbVar8;
    int iVar9;
    undefined1 *puVar10;
    undefined1 *puVar11;
    undefined1 *puVar12;
    undefined1 *puVar13;
    byte *pbVar14;
    size_t __n;

    pbVar8 = param_1 + param_2;
    puVar11 = param_3;
    if (param_1 < pbVar8) {
        do {
            uVar4 = (uint)*param_1;
            uVar7 = (uint)param_1[1];
            if (uVar4 == 0) {
                pbVar14 = param_1 + 2;
                if (uVar7 < 0xf8) {
                    uVar5 = uVar7 + 0x20;
                    uVar7 = (uint)param_1[2];
                LAB_00017904:
                    puVar10 = puVar11 + uVar5;
                    pbVar2 = pbVar14;
                    while (true) {
                        puVar13 = puVar11 + 1;
                        *puVar11 = (char)uVar7;
                        puVar11 = puVar13;
                        if (puVar13 == puVar10)
                            break;
                        pbVar2 = pbVar2 + 1;
                        uVar7 = (uint)*pbVar2;
                    }
                    param_1 = pbVar14 + uVar5;
                    if (param_1 < pbVar8) {
                        uVar4 = (uint)pbVar14[uVar5];
                        uVar7 = (uint)pbVar14[uVar5 + 1];
                        puVar13 = puVar10;
                        if (uVar4 < 0x20) {
                            do {
                                pbVar14 = param_1;
                                param_1 = pbVar14 + 3;
                                uVar4 = ~(uVar4 | uVar7 << 5);
                                puVar10 = puVar13 + 4;
                                *puVar13 = puVar13[uVar4];
                                puVar13[1] = puVar13[uVar4 + 1];
                                puVar13[2] = puVar13[uVar4 + 2];
                                puVar13[3] = pbVar14[2];
                                if (pbVar8 <= param_1)
                                    goto LAB_0001799c;
                                uVar4 = (uint)pbVar14[3];
                                uVar7 = (uint)pbVar14[4];
                                puVar13 = puVar10;
                            } while (uVar4 < 0x20);
                            pbVar14 = pbVar14 + 4;
                            puVar11 = puVar10;
                        } else {
                            pbVar14 = pbVar14 + uVar5 + 1;
                        }
                        goto LAB_000178a8;
                    }
                LAB_0001799c:
                    iVar9 = (int)puVar10 - (int)param_3;
                    goto LAB_000179a0;
                }
                iVar9 = uVar7 - 0xf8;
                if (iVar9 == 0) {
                    __n = 0x118;
                } else {
                    __n = 0x100;
                    do {
                        iVar9 = iVar9 + -1;
                        __n = __n << 1;
                    } while (iVar9 != 0);
                }
                puVar10 = puVar11 + __n;
                memcpy(puVar11, pbVar14, __n);
                param_1 = pbVar14 + __n;
            } else {
                pbVar14 = param_1 + 1;
                uVar5 = uVar4;
                if (uVar4 < 0x20)
                    goto LAB_00017904;
            LAB_000178a8:
                uVar7 = ~(uVar4 & 0x1f | uVar7 << 5);
                puVar10 = puVar11 + uVar7 + 2;
                if (uVar4 < 0xe0) {
                    *puVar11 = puVar11[uVar7];
                    puVar12 = puVar11 + 1;
                    *puVar12 = puVar11[uVar7 + 1];
                    puVar13 = puVar10;
                    do {
                        puVar6 = puVar13 + 1;
                        puVar12 = puVar12 + 1;
                        *puVar12 = *puVar13;
                        puVar13 = puVar6;
                    } while (puVar6 != puVar10 + (uVar4 >> 5));
                    puVar10 = puVar11 + (uVar4 >> 5) + 2;
                    param_1 = pbVar14 + 1;
                } else {
                    bVar1 = pbVar14[1];
                    param_1 = pbVar14 + 2;
                    *puVar11 = puVar11[uVar7];
                    puVar12 = puVar11 + 1;
                    *puVar12 = puVar11[uVar7 + 1];
                    puVar13 = puVar10;
                    do {
                        puVar6 = puVar13 + 1;
                        puVar12 = puVar12 + 1;
                        *puVar12 = *puVar13;
                        puVar13 = puVar6;
                    } while (puVar6 != puVar10 + bVar1 + 7);
                    puVar10 = puVar11 + bVar1 + 9;
                }
            }
            puVar11 = puVar10;
        } while (param_1 < pbVar8);
        iVar9 = (int)puVar10 - (int)param_3;
    } else {
        iVar9 = 0;
    }
LAB_000179a0:
    *param_4 = iVar9;
    if (pbVar8 == param_1) {
        uVar3 = 0;
    } else {
        uVar3 = 0xfffffffc;
    }
    return uVar3;
}

undefined4 lzo1a_compress(byte *param_1, uint param_2, byte *param_3,
                          int *param_4, void *param_5)

{
    char cVar1;
    byte *pbVar2;
    int iVar3;
    uint uVar4;
    undefined4 *puVar5;
    uint uVar6;
    byte *pbVar7;
    byte *pbVar8;
    byte *pbVar9;
    byte *pbVar10;
    byte *pbVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    byte *pbVar15;
    byte *local_34;
    byte *local_2c;

    if (param_2 == 0) {
        *param_4 = 0;
    } else {
        if (param_2 < 0xe) {
            iVar3 = FUN_0001764c(param_3, param_1, param_2);
            *param_4 = iVar3 - (int)param_3;
            return 0;
        }
        pbVar11 = param_1 + (param_2 - 0xc);
        pbVar9 = param_1 + 1;
        memset(param_5, 0, 0x8000);
        *(byte **)((int)param_5 +
                   (((uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5)
                                            << 5) *
                        0x27d7c000 >>
                    0x13) *
                       4) = param_1;
        pbVar2 = param_3;
        pbVar8 = param_1;
        local_34 = pbVar11;
        do {
            while (true) {
                uVar13 = (uint)pbVar9[2];
                uVar12 = (uint)pbVar9[1];
                uVar14 = (uint)*pbVar9;
                uVar6 = (uVar14 ^ (uVar12 ^ uVar13 << 5) << 5) * 0x21 >> 5;
                uVar4 = uVar6 & 0x1fff;
                pbVar10 = *(byte **)((int)param_5 + uVar4 * 4);
                puVar5 = (undefined4 *)((int)param_5 + uVar4 * 4);
                if (param_1 <= pbVar10)
                    break;
            LAB_00017ae4:
                *puVar5 = pbVar9;
                pbVar9 = pbVar9 + 1;
                if (pbVar11 <= pbVar9)
                    goto LAB_00017b00;
            }
            local_2c = pbVar9 + (-1 - (int)pbVar10);
            if ((byte *)0x1fff < local_2c)
                goto LAB_00017ae4;
            if (((*pbVar10 != uVar14) || (pbVar10[1] != uVar12)) ||
                (pbVar10[2] != uVar13)) {
                uVar6 = ~uVar6 & 0x1fff;
                pbVar10 = *(byte **)((int)param_5 + uVar6 * 4);
                puVar5 = (undefined4 *)((int)param_5 + uVar6 * 4);
                if (((pbVar10 < param_1) ||
                     (local_2c = pbVar9 + (-1 - (int)pbVar10),
                      (byte *)0x1fff < local_2c)) ||
                    ((*pbVar10 != uVar14 ||
                      ((pbVar10[1] != uVar12 || (pbVar10[2] != uVar13))))))
                    goto LAB_00017ae4;
            }
            *puVar5 = pbVar9;
            if (pbVar9 != pbVar8) {
                if ((int)pbVar9 - (int)local_34 == 4) {
                    pbVar2[-2] = pbVar2[-2] & 0x1f;
                    *pbVar2 = *pbVar8;
                    pbVar2 = pbVar2 + 1;
                    local_34 = pbVar9;
                } else {
                    uVar6 = (int)pbVar9 - (int)pbVar8;
                    if (uVar6 < 0x20) {
                        pbVar8 = pbVar8 + -1;
                        *pbVar2 = (byte)uVar6;
                        pbVar7 = pbVar2;
                        do {
                            pbVar8 = pbVar8 + 1;
                            pbVar7 = pbVar7 + 1;
                            *pbVar7 = *pbVar8;
                        } while (pbVar2 + uVar6 != pbVar7);
                        pbVar2 = pbVar2 + uVar6 + 1;
                        local_34 = pbVar9;
                    } else if (uVar6 < 0x118) {
                        *pbVar2 = 0;
                        pbVar7 = pbVar2 + 1;
                        *pbVar7 = (byte)uVar6 - 0x20;
                        do {
                            pbVar15 = pbVar8 + 1;
                            pbVar7 = pbVar7 + 1;
                            *pbVar7 = *pbVar8;
                            pbVar8 = pbVar15;
                        } while (pbVar9 != pbVar15);
                        pbVar2 = pbVar2 + uVar6 + 2;
                        local_34 = pbVar9;
                    } else {
                        pbVar2 = (byte *)FUN_0001764c(pbVar2, pbVar8, uVar6);
                    }
                }
            }
            cVar1 = (char)pbVar9;
            if (pbVar10[3] == pbVar9[3]) {
                if (pbVar10[4] != pbVar9[4]) {
                    pbVar8 = pbVar9 + 5;
                    goto LAB_00017c28;
                }
                if (pbVar10[5] != pbVar9[5]) {
                    pbVar8 = pbVar9 + 6;
                    goto LAB_00017c28;
                }
                pbVar8 = pbVar9 + 7;
                if (((pbVar10[6] != pbVar9[6]) ||
                     (pbVar8 = pbVar9 + 8, pbVar10[7] != pbVar9[7])) ||
                    (pbVar8 = pbVar9 + 9, pbVar10[8] != pbVar9[8]))
                    goto LAB_00017c28;
                pbVar10 = pbVar10 + 8;
                pbVar7 = param_1 + (param_2 - 3);
                if (0xff <
                    (uint)((int)(param_1 + (param_2 - 3)) - (int)pbVar8)) {
                    pbVar7 = pbVar9 + 0x108;
                }
                do {
                    pbVar9 = pbVar8;
                    if (pbVar7 <= pbVar9)
                        break;
                    pbVar10 = pbVar10 + 1;
                    pbVar8 = pbVar9 + 1;
                } while (*pbVar10 == *pbVar9);
                pbVar8 = pbVar2 + 3;
                pbVar2[2] = ((char)pbVar9 - cVar1) - 9;
                pbVar2[1] = (byte)((uint)local_2c >> 5);
                *pbVar2 = ~(
                    (byte) ~(byte)((uint)((int)local_2c << 0x1b) >> 0x18) >> 3);
            } else {
                pbVar8 = pbVar9 + 4;
            LAB_00017c28:
                pbVar9 = pbVar8 + -1;
                pbVar8 = pbVar2 + 2;
                *pbVar2 =
                    (byte)local_2c & 0x1f | (((char)pbVar9 - cVar1) + -2) * ' ';
                pbVar2[1] = (byte)((uint)local_2c >> 5);
            }
            pbVar2 = pbVar8;
            pbVar8 = pbVar9;
        } while (pbVar9 < pbVar11);
    LAB_00017b00:
        if (param_1 + param_2 != pbVar8) {
            pbVar2 = (byte *)FUN_0001764c(
                pbVar2, pbVar8, (int)(param_1 + param_2) - (int)pbVar8);
        }
        *param_4 = (int)pbVar2 - (int)param_3;
    }
    return 0;
}

undefined4 lzo1a_99_compress(byte *param_1, uint param_2, byte *param_3,
                             uint *param_4, void *param_5)

{
    uint uVar1;
    byte *pbVar2;
    undefined4 uVar3;
    uint uVar4;
    int iVar5;
    byte *pbVar6;
    byte bVar7;
    byte *pbVar8;
    byte *pbVar9;
    byte *pbVar10;
    uint uVar11;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    byte *pbVar15;
    byte *extraout_r12;
    bool bVar16;
    bool bVar17;
    uint local_60;
    uint local_5c;
    byte *local_58;
    byte *local_50;

    if (param_2 == 0) {
        *param_4 = 0;
        uVar3 = 0;
    } else {
        if (10 < param_2) {
            pbVar14 = param_1 + (param_2 - 9);
            pbVar10 = param_1 + param_2;
            memset(param_5, 0, 0x40000);
            uVar11 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5)
                                            << 5;
            local_60 = 1;
            *(byte **)((uVar11 * 0x9f5f & 0x3ffe0) + (int)param_5) = param_1;
            uVar11 = (uint)param_1[3] ^ (uVar11 ^ (uint)*param_1 << 10) << 5;
            pbVar6 = param_1 + 1;
            pbVar2 = param_3;
            local_50 = pbVar14;
            do {
                pbVar15 = (byte *)((int)param_5 + (uVar11 * 0x9f5f & 0x3ffe0));
                local_5c = 0;
                pbVar12 = pbVar15 + -4;
                pbVar13 = (byte *)0x0;
                do {
                    while (true) {
                        pbVar12 = pbVar12 + 4;
                        pbVar8 = *(byte **)pbVar12;
                        pbVar9 = pbVar13;
                        if ((pbVar8 != (byte *)0x0) &&
                            (uVar4 = (int)pbVar6 - (int)pbVar8, uVar4 < 0x2001))
                            break;
                        *(byte **)pbVar12 = pbVar6;
                        if (pbVar15 + 0x1c == pbVar12)
                            goto LAB_00017f00;
                    }
                    uVar1 = local_5c;
                    if ((pbVar8[(int)pbVar13] == pbVar6[(int)pbVar13]) &&
                        (((*pbVar8 == *pbVar6 && (pbVar8[1] == pbVar6[1])) &&
                          (pbVar8[2] == pbVar6[2])))) {
                        local_58 = pbVar6 + 4;
                        if (((((pbVar8[3] == pbVar6[3]) &&
                               (local_58 = pbVar6 + 5,
                                pbVar8[4] == pbVar6[4])) &&
                              (local_58 = pbVar6 + 6,
                               pbVar8[5] == pbVar6[5])) &&
                             ((local_58 = pbVar6 + 7,
                               pbVar8[6] == pbVar6[6] &&
                                   (local_58 = pbVar6 + 8,
                                    pbVar8[7] == pbVar6[7])))) &&
                            (bVar7 = pbVar6[8], local_58 = pbVar6 + 9,
                             pbVar8[8] == bVar7)) {
                            bVar17 = local_5c <= uVar4;
                            bVar16 = uVar4 == local_5c;
                            if (bVar17) {
                                bVar16 = pbVar13 == (byte *)0x8;
                            }
                            if ((!bVar17 || pbVar13 < (byte *)0x8) || bVar16) {
                                bVar7 = 1;
                            }
                            if ((bVar17 && pbVar13 >= (byte *)0x8) && !bVar16) {
                                bVar7 = 0;
                            }
                            if (bVar7 != 0) {
                                pbVar9 = (byte *)0x9;
                                uVar1 = uVar4;
                            }
                        } else {
                            pbVar9 = local_58 + (-1 - (int)pbVar6);
                            bVar16 = pbVar13 == pbVar9;
                            uVar1 = uVar4;
                            if ((pbVar9 <= pbVar13) &&
                                (pbVar9 = pbVar13, uVar1 = local_5c,
                                 uVar4 < local_5c && bVar16)) {
                                uVar1 = uVar4;
                            }
                        }
                    }
                    local_5c = uVar1;
                    pbVar13 = pbVar9;
                } while (pbVar15 + 0x1c != pbVar12);
            LAB_00017f00:
                *(byte **)(pbVar15 + local_60 * 4) = pbVar6;
                if (pbVar9 < (byte *)0x3) {
                    pbVar13 = pbVar6 + 1;
                    if (pbVar14 <= pbVar13)
                        goto LAB_00018034;
                    uVar11 = (uint)pbVar6[3] ^ (uVar11 ^ (uint)*pbVar6 << 10)
                                                   << 5;
                } else {
                    pbVar12 = pbVar2;
                    pbVar8 = param_1;
                    if (pbVar6 != param_1) {
                        if (local_50 == pbVar6) {
                            pbVar8 = param_1 + 1;
                            pbVar12 = pbVar2 + 1;
                            pbVar2[-2] = pbVar2[-2] & 0x1f;
                            local_50 = local_50 + 4;
                            *pbVar2 = *param_1;
                        } else {
                            uVar4 = (int)pbVar6 - (int)param_1;
                            pbVar8 = pbVar6;
                            if (uVar4 < 0x20) {
                                param_1 = param_1 + -1;
                                *pbVar2 = (byte)uVar4;
                                pbVar13 = pbVar2;
                                do {
                                    param_1 = param_1 + 1;
                                    pbVar13 = pbVar13 + 1;
                                    *pbVar13 = *param_1;
                                } while (pbVar2 + uVar4 != pbVar13);
                                local_50 = pbVar6 + 4;
                                pbVar12 = pbVar2 + uVar4 + 1;
                            } else if (uVar4 < 0x118) {
                                *pbVar2 = 0;
                                pbVar13 = pbVar2 + 1;
                                *pbVar13 = (byte)uVar4 - 0x20;
                                do {
                                    local_50 = param_1;
                                    param_1 = local_50 + 1;
                                    pbVar13 = pbVar13 + 1;
                                    *pbVar13 = *local_50;
                                } while (param_1 != pbVar6);
                                pbVar12 = pbVar2 + uVar4 + 2;
                                local_50 = local_50 + 5;
                                pbVar8 = param_1;
                            } else {
                                pbVar12 =
                                    (byte *)_lzo1b_store_run(pbVar2, param_1);
                                pbVar15 = extraout_r12;
                            }
                        }
                    }
                    pbVar13 = pbVar6 + (int)pbVar9;
                    iVar5 = local_5c - 1;
                    bVar7 = (byte)((uint)(iVar5 * 0x80000) >> 0x18);
                    if (pbVar9 < (byte *)0x9) {
                        pbVar2 = pbVar12 + 2;
                        *pbVar12 =
                            (byte)iVar5 & 0x1f | ((char)pbVar9 + -2) * ' ';
                        pbVar12[1] = bVar7;
                        param_1 = pbVar13;
                        if (pbVar14 <= pbVar13)
                            goto LAB_00018034;
                        pbVar15 = pbVar8 + -1;
                        pbVar6 = pbVar8 + 2;
                        param_1 = pbVar8 + 1;
                        do {
                            pbVar12 = param_1;
                            pbVar15 = pbVar15 + 1;
                            param_1 = pbVar12 + 1;
                            pbVar6 = pbVar6 + 1;
                            uVar11 = (uint)*pbVar6 ^
                                     (uVar11 ^ (uint)*pbVar15 << 10) << 5;
                            *(byte **)((int)param_5 +
                                       (uVar11 * 0x27d7c000 >> 0x13) * 0x20) =
                                pbVar12;
                        } while (param_1 < pbVar13);
                    } else {
                        if (0xff < (uint)((int)pbVar10 - (int)pbVar13)) {
                            pbVar15 = pbVar13 + 0xff;
                        }
                        pbVar6 = pbVar13 + -local_5c;
                        if ((uint)((int)pbVar10 - (int)pbVar13) < 0x100) {
                            pbVar15 = pbVar10;
                        }
                        if ((pbVar13 < pbVar15) && (*pbVar13 == *pbVar6)) {
                            do {
                                pbVar13 = pbVar13 + 1;
                                if (pbVar15 == pbVar13)
                                    break;
                                pbVar6 = pbVar6 + 1;
                            } while (*pbVar6 == *pbVar13);
                        }
                        pbVar12[1] = bVar7;
                        *pbVar12 = ~(
                            (byte) ~(byte)((uint)(iVar5 * 0x8000000) >> 0x18) >>
                            3);
                        pbVar2 = pbVar12 + 3;
                        pbVar12[2] = ((char)pbVar13 - (char)pbVar8) - 9;
                        param_1 = pbVar13;
                        if (pbVar14 <= pbVar13) {
                        LAB_00018034:
                            if (param_1 != pbVar10) {
                                pbVar2 = (byte *)_lzo1b_store_run(
                                    pbVar2, param_1,
                                    (int)pbVar10 - (int)param_1);
                            }
                            *param_4 = (int)pbVar2 - (int)param_3;
                            return 0;
                        }
                        pbVar15 = pbVar8 + -1;
                        pbVar6 = pbVar8 + 2;
                        param_1 = pbVar8 + 1;
                        do {
                            pbVar12 = param_1;
                            pbVar15 = pbVar15 + 1;
                            param_1 = pbVar12 + 1;
                            pbVar6 = pbVar6 + 1;
                            uVar11 = (uint)*pbVar6 ^
                                     (uVar11 ^ (uint)*pbVar15 << 10) << 5;
                            *(byte **)((int)param_5 +
                                       (uVar11 * 0x27d7c000 >> 0x13) * 0x20) =
                                pbVar12;
                        } while (param_1 < pbVar13);
                    }
                    uVar11 = (uint)param_1[2] ^ (uVar11 ^ (uint)*pbVar12 << 10)
                                                    << 5;
                }
                local_60 = local_60 + 1 & 7;
                pbVar6 = pbVar13;
            } while (true);
        }
        iVar5 = _lzo1b_store_run(param_3, param_1, param_2);
        *param_4 = iVar5 - (int)param_3;
        if (param_2 < (uint)(iVar5 - (int)param_3)) {
            uVar3 = 0;
        } else {
            uVar3 = 0xffffffff;
        }
    }
    return uVar3;
}

undefined4 FUN_00018358(byte *param_1, int param_2, byte *param_3, int *param_4,
                        void *param_5)

{
    byte bVar1;
    char cVar2;
    byte *pbVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    byte *pbVar7;
    byte *pbVar8;
    byte *pbVar9;
    byte *pbVar10;
    uint uVar11;
    uint uVar12;
    undefined4 *puVar13;
    uint uVar14;
    byte *local_44;
    byte *local_34;
    uint local_30;
    uint local_2c;

    pbVar10 = param_1 + param_2 + -9;
    pbVar4 = param_1 + param_2;
    pbVar7 = param_1 + 1;
    memset(param_5, 0, 0x10000);
    pbVar6 = param_1;
    local_44 = param_3;
    local_34 = pbVar10;
    do {
        while (true) {
            uVar11 = (uint)pbVar7[3];
            uVar14 = ((uint)*pbVar7 ^
                      ((uint)pbVar7[1] ^ ((uint)pbVar7[2] ^ uVar11 << 6) << 5)
                          << 5) *
                         0x21 >>
                     5;
            uVar12 = uVar14 & 0x3fff;
            pbVar9 = *(byte **)((int)param_5 + uVar12 * 4);
            puVar13 = (undefined4 *)((int)param_5 + uVar12 * 4);
            if (param_1 <= pbVar9)
                break;
        LAB_00018408:
            *puVar13 = pbVar7;
            pbVar7 = pbVar7 + 1;
            if (pbVar10 <= pbVar7)
                goto LAB_0001841c;
        }
        local_30 = (int)pbVar7 - (int)pbVar9;
        local_2c = local_30 - 1;
        if (0xfffe < local_2c)
            goto LAB_00018408;
        if ((0x2000 < local_30) && (pbVar9[3] != uVar11)) {
            uVar14 = uVar14 & 0x7ff ^ 0x201f;
            pbVar9 = *(byte **)((int)param_5 + uVar14 * 4);
            puVar13 = (undefined4 *)((int)param_5 + uVar14 * 4);
            if (param_1 <= pbVar9) {
                local_30 = (int)pbVar7 - (int)pbVar9;
                local_2c = local_30 - 1;
                if ((local_2c < 0xffff) &&
                    ((local_30 < 0x2001 || (pbVar9[3] == uVar11))))
                    goto LAB_000184b4;
            }
            goto LAB_00018408;
        }
    LAB_000184b4:
        if (((uint)*pbVar9 != (uint)*pbVar7) ||
            (((uint)pbVar9[1] != (uint)pbVar7[1] ||
              ((uint)pbVar9[2] != (uint)pbVar7[2]))))
            goto LAB_00018408;
        *puVar13 = pbVar7;
        pbVar3 = pbVar6;
        if (pbVar7 != pbVar6) {
            if (pbVar7 == local_34) {
                local_34 = pbVar7 + 4;
                local_44[-2] = local_44[-2] & 0x1f;
                pbVar3 = pbVar6 + 1;
                *local_44 = *pbVar6;
                local_44 = local_44 + 1;
            } else {
                uVar14 = (int)pbVar7 - (int)pbVar6;
                pbVar3 = pbVar7;
                if (uVar14 < 0x20) {
                    pbVar6 = pbVar6 + -1;
                    *local_44 = (byte)uVar14;
                    pbVar5 = local_44;
                    do {
                        pbVar6 = pbVar6 + 1;
                        pbVar5 = pbVar5 + 1;
                        *pbVar5 = *pbVar6;
                    } while (local_44 + uVar14 != pbVar5);
                    local_34 = pbVar7 + 4;
                    local_44 = local_44 + uVar14 + 1;
                } else if (uVar14 < 0x118) {
                    *local_44 = 0;
                    pbVar5 = local_44 + 1;
                    *pbVar5 = (byte)uVar14 - 0x20;
                    do {
                        pbVar8 = pbVar6 + 1;
                        pbVar5 = pbVar5 + 1;
                        *pbVar5 = *pbVar6;
                        pbVar6 = pbVar8;
                    } while (pbVar7 != pbVar8);
                    local_44 = local_44 + uVar14 + 2;
                    local_34 = pbVar7 + 4;
                } else {
                    local_44 = (byte *)_lzo1b_store_run(local_44, pbVar6);
                }
            }
        }
        bVar1 = (byte)(local_30 >> 8);
        if (pbVar9[3] == pbVar7[3]) {
            if (pbVar9[4] != pbVar7[4]) {
                pbVar6 = pbVar7 + 5;
                goto LAB_00018554;
            }
            pbVar6 = pbVar7 + 6;
            if ((((pbVar9[5] != pbVar7[5]) ||
                  (pbVar6 = pbVar7 + 7, pbVar9[6] != pbVar7[6])) ||
                 (pbVar6 = pbVar7 + 8, pbVar9[7] != pbVar7[7])) ||
                (pbVar6 = pbVar7 + 9, pbVar9[8] != pbVar7[8]))
                goto LAB_00018554;
            pbVar9 = pbVar9 + 8;
            do {
                pbVar7 = pbVar6;
                if (pbVar4 <= pbVar7)
                    break;
                pbVar9 = pbVar9 + 1;
                pbVar6 = pbVar7 + 1;
            } while (*pbVar9 == *pbVar7);
            uVar14 = (int)pbVar7 - (int)pbVar3;
            pbVar6 = local_44 + 1;
            if (uVar14 < 0x23) {
                *local_44 = (char)uVar14 - 3U | 0x20;
            } else {
                *local_44 = 0x20;
                pbVar9 = pbVar6;
                for (uVar14 = uVar14 - 0x22; pbVar6 = pbVar9 + 1, 0xff < uVar14;
                     uVar14 = uVar14 - 0xff) {
                    *pbVar9 = 0;
                    pbVar9 = pbVar6;
                }
                *pbVar9 = (byte)uVar14;
            }
            *pbVar6 = (byte)local_30;
            pbVar6[1] = bVar1;
            local_44 = pbVar6 + 2;
        } else {
            pbVar6 = pbVar7 + 4;
        LAB_00018554:
            pbVar7 = pbVar6 + -1;
            cVar2 = (char)pbVar7 - (char)pbVar3;
            if (local_30 < 0x2001) {
                *local_44 = (byte)local_2c & 0x1f | (cVar2 + -1) * ' ';
                local_44[1] = (byte)(local_2c >> 5);
                local_44 = local_44 + 2;
            } else {
                *local_44 = cVar2 - 3U | 0x20;
                local_44[1] = (byte)local_30;
                local_44[2] = bVar1;
                local_44 = local_44 + 3;
            }
        }
        pbVar6 = pbVar7;
    } while (pbVar7 < pbVar10);
LAB_0001841c:
    if (pbVar4 != pbVar6) {
        local_44 = (byte *)_lzo1b_store_run(local_44, pbVar6,
                                            (int)pbVar4 - (int)pbVar6);
    }
    *param_4 = (int)local_44 - (int)param_3;
    return 0;
}

void lzo1b_1_compress(void)

{
    _lzo1b_do_compress();
    return;
}

undefined4 FUN_000187b8(byte *param_1, int param_2, byte *param_3, int *param_4,
                        void *param_5)

{
    byte bVar1;
    byte bVar2;
    char cVar3;
    uint uVar4;
    undefined4 *puVar5;
    uint uVar6;
    byte *pbVar7;
    byte *pbVar8;
    byte *pbVar9;
    byte *pbVar10;
    byte *pbVar11;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    uint uVar15;
    byte *local_44;
    byte *local_34;
    uint local_30;
    uint local_2c;

    pbVar14 = param_1 + param_2 + -9;
    pbVar10 = param_1 + 1;
    pbVar7 = param_1 + param_2;
    memset(param_5, 0, 0x10000);
    pbVar9 = param_1;
    local_44 = param_3;
    local_34 = pbVar14;
LAB_0001880c:
    do {
        uVar15 = (uint)pbVar10[3];
        uVar6 =
            ((uint)*pbVar10 ^
             ((uint)pbVar10[1] ^ ((uint)pbVar10[2] ^ uVar15 << 6) << 5) << 5) *
                0x21 >>
            5;
        uVar4 = uVar6 & 0x3fff;
        pbVar13 = *(byte **)((int)param_5 + uVar4 * 4);
        puVar5 = (undefined4 *)((int)param_5 + uVar4 * 4);
        if (param_1 <= pbVar13) {
            local_30 = (int)pbVar10 - (int)pbVar13;
            local_2c = local_30 - 1;
            if (local_2c < 0xffff) {
                if ((local_30 < 0x2001) || (pbVar13[3] == uVar15)) {
                LAB_00018918:
                    if (((uint)*pbVar13 == (uint)*pbVar10) &&
                        (((uint)pbVar13[1] == (uint)pbVar10[1] &&
                          ((uint)pbVar13[2] == (uint)pbVar10[2])))) {
                        *puVar5 = pbVar10;
                        pbVar12 = pbVar9;
                        pbVar11 = pbVar9;
                        if (pbVar10 != pbVar9) {
                            if (pbVar10 == local_34) {
                                local_34 = pbVar10 + 4;
                                pbVar12 = pbVar9 + 1;
                                local_44[-2] = local_44[-2] & 0x1f;
                                *local_44 = *pbVar9;
                                local_44 = local_44 + 1;
                                pbVar11 = pbVar12;
                            } else {
                                uVar6 = (int)pbVar10 - (int)pbVar9;
                                pbVar12 = pbVar10;
                                pbVar11 = pbVar10;
                                if (uVar6 < 0x20) {
                                    pbVar9 = pbVar9 + -1;
                                    *local_44 = (byte)uVar6;
                                    pbVar8 = local_44;
                                    do {
                                        pbVar9 = pbVar9 + 1;
                                        pbVar8 = pbVar8 + 1;
                                        *pbVar8 = *pbVar9;
                                    } while (local_44 + uVar6 != pbVar8);
                                    local_34 = pbVar10 + 4;
                                    local_44 = local_44 + uVar6 + 1;
                                } else if (uVar6 < 0x118) {
                                    *local_44 = 0;
                                    pbVar8 = local_44 + 1;
                                    *pbVar8 = (byte)uVar6 - 0x20;
                                    do {
                                        pbVar11 = pbVar9 + 1;
                                        pbVar8 = pbVar8 + 1;
                                        *pbVar8 = *pbVar9;
                                        pbVar9 = pbVar11;
                                    } while (pbVar10 != pbVar11);
                                    local_44 = local_44 + uVar6 + 2;
                                    local_34 = pbVar10 + 4;
                                } else {
                                    local_44 = (byte *)_lzo1b_store_run(
                                        local_44, pbVar9);
                                }
                            }
                        }
                        bVar1 = (byte)(local_30 >> 8);
                        if (pbVar13[3] == pbVar10[3]) {
                            if (pbVar13[4] != pbVar10[4]) {
                                pbVar9 = pbVar10 + 5;
                                goto LAB_000189c0;
                            }
                            pbVar9 = pbVar10 + 6;
                            if ((((pbVar13[5] != pbVar10[5]) ||
                                  (pbVar9 = pbVar10 + 7,
                                   pbVar13[6] != pbVar10[6])) ||
                                 (pbVar9 = pbVar10 + 8,
                                  pbVar13[7] != pbVar10[7])) ||
                                (pbVar9 = pbVar10 + 9,
                                 pbVar13[8] != pbVar10[8]))
                                goto LAB_000189c0;
                            pbVar13 = pbVar13 + 8;
                            do {
                                pbVar10 = pbVar9;
                                if (pbVar7 <= pbVar10)
                                    break;
                                pbVar13 = pbVar13 + 1;
                                pbVar9 = pbVar10 + 1;
                            } while (*pbVar13 == *pbVar10);
                            uVar6 = (int)pbVar10 - (int)pbVar12;
                            pbVar9 = local_44 + 1;
                            if (uVar6 < 0x23) {
                                *local_44 = (char)uVar6 - 3U | 0x20;
                            } else {
                                *local_44 = 0x20;
                                pbVar13 = pbVar9;
                                for (uVar6 = uVar6 - 0x22;
                                     pbVar9 = pbVar13 + 1, 0xff < uVar6;
                                     uVar6 = uVar6 - 0xff) {
                                    *pbVar13 = 0;
                                    pbVar13 = pbVar9;
                                }
                                *pbVar13 = (byte)uVar6;
                            }
                            local_44 = pbVar9 + 2;
                            *pbVar9 = (byte)local_30;
                            pbVar9[1] = bVar1;
                            pbVar9 = pbVar10;
                            if (pbVar14 <= pbVar10)
                                goto LAB_0001887c;
                            bVar2 = pbVar11[2];
                            bVar1 = pbVar11[1];
                            uVar6 = (uint)pbVar11[3] ^ (uint)pbVar11[4] << 6;
                        } else {
                            pbVar9 = pbVar10 + 4;
                        LAB_000189c0:
                            pbVar10 = pbVar9 + -1;
                            cVar3 = (char)pbVar10 - (char)pbVar12;
                            if (local_30 < 0x2001) {
                                *local_44 =
                                    (byte)local_2c & 0x1f | (cVar3 + -1) * ' ';
                                local_44[1] = (byte)(local_2c >> 5);
                                local_44 = local_44 + 2;
                            } else {
                                *local_44 = cVar3 - 3U | 0x20;
                                local_44[1] = (byte)local_30;
                                local_44[2] = bVar1;
                                local_44 = local_44 + 3;
                            }
                            pbVar9 = pbVar10;
                            if (pbVar14 <= pbVar10)
                                goto LAB_0001887c;
                            bVar1 = pbVar11[1];
                            bVar2 = pbVar11[2];
                            uVar6 = (uint)pbVar11[3] ^ (uint)pbVar11[4] << 6;
                        }
                        *(byte **)((int)param_5 +
                                   (((uint)bVar1 ^ ((uint)bVar2 ^ uVar6 << 5)
                                                       << 5) *
                                        0x42000 >>
                                    0x12) *
                                       4) = pbVar11 + 1;
                        pbVar9 = pbVar10;
                        goto LAB_0001880c;
                    }
                } else {
                    uVar6 = uVar6 & 0x7ff ^ 0x201f;
                    pbVar13 = *(byte **)((int)param_5 + uVar6 * 4);
                    puVar5 = (undefined4 *)((int)param_5 + uVar6 * 4);
                    if (param_1 <= pbVar13) {
                        local_30 = (int)pbVar10 - (int)pbVar13;
                        local_2c = local_30 - 1;
                        if ((local_2c < 0xffff) &&
                            ((local_30 < 0x2001 || (pbVar13[3] == uVar15))))
                            goto LAB_00018918;
                    }
                }
            }
        }
        *puVar5 = pbVar10;
        pbVar10 = pbVar10 + 1;
        if (pbVar14 <= pbVar10) {
        LAB_0001887c:
            if (pbVar7 != pbVar9) {
                local_44 = (byte *)_lzo1b_store_run(local_44, pbVar9,
                                                    (int)pbVar7 - (int)pbVar9);
            }
            *param_4 = (int)local_44 - (int)param_3;
            return 0;
        }
    } while (true);
}

void lzo1b_2_compress(void)

{
    _lzo1b_do_compress();
    return;
}

undefined4 FUN_00018c90(byte *param_1, int param_2, byte *param_3, int *param_4,
                        void *param_5)

{
    byte bVar1;
    byte bVar2;
    byte bVar3;
    char cVar4;
    uint uVar5;
    undefined4 *puVar6;
    uint uVar7;
    byte *pbVar8;
    byte *pbVar9;
    byte *pbVar10;
    byte *pbVar11;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    byte *pbVar15;
    uint uVar16;
    byte *local_44;
    byte *local_34;
    uint local_30;
    uint local_2c;

    pbVar15 = param_1 + param_2 + -9;
    pbVar11 = param_1 + 1;
    pbVar8 = param_1 + param_2;
    memset(param_5, 0, 0x10000);
    pbVar10 = param_1;
    local_44 = param_3;
    local_34 = pbVar15;
LAB_00018ce4:
    do {
        uVar16 = (uint)pbVar11[3];
        uVar7 =
            ((uint)*pbVar11 ^
             ((uint)pbVar11[1] ^ ((uint)pbVar11[2] ^ uVar16 << 6) << 5) << 5) *
                0x21 >>
            5;
        uVar5 = uVar7 & 0x3fff;
        pbVar14 = *(byte **)((int)param_5 + uVar5 * 4);
        puVar6 = (undefined4 *)((int)param_5 + uVar5 * 4);
        if (param_1 <= pbVar14) {
            local_30 = (int)pbVar11 - (int)pbVar14;
            local_2c = local_30 - 1;
            if (local_2c < 0xffff) {
                if ((local_30 < 0x2001) || (pbVar14[3] == uVar16)) {
                LAB_00018df0:
                    if (((uint)*pbVar14 == (uint)*pbVar11) &&
                        (((uint)pbVar14[1] == (uint)pbVar11[1] &&
                          ((uint)pbVar14[2] == (uint)pbVar11[2])))) {
                        *puVar6 = pbVar11;
                        pbVar13 = pbVar10;
                        pbVar12 = pbVar10;
                        if (pbVar11 != pbVar10) {
                            if (pbVar11 == local_34) {
                                local_34 = pbVar11 + 4;
                                pbVar13 = pbVar10 + 1;
                                local_44[-2] = local_44[-2] & 0x1f;
                                *local_44 = *pbVar10;
                                local_44 = local_44 + 1;
                                pbVar12 = pbVar13;
                            } else {
                                uVar7 = (int)pbVar11 - (int)pbVar10;
                                pbVar13 = pbVar11;
                                pbVar12 = pbVar11;
                                if (uVar7 < 0x20) {
                                    pbVar10 = pbVar10 + -1;
                                    *local_44 = (byte)uVar7;
                                    pbVar9 = local_44;
                                    do {
                                        pbVar10 = pbVar10 + 1;
                                        pbVar9 = pbVar9 + 1;
                                        *pbVar9 = *pbVar10;
                                    } while (local_44 + uVar7 != pbVar9);
                                    local_34 = pbVar11 + 4;
                                    local_44 = local_44 + uVar7 + 1;
                                } else if (uVar7 < 0x118) {
                                    *local_44 = 0;
                                    pbVar9 = local_44 + 1;
                                    *pbVar9 = (byte)uVar7 - 0x20;
                                    do {
                                        pbVar12 = pbVar10 + 1;
                                        pbVar9 = pbVar9 + 1;
                                        *pbVar9 = *pbVar10;
                                        pbVar10 = pbVar12;
                                    } while (pbVar11 != pbVar12);
                                    local_44 = local_44 + uVar7 + 2;
                                    local_34 = pbVar11 + 4;
                                } else {
                                    local_44 = (byte *)_lzo1b_store_run(
                                        local_44, pbVar10);
                                }
                            }
                        }
                        bVar1 = (byte)(local_30 >> 8);
                        if (pbVar14[3] == pbVar11[3]) {
                            if (pbVar14[4] != pbVar11[4]) {
                                pbVar10 = pbVar11 + 5;
                                goto LAB_00018e98;
                            }
                            pbVar10 = pbVar11 + 6;
                            if ((((pbVar14[5] != pbVar11[5]) ||
                                  (pbVar10 = pbVar11 + 7,
                                   pbVar14[6] != pbVar11[6])) ||
                                 (pbVar10 = pbVar11 + 8,
                                  pbVar14[7] != pbVar11[7])) ||
                                (pbVar10 = pbVar11 + 9,
                                 pbVar14[8] != pbVar11[8]))
                                goto LAB_00018e98;
                            pbVar14 = pbVar14 + 8;
                            do {
                                pbVar11 = pbVar10;
                                if (pbVar8 <= pbVar11)
                                    break;
                                pbVar14 = pbVar14 + 1;
                                pbVar10 = pbVar11 + 1;
                            } while (*pbVar14 == *pbVar11);
                            uVar7 = (int)pbVar11 - (int)pbVar13;
                            pbVar10 = local_44 + 1;
                            if (uVar7 < 0x23) {
                                *local_44 = (char)uVar7 - 3U | 0x20;
                            } else {
                                *local_44 = 0x20;
                                pbVar14 = pbVar10;
                                for (uVar7 = uVar7 - 0x22;
                                     pbVar10 = pbVar14 + 1, 0xff < uVar7;
                                     uVar7 = uVar7 - 0xff) {
                                    *pbVar14 = 0;
                                    pbVar14 = pbVar10;
                                }
                                *pbVar14 = (byte)uVar7;
                            }
                            local_44 = pbVar10 + 2;
                            *pbVar10 = (byte)local_30;
                            pbVar10[1] = bVar1;
                            pbVar10 = pbVar11;
                            if (pbVar15 <= pbVar11)
                                goto LAB_00018d54;
                            *(byte **)((int)param_5 + (((uint)pbVar12[1] ^
                                                        ((uint)pbVar12[2] ^
                                                         ((uint)pbVar12[3] ^
                                                          (uint)pbVar12[4] << 6)
                                                             << 5)
                                                            << 5) *
                                                           0x42000 >>
                                                       0x12) *
                                                          4) = pbVar12 + 1;
                            bVar1 = pbVar12[5];
                            bVar2 = pbVar12[4];
                            bVar3 = pbVar12[3];
                        } else {
                            pbVar10 = pbVar11 + 4;
                        LAB_00018e98:
                            pbVar11 = pbVar10 + -1;
                            cVar4 = (char)pbVar11 - (char)pbVar13;
                            if (local_30 < 0x2001) {
                                *local_44 =
                                    (byte)local_2c & 0x1f | (cVar4 + -1) * ' ';
                                local_44[1] = (byte)(local_2c >> 5);
                                local_44 = local_44 + 2;
                            } else {
                                *local_44 = cVar4 - 3U | 0x20;
                                local_44[1] = (byte)local_30;
                                local_44[2] = bVar1;
                                local_44 = local_44 + 3;
                            }
                            pbVar10 = pbVar11;
                            if (pbVar15 <= pbVar11)
                                goto LAB_00018d54;
                            *(byte **)((int)param_5 + (((uint)pbVar12[1] ^
                                                        ((uint)pbVar12[2] ^
                                                         ((uint)pbVar12[3] ^
                                                          (uint)pbVar12[4] << 6)
                                                             << 5)
                                                            << 5) *
                                                           0x42000 >>
                                                       0x12) *
                                                          4) = pbVar12 + 1;
                            bVar1 = pbVar12[5];
                            bVar2 = pbVar12[4];
                            bVar3 = pbVar12[3];
                        }
                        *(byte **)((int)param_5 +
                                   (((uint)pbVar12[2] ^
                                     ((uint)bVar3 ^
                                      ((uint)bVar2 ^ (uint)bVar1 << 6) << 5)
                                         << 5) *
                                        0x42000 >>
                                    0x12) *
                                       4) = pbVar12 + 2;
                        pbVar10 = pbVar11;
                        goto LAB_00018ce4;
                    }
                } else {
                    uVar7 = uVar7 & 0x7ff ^ 0x201f;
                    pbVar14 = *(byte **)((int)param_5 + uVar7 * 4);
                    puVar6 = (undefined4 *)((int)param_5 + uVar7 * 4);
                    if (param_1 <= pbVar14) {
                        local_30 = (int)pbVar11 - (int)pbVar14;
                        local_2c = local_30 - 1;
                        if ((local_2c < 0xffff) &&
                            ((local_30 < 0x2001 || (pbVar14[3] == uVar16))))
                            goto LAB_00018df0;
                    }
                }
            }
        }
        *puVar6 = pbVar11;
        pbVar11 = pbVar11 + 1;
        if (pbVar15 <= pbVar11) {
        LAB_00018d54:
            if (pbVar8 != pbVar10) {
                local_44 = (byte *)_lzo1b_store_run(local_44, pbVar10,
                                                    (int)pbVar8 - (int)pbVar10);
            }
            *param_4 = (int)local_44 - (int)param_3;
            return 0;
        }
    } while (true);
}

void lzo1b_3_compress(void)

{
    _lzo1b_do_compress();
    return;
}

undefined4 FUN_000191b8(byte *param_1, int param_2, byte *param_3, int *param_4,
                        void *param_5)

{
    undefined4 *puVar1;
    uint uVar2;
    int iVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    byte *pbVar7;
    byte *pbVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;
    byte *pbVar11;
    byte *pbVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    byte *pbVar16;
    byte *pbVar17;
    bool bVar18;
    byte *local_50;

    pbVar17 = param_1 + param_2;
    pbVar8 = param_1 + param_2 + -9;
    memset(param_5, 0, 0x10000);
    uVar2 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    *(byte **)((int)param_5 + (uVar2 * 0x9f5f >> 4 & 0x3ffe) * 4) = param_1;
    uVar15 = (uint)param_1[3] ^ (uVar2 ^ (uint)*param_1 << 10) << 5;
    pbVar7 = param_1 + 1;
    uVar2 = 1;
    pbVar4 = param_3;
    local_50 = pbVar8;
    do {
        while (true) {
            pbVar5 = pbVar7 + 9;
            pbVar12 = (byte *)0x0;
            iVar3 = 2;
            puVar9 = (undefined4 *)((int)param_5 +
                                    (uVar15 * 0x27d7c000 >> 0x13) * 8);
            puVar1 = puVar9;
            uVar14 = 0;
            do {
                puVar10 = puVar1;
                pbVar6 = (byte *)*puVar10;
                if ((((pbVar6 != (byte *)0x0) &&
                      (uVar13 = (int)pbVar7 - (int)pbVar6, uVar13 < 0x10000)) &&
                     (pbVar6[(int)pbVar12] == pbVar7[(int)pbVar12])) &&
                    (((*pbVar6 == *pbVar7 && (pbVar6[1] == pbVar7[1])) &&
                      (pbVar6[2] == pbVar7[2])))) {
                    pbVar11 = pbVar7 + 4;
                    if (((pbVar6[3] == pbVar7[3]) &&
                         (pbVar11 = pbVar7 + 5, pbVar6[4] == pbVar7[4])) &&
                        ((pbVar11 = pbVar7 + 6,
                          pbVar6[5] == pbVar7[5] &&
                              (((pbVar11 = pbVar7 + 7,
                                 pbVar6[6] == pbVar7[6] &&
                                     (pbVar11 = pbVar7 + 8,
                                      pbVar6[7] == pbVar7[7])) &&
                                (pbVar11 = pbVar5,
                                 pbVar6[8] == pbVar7[8])))))) {
                        if (param_1 == pbVar7) {
                            uVar14 = uVar13;
                        }
                        puVar10[iVar3 + (uVar2 - 2)] = pbVar7;
                        if (param_1 == pbVar7)
                            goto LAB_00019454;
                        pbVar12 = (byte *)0x9;
                        goto LAB_00019358;
                    }
                    if (pbVar12 < pbVar11 + (-1 - (int)pbVar7)) {
                        pbVar12 = pbVar11 + (-1 - (int)pbVar7);
                        uVar14 = uVar13;
                    }
                }
                uVar13 = uVar14;
                iVar3 = 1;
                puVar1 = puVar10 + 1;
                uVar14 = uVar13;
            } while (puVar9 + 2 != puVar10 + 1);
            puVar10[uVar2 - 1] = pbVar7;
            if ((byte *)0x3 < pbVar12)
                break;
            bVar18 = uVar13 == 0x2000;
            if (uVar13 < 0x2001) {
                bVar18 = pbVar12 == (byte *)0x3;
            }
            if (bVar18) {
                pbVar12 = (byte *)0x3;
                pbVar5 = pbVar7 + 3;
                if (pbVar7 != param_1)
                    goto LAB_00019358;
            LAB_000194f4:
                *pbVar4 =
                    (byte)(uVar14 - 1) & 0x1f | ((char)pbVar12 + -1) * ' ';
                pbVar4[1] = (byte)(uVar14 - 1 >> 5);
                pbVar4 = pbVar4 + 2;
                pbVar7 = pbVar5;
                goto joined_r0x000194d4;
            }
            pbVar5 = param_1;
            if (pbVar8 <= pbVar7 + 1)
                goto LAB_0001930c;
            uVar15 = (uint)pbVar7[3] ^ (uVar15 ^ (uint)*pbVar7 << 10) << 5;
            pbVar7 = pbVar7 + 1;
            uVar2 = uVar2 ^ 1;
        }
        pbVar5 = pbVar7 + (int)pbVar12;
        pbVar6 = pbVar12;
        if (pbVar7 != param_1) {
        LAB_00019358:
            pbVar6 = pbVar12;
            uVar14 = uVar13;
            if (local_50 == pbVar7) {
                pbVar4[-2] = pbVar4[-2] & 0x1f;
                local_50 = local_50 + 4;
                *pbVar4 = *param_1;
                param_1 = param_1 + 1;
                pbVar4 = pbVar4 + 1;
            } else {
                uVar13 = (int)pbVar7 - (int)param_1;
                if (uVar13 < 0x20) {
                    pbVar11 = param_1 + -1;
                    *pbVar4 = (byte)uVar13;
                    pbVar12 = pbVar4;
                    do {
                        pbVar11 = pbVar11 + 1;
                        pbVar12 = pbVar12 + 1;
                        *pbVar12 = *pbVar11;
                    } while (pbVar4 + uVar13 != pbVar12);
                    local_50 = pbVar7 + 4;
                    param_1 = param_1 + uVar13;
                    pbVar4 = pbVar4 + uVar13 + 1;
                } else if (uVar13 < 0x118) {
                    *pbVar4 = 0;
                    pbVar11 = pbVar4 + 1;
                    *pbVar11 = (byte)uVar13 - 0x20;
                    pbVar12 = param_1;
                    do {
                        pbVar16 = pbVar12 + 1;
                        pbVar11 = pbVar11 + 1;
                        *pbVar11 = *pbVar12;
                        pbVar12 = pbVar16;
                    } while (pbVar16 != param_1 + uVar13);
                    local_50 = pbVar7 + 4;
                    param_1 = pbVar16;
                    pbVar4 = pbVar4 + uVar13 + 2;
                } else {
                    pbVar4 = (byte *)_lzo1b_store_run(pbVar4, param_1);
                    param_1 = pbVar7;
                }
            }
        }
        if (pbVar6 < (byte *)0x9) {
            pbVar12 = (byte *)((uint)pbVar6 & 0xff);
            if (uVar14 < 0x2001)
                goto LAB_000194f4;
            pbVar4[1] = (byte)uVar14;
            *pbVar4 = (char)pbVar6 - 3U | 0x20;
            pbVar4[2] = (byte)(uVar14 >> 8);
            pbVar4 = pbVar4 + 3;
            pbVar7 = pbVar5;
        } else {
        LAB_00019454:
            pbVar7 = pbVar5 + -uVar14;
            if ((pbVar5 < pbVar17) && (*pbVar7 == *pbVar5)) {
                do {
                    pbVar5 = pbVar5 + 1;
                    if (pbVar17 == pbVar5)
                        break;
                    pbVar7 = pbVar7 + 1;
                } while (*pbVar7 == *pbVar5);
            }
            uVar13 = (int)pbVar5 - (int)param_1;
            pbVar7 = pbVar4 + 1;
            if (uVar13 < 0x23) {
                *pbVar4 = (char)uVar13 - 3U | 0x20;
            } else {
                *pbVar4 = 0x20;
                for (uVar13 = uVar13 - 0x22; 0xff < uVar13;
                     uVar13 = uVar13 - 0xff) {
                    *pbVar7 = 0;
                    pbVar7 = pbVar7 + 1;
                }
                *pbVar7 = (byte)uVar13;
                pbVar7 = pbVar7 + 1;
            }
            *pbVar7 = (byte)uVar14;
            pbVar7[1] = (byte)(uVar14 >> 8);
            pbVar4 = pbVar7 + 2;
            pbVar7 = pbVar5;
        }
    joined_r0x000194d4:
        pbVar5 = pbVar7;
        if (pbVar8 <= pbVar7) {
        LAB_0001930c:
            if (pbVar17 != pbVar5) {
                pbVar4 = (byte *)_lzo1b_store_run(pbVar4, pbVar5,
                                                  (int)pbVar17 - (int)pbVar5);
            }
            *param_4 = (int)pbVar4 - (int)param_3;
            return 0;
        }
        *(byte **)((int)param_5 +
                   ((((uint)param_1[3] ^ (uVar15 ^ (uint)*param_1 << 10) << 5) *
                             0x9f5f >>
                         4 &
                     0x3ffe) +
                    (uVar2 ^ 1)) *
                       4) = param_1 + 1;
        uVar15 = (uint)pbVar7[2] ^ ((uint)pbVar7[1] ^ (uint)*pbVar7 << 5) << 5;
        param_1 = pbVar7;
    } while (true);
}

void lzo1b_4_compress(void)

{
    _lzo1b_do_compress();
    return;
}

undefined4 FUN_00019720(byte *param_1, int param_2, byte *param_3, int *param_4,
                        void *param_5)

{
    undefined4 *puVar1;
    uint uVar2;
    int iVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    byte *pbVar7;
    byte *pbVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;
    byte *pbVar11;
    byte *pbVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    byte *pbVar16;
    byte *pbVar17;
    bool bVar18;
    byte *local_50;

    pbVar17 = param_1 + param_2;
    pbVar8 = param_1 + param_2 + -9;
    memset(param_5, 0, 0x10000);
    uVar2 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    *(byte **)((int)param_5 + (uVar2 * 0x9f5f >> 4 & 0x3ffe) * 4) = param_1;
    uVar15 = (uint)param_1[3] ^ (uVar2 ^ (uint)*param_1 << 10) << 5;
    pbVar7 = param_1 + 1;
    uVar2 = 1;
    pbVar4 = param_3;
    local_50 = pbVar8;
    do {
        while (true) {
            pbVar5 = pbVar7 + 9;
            pbVar12 = (byte *)0x0;
            iVar3 = 2;
            puVar9 = (undefined4 *)((int)param_5 +
                                    (uVar15 * 0x27d7c000 >> 0x13) * 8);
            puVar1 = puVar9;
            uVar14 = 0;
            do {
                puVar10 = puVar1;
                pbVar6 = (byte *)*puVar10;
                if ((((pbVar6 != (byte *)0x0) &&
                      (uVar13 = (int)pbVar7 - (int)pbVar6, uVar13 < 0x10000)) &&
                     (pbVar6[(int)pbVar12] == pbVar7[(int)pbVar12])) &&
                    (((*pbVar6 == *pbVar7 && (pbVar6[1] == pbVar7[1])) &&
                      (pbVar6[2] == pbVar7[2])))) {
                    pbVar11 = pbVar7 + 4;
                    if (((pbVar6[3] == pbVar7[3]) &&
                         (pbVar11 = pbVar7 + 5, pbVar6[4] == pbVar7[4])) &&
                        ((pbVar11 = pbVar7 + 6,
                          pbVar6[5] == pbVar7[5] &&
                              (((pbVar11 = pbVar7 + 7,
                                 pbVar6[6] == pbVar7[6] &&
                                     (pbVar11 = pbVar7 + 8,
                                      pbVar6[7] == pbVar7[7])) &&
                                (pbVar11 = pbVar5,
                                 pbVar6[8] == pbVar7[8])))))) {
                        if (param_1 == pbVar7) {
                            uVar14 = uVar13;
                        }
                        puVar10[iVar3 + (uVar2 - 2)] = pbVar7;
                        if (param_1 == pbVar7)
                            goto LAB_000199e8;
                        pbVar12 = (byte *)0x9;
                        goto LAB_000198c0;
                    }
                    if (pbVar12 < pbVar11 + (-1 - (int)pbVar7)) {
                        pbVar12 = pbVar11 + (-1 - (int)pbVar7);
                        uVar14 = uVar13;
                    }
                }
                uVar13 = uVar14;
                iVar3 = 1;
                puVar1 = puVar10 + 1;
                uVar14 = uVar13;
            } while (puVar9 + 2 != puVar10 + 1);
            puVar10[uVar2 - 1] = pbVar7;
            if ((byte *)0x3 < pbVar12)
                break;
            bVar18 = uVar13 == 0x2000;
            if (uVar13 < 0x2001) {
                bVar18 = pbVar12 == (byte *)0x3;
            }
            if (bVar18) {
                pbVar12 = (byte *)0x3;
                pbVar5 = pbVar7 + 3;
                if (pbVar7 != param_1)
                    goto LAB_000198c0;
            LAB_00019a88:
                *pbVar4 =
                    (byte)(uVar14 - 1) & 0x1f | ((char)pbVar12 + -1) * ' ';
                pbVar4[1] = (byte)(uVar14 - 1 >> 5);
                pbVar4 = pbVar4 + 2;
                pbVar7 = pbVar5;
                goto joined_r0x00019a68;
            }
            pbVar5 = param_1;
            if (pbVar8 <= pbVar7 + 1)
                goto LAB_00019874;
            uVar15 = (uint)pbVar7[3] ^ (uVar15 ^ (uint)*pbVar7 << 10) << 5;
            pbVar7 = pbVar7 + 1;
            uVar2 = uVar2 ^ 1;
        }
        pbVar5 = pbVar7 + (int)pbVar12;
        pbVar6 = pbVar12;
        if (pbVar7 != param_1) {
        LAB_000198c0:
            pbVar6 = pbVar12;
            uVar14 = uVar13;
            if (local_50 == pbVar7) {
                pbVar4[-2] = pbVar4[-2] & 0x1f;
                local_50 = local_50 + 4;
                *pbVar4 = *param_1;
                param_1 = param_1 + 1;
                pbVar4 = pbVar4 + 1;
            } else {
                uVar13 = (int)pbVar7 - (int)param_1;
                if (uVar13 < 0x20) {
                    pbVar11 = param_1 + -1;
                    *pbVar4 = (byte)uVar13;
                    pbVar12 = pbVar4;
                    do {
                        pbVar11 = pbVar11 + 1;
                        pbVar12 = pbVar12 + 1;
                        *pbVar12 = *pbVar11;
                    } while (pbVar4 + uVar13 != pbVar12);
                    local_50 = pbVar7 + 4;
                    param_1 = param_1 + uVar13;
                    pbVar4 = pbVar4 + uVar13 + 1;
                } else if (uVar13 < 0x118) {
                    *pbVar4 = 0;
                    pbVar11 = pbVar4 + 1;
                    *pbVar11 = (byte)uVar13 - 0x20;
                    pbVar12 = param_1;
                    do {
                        pbVar16 = pbVar12 + 1;
                        pbVar11 = pbVar11 + 1;
                        *pbVar11 = *pbVar12;
                        pbVar12 = pbVar16;
                    } while (pbVar16 != param_1 + uVar13);
                    local_50 = pbVar7 + 4;
                    param_1 = pbVar16;
                    pbVar4 = pbVar4 + uVar13 + 2;
                } else {
                    pbVar4 = (byte *)_lzo1b_store_run(pbVar4, param_1);
                    param_1 = pbVar7;
                }
            }
        }
        if (pbVar6 < (byte *)0x9) {
            pbVar12 = (byte *)((uint)pbVar6 & 0xff);
            if (uVar14 < 0x2001)
                goto LAB_00019a88;
            pbVar4[1] = (byte)uVar14;
            *pbVar4 = (char)pbVar6 - 3U | 0x20;
            pbVar4[2] = (byte)(uVar14 >> 8);
            pbVar4 = pbVar4 + 3;
            pbVar7 = pbVar5;
        } else {
        LAB_000199e8:
            pbVar7 = pbVar5 + -uVar14;
            if ((pbVar5 < pbVar17) && (*pbVar7 == *pbVar5)) {
                do {
                    pbVar5 = pbVar5 + 1;
                    if (pbVar17 == pbVar5)
                        break;
                    pbVar7 = pbVar7 + 1;
                } while (*pbVar7 == *pbVar5);
            }
            uVar13 = (int)pbVar5 - (int)param_1;
            pbVar7 = pbVar4 + 1;
            if (uVar13 < 0x23) {
                *pbVar4 = (char)uVar13 - 3U | 0x20;
            } else {
                *pbVar4 = 0x20;
                for (uVar13 = uVar13 - 0x22; 0xff < uVar13;
                     uVar13 = uVar13 - 0xff) {
                    *pbVar7 = 0;
                    pbVar7 = pbVar7 + 1;
                }
                *pbVar7 = (byte)uVar13;
                pbVar7 = pbVar7 + 1;
            }
            *pbVar7 = (byte)uVar14;
            pbVar7[1] = (byte)(uVar14 >> 8);
            pbVar4 = pbVar7 + 2;
            pbVar7 = pbVar5;
        }
    joined_r0x00019a68:
        pbVar5 = pbVar7;
        if (pbVar8 <= pbVar7) {
        LAB_00019874:
            if (pbVar17 != pbVar5) {
                pbVar4 = (byte *)_lzo1b_store_run(pbVar4, pbVar5,
                                                  (int)pbVar17 - (int)pbVar5);
            }
            *param_4 = (int)pbVar4 - (int)param_3;
            return 0;
        }
        uVar15 = (uint)param_1[3] ^ (uVar15 ^ (uint)*param_1 << 10) << 5;
        *(byte **)((int)param_5 +
                   ((uVar15 * 0x9f5f >> 4 & 0x3ffe) + (uVar2 ^ 1)) * 4) =
            param_1 + 1;
        *(byte **)((int)param_5 + (((uint)param_1[4] ^
                                    (uVar15 ^ (uint)param_1[1] << 10) << 5) *
                                               0x9f5f >>
                                           4 &
                                       0x3ffe |
                                   uVar2) *
                                      4) = param_1 + 2;
        uVar15 = (uint)pbVar7[2] ^ ((uint)pbVar7[1] ^ (uint)*pbVar7 << 5) << 5;
        param_1 = pbVar7;
        uVar2 = uVar2 + 1 & 1;
    } while (true);
}

void lzo1b_5_compress(void)

{
    _lzo1b_do_compress();
    return;
}

undefined4 FUN_00019cb4(byte *param_1, int param_2, byte *param_3, int *param_4,
                        void *param_5)

{
    undefined4 *puVar1;
    uint uVar2;
    int iVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    byte *pbVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    byte *pbVar10;
    byte *pbVar11;
    byte *pbVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    byte *pbVar16;
    byte *pbVar17;
    byte *local_50;

    pbVar17 = param_1 + param_2;
    pbVar7 = param_1 + param_2 + -9;
    memset(param_5, 0, 0x10000);
    uVar2 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    *(byte **)((int)param_5 + (uVar2 * 0x9f5f >> 4 & 0x3ffe) * 4) = param_1;
    uVar15 = (uint)param_1[3] ^ (uVar2 ^ (uint)*param_1 << 10) << 5;
    pbVar11 = param_1 + 1;
    uVar2 = 1;
    pbVar4 = param_3;
    local_50 = pbVar7;
LAB_00019d48:
    do {
        while (true) {
            pbVar5 = pbVar11 + 9;
            puVar8 = (undefined4 *)((int)param_5 +
                                    (uVar15 * 0x27d7c000 >> 0x13) * 8);
            pbVar12 = (byte *)0x0;
            iVar3 = 2;
            puVar1 = puVar8;
            uVar13 = 0;
            do {
                puVar9 = puVar1;
                pbVar6 = (byte *)*puVar9;
                if ((((pbVar6 != (byte *)0x0) &&
                      (uVar14 = (int)pbVar11 - (int)pbVar6,
                       uVar14 < 0x10000)) &&
                     (pbVar6[(int)pbVar12] == pbVar11[(int)pbVar12])) &&
                    (((*pbVar6 == *pbVar11 && (pbVar6[1] == pbVar11[1])) &&
                      (pbVar6[2] == pbVar11[2])))) {
                    pbVar10 = pbVar11 + 4;
                    if (((pbVar6[3] == pbVar11[3]) &&
                         (pbVar10 = pbVar11 + 5, pbVar6[4] == pbVar11[4])) &&
                        ((pbVar10 = pbVar11 + 6,
                          pbVar6[5] == pbVar11[5] &&
                              (((pbVar10 = pbVar11 + 7,
                                 pbVar6[6] == pbVar11[6] &&
                                     (pbVar10 = pbVar11 + 8,
                                      pbVar6[7] == pbVar11[7])) &&
                                (pbVar10 = pbVar5,
                                 pbVar6[8] == pbVar11[8])))))) {
                        if (pbVar11 == param_1) {
                            uVar13 = uVar14;
                        }
                        puVar9[iVar3 + (uVar2 - 2)] = pbVar11;
                        if (pbVar11 == param_1)
                            goto LAB_00019ee8;
                        pbVar12 = (byte *)0x9;
                        goto LAB_00019e8c;
                    }
                    if (pbVar12 < pbVar10 + (-1 - (int)pbVar11)) {
                        pbVar12 = pbVar10 + (-1 - (int)pbVar11);
                        uVar13 = uVar14;
                    }
                }
                uVar14 = uVar13;
                iVar3 = 1;
                puVar1 = puVar9 + 1;
                uVar13 = uVar14;
            } while (puVar8 + 2 != puVar9 + 1);
            puVar9[uVar2 - 1] = pbVar11;
            if ((byte *)0x3 < pbVar12)
                break;
            if (uVar14 < 0x2001 && pbVar12 == (byte *)0x3) {
                pbVar12 = (byte *)0x3;
                pbVar5 = pbVar11 + 3;
                if (pbVar11 != param_1)
                    goto LAB_00019e8c;
                goto LAB_0001a0f0;
            }
            pbVar5 = param_1;
            pbVar6 = pbVar4;
            if (pbVar7 <= pbVar11 + 1)
                goto LAB_00019e40;
            uVar15 = (uint)pbVar11[3] ^ (uVar15 ^ (uint)*pbVar11 << 10) << 5;
            pbVar11 = pbVar11 + 1;
            uVar2 = uVar2 ^ 1;
        }
        pbVar5 = pbVar11 + (int)pbVar12;
        pbVar6 = pbVar12;
        if (pbVar11 != param_1) {
        LAB_00019e8c:
            pbVar6 = pbVar12;
            uVar13 = uVar14;
            if (local_50 == pbVar11) {
                pbVar4[-2] = pbVar4[-2] & 0x1f;
                local_50 = local_50 + 4;
                *pbVar4 = *param_1;
                param_1 = param_1 + 1;
                pbVar4 = pbVar4 + 1;
            } else {
                uVar14 = (int)pbVar11 - (int)param_1;
                if (uVar14 < 0x20) {
                    pbVar10 = param_1 + -1;
                    *pbVar4 = (byte)uVar14;
                    pbVar12 = pbVar4;
                    do {
                        pbVar10 = pbVar10 + 1;
                        pbVar12 = pbVar12 + 1;
                        *pbVar12 = *pbVar10;
                    } while (pbVar4 + uVar14 != pbVar12);
                    local_50 = pbVar11 + 4;
                    param_1 = param_1 + uVar14;
                    pbVar4 = pbVar4 + uVar14 + 1;
                } else if (uVar14 < 0x118) {
                    *pbVar4 = 0;
                    pbVar10 = pbVar4 + 1;
                    *pbVar10 = (byte)uVar14 - 0x20;
                    pbVar12 = param_1;
                    do {
                        pbVar16 = pbVar12 + 1;
                        pbVar10 = pbVar10 + 1;
                        *pbVar10 = *pbVar12;
                        pbVar12 = pbVar16;
                    } while (pbVar16 != param_1 + uVar14);
                    local_50 = pbVar11 + 4;
                    param_1 = pbVar16;
                    pbVar4 = pbVar4 + uVar14 + 2;
                } else {
                    pbVar4 = (byte *)_lzo1b_store_run(pbVar4, param_1);
                    param_1 = pbVar11;
                }
            }
        }
        if ((byte *)0x8 < pbVar6) {
        LAB_00019ee8:
            pbVar12 = pbVar5 + -uVar13;
            pbVar11 = pbVar5;
            if ((pbVar5 < pbVar17) && (*pbVar12 == *pbVar5)) {
                do {
                    pbVar11 = pbVar5 + 1;
                    if (pbVar17 == pbVar11)
                        break;
                    pbVar12 = pbVar12 + 1;
                    pbVar5 = pbVar11;
                } while (*pbVar12 == *pbVar11);
            }
            uVar14 = (int)pbVar11 - (int)param_1;
            pbVar5 = pbVar4 + 1;
            if (uVar14 < 0x23) {
                *pbVar4 = (char)uVar14 - 3U | 0x20;
            } else {
                *pbVar4 = 0x20;
                for (uVar14 = uVar14 - 0x22; 0xff < uVar14;
                     uVar14 = uVar14 - 0xff) {
                    *pbVar5 = 0;
                    pbVar5 = pbVar5 + 1;
                }
                *pbVar5 = (byte)uVar14;
                pbVar5 = pbVar5 + 1;
            }
            pbVar6 = pbVar5 + 2;
            *pbVar5 = (byte)uVar13;
            pbVar5[1] = (byte)(uVar13 >> 8);
            pbVar5 = pbVar11;
            if (pbVar7 <= pbVar11)
                goto LAB_00019e40;
            uVar15 = (uint)param_1[3] ^ (uVar15 ^ (uint)*param_1 << 10) << 5;
            uVar13 = uVar2 + 1 & 1;
            *(byte **)((int)param_5 +
                       ((uVar15 * 0x9f5f >> 4 & 0x3ffe) + (uVar2 ^ 1)) * 4) =
                param_1 + 1;
            uVar15 = (uint)param_1[4] ^ (uVar15 ^ (uint)param_1[1] << 10) << 5;
            *(byte **)((int)param_5 + (uVar15 * 0x9f5f >> 4 & 0x3ffe | uVar2) *
                                          4) = param_1 + 2;
            uVar2 = (uint)param_1[5] ^ (uVar15 ^ (uint)param_1[2] << 10) << 5;
            *(byte **)((int)param_5 + (uVar2 * 0x9f5f >> 4 & 0x3ffe | uVar13) *
                                          4) = param_1 + 3;
            *(byte **)((int)param_5 + (((uint)param_1[6] ^
                                        (uVar2 ^ (uint)param_1[3] << 10) << 5) *
                                                   0x9f5f >>
                                               4 &
                                           0x3ffe |
                                       uVar13 ^ 1) *
                                          4) = param_1 + 4;
            uVar15 = (uint)pbVar11[2] ^ ((uint)pbVar11[1] ^ (uint)*pbVar11 << 5)
                                            << 5;
            param_1 = pbVar11;
            uVar2 = uVar13;
            pbVar4 = pbVar6;
            goto LAB_00019d48;
        }
        pbVar12 = (byte *)((uint)pbVar6 & 0xff);
        if (uVar13 < 0x2001) {
        LAB_0001a0f0:
            pbVar6 = pbVar4 + 2;
            *pbVar4 = (byte)(uVar13 - 1) & 0x1f | ((char)pbVar12 + -1) * ' ';
            pbVar4[1] = (byte)(uVar13 - 1 >> 5);
            pbVar11 = pbVar5;
        } else {
            pbVar4[1] = (byte)uVar13;
            *pbVar4 = (char)pbVar6 - 3U | 0x20;
            pbVar6 = pbVar4 + 3;
            pbVar4[2] = (byte)(uVar13 >> 8);
            pbVar11 = pbVar5;
        }
        pbVar5 = pbVar11;
        if (pbVar7 <= pbVar11) {
        LAB_00019e40:
            if (pbVar17 != pbVar5) {
                pbVar6 = (byte *)_lzo1b_store_run(pbVar6, pbVar5,
                                                  (int)pbVar17 - (int)pbVar5);
            }
            *param_4 = (int)pbVar6 - (int)param_3;
            return 0;
        }
        pbVar4 = param_1 + -1;
        pbVar5 = param_1 + 2;
        param_1 = param_1 + 1;
        do {
            pbVar12 = param_1;
            pbVar4 = pbVar4 + 1;
            param_1 = pbVar12 + 1;
            pbVar5 = pbVar5 + 1;
            uVar15 = (uint)*pbVar5 ^ (uVar15 ^ (uint)*pbVar4 << 10) << 5;
            *(byte **)((int)param_5 + (uVar15 * 0x27d7c000 >> 0x13) * 8) =
                pbVar12;
        } while (param_1 < pbVar11);
        uVar15 = (uint)pbVar12[3] ^ (uVar15 ^ (uint)*pbVar12 << 10) << 5;
        uVar2 = uVar2 ^ 1;
        pbVar4 = pbVar6;
    } while (true);
}

void lzo1b_6_compress(void)

{
    _lzo1b_do_compress();
    return;
}

undefined4 FUN_0001a338(byte *param_1, int param_2, byte *param_3, int *param_4,
                        void *param_5)

{
    undefined4 *puVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte *pbVar4;
    uint uVar5;
    int iVar6;
    byte *pbVar7;
    byte *pbVar8;
    uint uVar9;
    undefined4 *puVar10;
    byte *pbVar11;
    byte *pbVar12;
    uint uVar13;
    byte *pbVar14;
    byte *pbVar15;
    uint uVar16;
    bool bVar17;
    uint local_58;
    byte *local_50;

    pbVar15 = param_1 + param_2;
    pbVar8 = param_1 + param_2 + -9;
    memset(param_5, 0, 0x10000);
    uVar9 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    *(byte **)((int)param_5 + (uVar9 * 0x9f5f >> 3 & 0x3ffc) * 4) = param_1;
    local_58 = (uint)param_1[3] ^ (uVar9 ^ (uint)*param_1 << 10) << 5;
    uVar9 = 1;
    pbVar7 = param_1 + 1;
    pbVar2 = param_3;
    local_50 = pbVar8;
    do {
        while (true) {
            pbVar3 = pbVar7 + 9;
            pbVar12 = (byte *)0x0;
            iVar6 = 4;
            puVar1 = (undefined4 *)((int)param_5 +
                                    (local_58 * 0x4faf8000 >> 0x14) * 0x10);
            uVar5 = 0;
            do {
                puVar10 = puVar1;
                pbVar4 = (byte *)*puVar10;
                if ((((pbVar4 != (byte *)0x0) &&
                      (uVar16 = (int)pbVar7 - (int)pbVar4, uVar16 < 0x10000)) &&
                     (pbVar4[(int)pbVar12] == pbVar7[(int)pbVar12])) &&
                    (((*pbVar4 == *pbVar7 && (pbVar4[1] == pbVar7[1])) &&
                      (pbVar4[2] == pbVar7[2])))) {
                    pbVar11 = pbVar7 + 4;
                    if (((pbVar4[3] == pbVar7[3]) &&
                         (pbVar11 = pbVar7 + 5, pbVar4[4] == pbVar7[4])) &&
                        ((pbVar11 = pbVar7 + 6,
                          pbVar4[5] == pbVar7[5] &&
                              (((pbVar11 = pbVar7 + 7,
                                 pbVar4[6] == pbVar7[6] &&
                                     (pbVar11 = pbVar7 + 8,
                                      pbVar4[7] == pbVar7[7])) &&
                                (pbVar11 = pbVar3,
                                 pbVar4[8] == pbVar7[8])))))) {
                        uVar13 = uVar9 + 1 & 3;
                        if (pbVar7 == param_1) {
                            uVar5 = uVar16;
                        }
                        puVar10[iVar6 + (uVar9 - 4)] = pbVar7;
                        if (pbVar7 == param_1)
                            goto LAB_0001a604;
                        pbVar12 = (byte *)0x9;
                        goto LAB_0001a4d4;
                    }
                    if (pbVar12 < pbVar11 + (-1 - (int)pbVar7)) {
                        pbVar12 = pbVar11 + (-1 - (int)pbVar7);
                        uVar5 = uVar16;
                    }
                }
                uVar16 = uVar5;
                iVar6 = iVar6 + -1;
                puVar1 = puVar10 + 1;
                uVar5 = uVar16;
            } while (iVar6 != 0);
            puVar10[uVar9 - 3] = pbVar7;
            uVar13 = uVar9 + 1 & 3;
            if ((byte *)0x3 < pbVar12)
                break;
            bVar17 = uVar16 == 0x2000;
            if (uVar16 < 0x2001) {
                bVar17 = pbVar12 == (byte *)0x3;
            }
            if (bVar17) {
                pbVar12 = (byte *)0x3;
                pbVar3 = pbVar7 + 3;
                if (pbVar7 != param_1)
                    goto LAB_0001a4d4;
            LAB_0001a6a4:
                *pbVar2 = (byte)(uVar5 - 1) & 0x1f | ((char)pbVar12 + -1) * ' ';
                pbVar2[1] = (byte)(uVar5 - 1 >> 5);
                pbVar2 = pbVar2 + 2;
                pbVar7 = pbVar3;
                goto joined_r0x0001a684;
            }
            pbVar3 = param_1;
            if (pbVar8 <= pbVar7 + 1)
                goto LAB_0001a488;
            local_58 = (uint)pbVar7[3] ^ (local_58 ^ (uint)*pbVar7 << 10) << 5;
            uVar9 = uVar13;
            pbVar7 = pbVar7 + 1;
        }
        pbVar3 = pbVar7 + (int)pbVar12;
        pbVar4 = pbVar12;
        if (pbVar7 != param_1) {
        LAB_0001a4d4:
            pbVar4 = pbVar12;
            uVar5 = uVar16;
            if (local_50 == pbVar7) {
                pbVar2[-2] = pbVar2[-2] & 0x1f;
                local_50 = local_50 + 4;
                *pbVar2 = *param_1;
                pbVar2 = pbVar2 + 1;
                param_1 = param_1 + 1;
            } else {
                uVar9 = (int)pbVar7 - (int)param_1;
                if (uVar9 < 0x20) {
                    pbVar11 = param_1 + -1;
                    *pbVar2 = (byte)uVar9;
                    pbVar12 = pbVar2;
                    do {
                        pbVar11 = pbVar11 + 1;
                        pbVar12 = pbVar12 + 1;
                        *pbVar12 = *pbVar11;
                    } while (pbVar2 + uVar9 != pbVar12);
                    local_50 = pbVar7 + 4;
                    pbVar2 = pbVar2 + uVar9 + 1;
                    param_1 = param_1 + uVar9;
                } else if (uVar9 < 0x118) {
                    *pbVar2 = 0;
                    pbVar11 = pbVar2 + 1;
                    *pbVar11 = (byte)uVar9 - 0x20;
                    pbVar12 = param_1;
                    do {
                        pbVar14 = pbVar12 + 1;
                        pbVar11 = pbVar11 + 1;
                        *pbVar11 = *pbVar12;
                        pbVar12 = pbVar14;
                    } while (pbVar14 != param_1 + uVar9);
                    local_50 = pbVar7 + 4;
                    pbVar2 = pbVar2 + uVar9 + 2;
                    param_1 = pbVar14;
                } else {
                    pbVar2 = (byte *)_lzo1b_store_run(pbVar2, param_1);
                    param_1 = pbVar7;
                }
            }
        }
        if (pbVar4 < (byte *)0x9) {
            pbVar12 = (byte *)((uint)pbVar4 & 0xff);
            if (uVar5 < 0x2001)
                goto LAB_0001a6a4;
            pbVar2[1] = (byte)uVar5;
            *pbVar2 = (char)pbVar4 - 3U | 0x20;
            pbVar2[2] = (byte)(uVar5 >> 8);
            pbVar2 = pbVar2 + 3;
            pbVar7 = pbVar3;
        } else {
        LAB_0001a604:
            pbVar7 = pbVar3 + -uVar5;
            if ((pbVar3 < pbVar15) && (*pbVar7 == *pbVar3)) {
                do {
                    pbVar3 = pbVar3 + 1;
                    if (pbVar15 == pbVar3)
                        break;
                    pbVar7 = pbVar7 + 1;
                } while (*pbVar7 == *pbVar3);
            }
            uVar9 = (int)pbVar3 - (int)param_1;
            pbVar7 = pbVar2 + 1;
            if (uVar9 < 0x23) {
                *pbVar2 = (char)uVar9 - 3U | 0x20;
            } else {
                *pbVar2 = 0x20;
                for (uVar9 = uVar9 - 0x22; 0xff < uVar9; uVar9 = uVar9 - 0xff) {
                    *pbVar7 = 0;
                    pbVar7 = pbVar7 + 1;
                }
                *pbVar7 = (byte)uVar9;
                pbVar7 = pbVar7 + 1;
            }
            *pbVar7 = (byte)uVar5;
            pbVar7[1] = (byte)(uVar5 >> 8);
            pbVar2 = pbVar7 + 2;
            pbVar7 = pbVar3;
        }
    joined_r0x0001a684:
        pbVar3 = pbVar7;
        if (pbVar8 <= pbVar7) {
        LAB_0001a488:
            if (pbVar15 != pbVar3) {
                pbVar2 = (byte *)_lzo1b_store_run(pbVar2, pbVar3,
                                                  (int)pbVar15 - (int)pbVar3);
            }
            *param_4 = (int)pbVar2 - (int)param_3;
            return 0;
        }
        uVar5 = uVar13 + 1 & 3;
        uVar16 = (uint)param_1[3] ^ (local_58 ^ (uint)*param_1 << 10) << 5;
        uVar9 = uVar5 + 1 & 3;
        *(byte **)((int)param_5 + ((uVar16 * 0x9f5f >> 3 & 0x3ffc) + uVar13) *
                                      4) = param_1 + 1;
        *(byte **)((int)param_5 + (((uint)param_1[4] ^
                                    (uVar16 ^ (uint)param_1[1] << 10) << 5) *
                                               0x9f5f >>
                                           3 &
                                       0x3ffc |
                                   uVar5) *
                                      4) = param_1 + 2;
        local_58 = (uint)pbVar7[2] ^ ((uint)pbVar7[1] ^ (uint)*pbVar7 << 5)
                                         << 5;
        param_1 = pbVar7;
    } while (true);
}

void lzo1b_7_compress(void)

{
    _lzo1b_do_compress();
    return;
}

undefined4 FUN_0001a8bc(byte *param_1, int param_2, byte *param_3, int *param_4,
                        void *param_5)

{
    undefined4 *puVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte *pbVar4;
    int iVar5;
    byte *pbVar6;
    uint uVar7;
    undefined4 *puVar8;
    byte *pbVar9;
    byte *pbVar10;
    byte *pbVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    byte *pbVar15;
    byte *pbVar16;
    uint uVar17;
    uint uVar18;
    uint local_60;
    byte *local_50;

    pbVar16 = param_1 + param_2;
    pbVar6 = param_1 + param_2 + -9;
    memset(param_5, 0, 0x10000);
    uVar7 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    *(byte **)((int)param_5 + (uVar7 * 0x9f5f >> 3 & 0x3ffc) * 4) = param_1;
    uVar14 = (uint)param_1[3] ^ (uVar7 ^ (uint)*param_1 << 10) << 5;
    uVar7 = 1;
    pbVar9 = param_1 + 1;
    pbVar2 = param_3;
    local_50 = pbVar6;
LAB_0001a948:
    do {
        while (true) {
            pbVar3 = pbVar9 + 9;
            iVar5 = 4;
            pbVar10 = (byte *)0x0;
            local_60 = 0;
            puVar1 = (undefined4 *)((int)param_5 +
                                    (uVar14 * 0x4faf8000 >> 0x14) * 0x10);
            do {
                puVar8 = puVar1;
                pbVar4 = (byte *)*puVar8;
                if ((((pbVar4 != (byte *)0x0) &&
                      (uVar17 = (int)pbVar9 - (int)pbVar4, uVar17 < 0x10000)) &&
                     (pbVar4[(int)pbVar10] == pbVar9[(int)pbVar10])) &&
                    (((*pbVar4 == *pbVar9 && (pbVar4[1] == pbVar9[1])) &&
                      (pbVar4[2] == pbVar9[2])))) {
                    pbVar11 = pbVar9 + 4;
                    if (((pbVar4[3] == pbVar9[3]) &&
                         (pbVar11 = pbVar9 + 5, pbVar4[4] == pbVar9[4])) &&
                        ((pbVar11 = pbVar9 + 6,
                          pbVar4[5] == pbVar9[5] &&
                              (((pbVar11 = pbVar9 + 7,
                                 pbVar4[6] == pbVar9[6] &&
                                     (pbVar11 = pbVar9 + 8,
                                      pbVar4[7] == pbVar9[7])) &&
                                (pbVar11 = pbVar3,
                                 pbVar4[8] == pbVar9[8])))))) {
                        uVar13 = uVar7 + 1 & 3;
                        if (param_1 == pbVar9) {
                            local_60 = uVar17;
                        }
                        puVar8[iVar5 + (uVar7 - 4)] = pbVar9;
                        if (param_1 == pbVar9)
                            goto LAB_0001aac8;
                        pbVar10 = (byte *)0x9;
                        local_60 = uVar17;
                        goto LAB_0001aa68;
                    }
                    if (pbVar10 < pbVar11 + (-1 - (int)pbVar9)) {
                        pbVar10 = pbVar11 + (-1 - (int)pbVar9);
                        local_60 = uVar17;
                    }
                }
                iVar5 = iVar5 + -1;
                puVar1 = puVar8 + 1;
            } while (iVar5 != 0);
            puVar8[uVar7 - 3] = pbVar9;
            uVar13 = uVar7 + 1 & 3;
            if ((byte *)0x3 < pbVar10)
                break;
            if (local_60 < 0x2001 && pbVar10 == (byte *)0x3) {
                pbVar10 = (byte *)0x3;
                pbVar3 = pbVar9 + 3;
                if (pbVar9 != param_1)
                    goto LAB_0001aa68;
                goto LAB_0001addc;
            }
            pbVar4 = pbVar2;
            pbVar3 = param_1;
            if (pbVar6 <= pbVar9 + 1)
                goto LAB_0001aa1c;
            uVar14 = (uint)pbVar9[3] ^ (uVar14 ^ (uint)*pbVar9 << 10) << 5;
            uVar7 = uVar13;
            pbVar9 = pbVar9 + 1;
        }
        pbVar3 = pbVar9 + (int)pbVar10;
        pbVar11 = pbVar10;
        if (pbVar9 != param_1) {
        LAB_0001aa68:
            pbVar11 = pbVar10;
            if (local_50 == pbVar9) {
                pbVar2[-2] = pbVar2[-2] & 0x1f;
                local_50 = local_50 + 4;
                *pbVar2 = *param_1;
                pbVar2 = pbVar2 + 1;
                param_1 = param_1 + 1;
            } else {
                uVar7 = (int)pbVar9 - (int)param_1;
                if (uVar7 < 0x20) {
                    pbVar4 = param_1 + -1;
                    *pbVar2 = (byte)uVar7;
                    pbVar10 = pbVar2;
                    do {
                        pbVar4 = pbVar4 + 1;
                        pbVar10 = pbVar10 + 1;
                        *pbVar10 = *pbVar4;
                    } while (pbVar2 + uVar7 != pbVar10);
                    local_50 = pbVar9 + 4;
                    pbVar2 = pbVar2 + uVar7 + 1;
                    param_1 = param_1 + uVar7;
                } else if (uVar7 < 0x118) {
                    *pbVar2 = 0;
                    pbVar4 = pbVar2 + 1;
                    *pbVar4 = (byte)uVar7 - 0x20;
                    pbVar10 = param_1;
                    do {
                        pbVar15 = pbVar10 + 1;
                        pbVar4 = pbVar4 + 1;
                        *pbVar4 = *pbVar10;
                        pbVar10 = pbVar15;
                    } while (pbVar15 != param_1 + uVar7);
                    local_50 = pbVar9 + 4;
                    pbVar2 = pbVar2 + uVar7 + 2;
                    param_1 = pbVar15;
                } else {
                    pbVar2 = (byte *)_lzo1b_store_run(pbVar2, param_1);
                    param_1 = pbVar9;
                }
            }
        }
        if ((byte *)0x8 < pbVar11) {
        LAB_0001aac8:
            pbVar10 = pbVar3 + -local_60;
            pbVar9 = pbVar3;
            if ((pbVar3 < pbVar16) && (*pbVar10 == *pbVar3)) {
                do {
                    pbVar9 = pbVar3 + 1;
                    if (pbVar16 == pbVar9)
                        break;
                    pbVar10 = pbVar10 + 1;
                    pbVar3 = pbVar9;
                } while (*pbVar10 == *pbVar9);
            }
            uVar7 = (int)pbVar9 - (int)param_1;
            pbVar3 = pbVar2 + 1;
            if (uVar7 < 0x23) {
                *pbVar2 = (char)uVar7 - 3U | 0x20;
            } else {
                *pbVar2 = 0x20;
                for (uVar7 = uVar7 - 0x22; 0xff < uVar7; uVar7 = uVar7 - 0xff) {
                    *pbVar3 = 0;
                    pbVar3 = pbVar3 + 1;
                }
                *pbVar3 = (byte)uVar7;
                pbVar3 = pbVar3 + 1;
            }
            pbVar4 = pbVar3 + 2;
            *pbVar3 = (byte)local_60;
            pbVar3[1] = (byte)(local_60 >> 8);
            pbVar3 = pbVar9;
            if (pbVar6 <= pbVar9)
                goto LAB_0001aa1c;
            uVar17 = uVar13 + 1 & 3;
            uVar7 = uVar17 + 1 & 3;
            uVar14 = (uint)param_1[3] ^ (uVar14 ^ (uint)*param_1 << 10) << 5;
            uVar12 = uVar7 + 1 & 3;
            *(byte **)((int)param_5 +
                       ((uVar14 * 0x9f5f >> 3 & 0x3ffc) + uVar13) * 4) =
                param_1 + 1;
            uVar14 = (uint)param_1[4] ^ (uVar14 ^ (uint)param_1[1] << 10) << 5;
            *(byte **)((int)param_5 + (uVar14 * 0x9f5f >> 3 & 0x3ffc | uVar17) *
                                          4) = param_1 + 2;
            uVar18 = uVar12 + 1 & 3;
            uVar14 = (uint)param_1[5] ^ (uVar14 ^ (uint)param_1[2] << 10) << 5;
            *(byte **)((int)param_5 + (uVar14 * 0x9f5f >> 3 & 0x3ffc | uVar7) *
                                          4) = param_1 + 3;
            uVar17 = uVar18 + 1 & 3;
            uVar7 = (uint)param_1[6] ^ (uVar14 ^ (uint)param_1[3] << 10) << 5;
            *(byte **)((int)param_5 + (uVar7 * 0x9f5f >> 3 & 0x3ffc | uVar12) *
                                          4) = param_1 + 4;
            uVar13 = uVar17 + 1 & 3;
            uVar7 = (uint)param_1[7] ^ (uVar7 ^ (uint)param_1[4] << 10) << 5;
            *(byte **)((int)param_5 + (uVar7 * 0x9f5f >> 3 & 0x3ffc | uVar18) *
                                          4) = param_1 + 5;
            uVar14 = uVar13 + 1 & 3;
            uVar12 = (uint)param_1[8] ^ (uVar7 ^ (uint)param_1[5] << 10) << 5;
            *(byte **)((int)param_5 + (uVar12 * 0x9f5f >> 3 & 0x3ffc | uVar17) *
                                          4) = param_1 + 6;
            uVar7 = uVar14 + 1 & 3;
            uVar17 = (uint)param_1[9] ^ (uVar12 ^ (uint)param_1[6] << 10) << 5;
            *(byte **)((int)param_5 + (uVar17 * 0x9f5f >> 3 & 0x3ffc | uVar13) *
                                          4) = param_1 + 7;
            *(byte **)((int)param_5 + (((uint)param_1[10] ^
                                        (uVar17 ^ (uint)param_1[7] << 10)
                                            << 5) * 0x9f5f >>
                                               3 &
                                           0x3ffc |
                                       uVar14) *
                                          4) = param_1 + 8;
            uVar14 = (uint)pbVar9[2] ^ ((uint)pbVar9[1] ^ (uint)*pbVar9 << 5)
                                           << 5;
            pbVar2 = pbVar4;
            param_1 = pbVar9;
            goto LAB_0001a948;
        }
        pbVar10 = (byte *)((uint)pbVar11 & 0xff);
        if (local_60 < 0x2001) {
        LAB_0001addc:
            pbVar4 = pbVar2 + 2;
            *pbVar2 = (byte)(local_60 - 1) & 0x1f | ((char)pbVar10 + -1) * ' ';
            pbVar2[1] = (byte)(local_60 - 1 >> 5);
            uVar7 = uVar13;
            pbVar9 = pbVar3;
        } else {
            pbVar4 = pbVar2 + 3;
            *pbVar2 = (char)pbVar11 - 3U | 0x20;
            pbVar2[1] = (byte)local_60;
            pbVar2[2] = (byte)(local_60 >> 8);
            uVar7 = uVar13;
            pbVar9 = pbVar3;
        }
        pbVar3 = pbVar9;
        if (pbVar6 <= pbVar9) {
        LAB_0001aa1c:
            if (pbVar16 != pbVar3) {
                pbVar4 = (byte *)_lzo1b_store_run(pbVar4, pbVar3,
                                                  (int)pbVar16 - (int)pbVar3);
            }
            *param_4 = (int)pbVar4 - (int)param_3;
            return 0;
        }
        pbVar2 = param_1 + -1;
        pbVar3 = param_1 + 2;
        param_1 = param_1 + 1;
        do {
            pbVar10 = param_1;
            pbVar2 = pbVar2 + 1;
            param_1 = pbVar10 + 1;
            pbVar3 = pbVar3 + 1;
            uVar14 = (uint)*pbVar3 ^ (uVar14 ^ (uint)*pbVar2 << 10) << 5;
            *(byte **)((int)param_5 + (uVar14 * 0x4faf8000 >> 0x14) * 0x10) =
                pbVar10;
        } while (param_1 < pbVar9);
        uVar14 = (uint)pbVar10[3] ^ (uVar14 ^ (uint)*pbVar10 << 10) << 5;
        pbVar2 = pbVar4;
    } while (true);
}

void lzo1b_8_compress(void)

{
    _lzo1b_do_compress();
    return;
}

undefined4 FUN_0001afb4(byte *param_1, int param_2, byte *param_3, int *param_4,
                        void *param_5)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    byte *pbVar5;
    byte *pbVar6;
    uint uVar7;
    byte *pbVar8;
    byte *pbVar9;
    byte *pbVar10;
    undefined4 *puVar11;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    bool bVar15;
    uint local_60;
    uint local_5c;
    byte *local_58;
    byte *local_38;

    pbVar14 = param_1 + param_2;
    pbVar10 = param_1 + param_2 + -9;
    memset(param_5, 0, 0x10000);
    local_60 = 1;
    uVar3 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    *(byte **)((int)param_5 + (uVar3 * 0x9f5f >> 3 & 0x3ffc) * 4) = param_1;
    uVar3 = (uint)param_1[3] ^ (uVar3 ^ (uint)*param_1 << 10) << 5;
    pbVar6 = param_1 + 1;
    pbVar5 = param_3;
    local_38 = pbVar10;
    do {
        uVar7 = uVar3 * 0x4faf8000 >> 0x14;
        puVar11 = (undefined4 *)((int)param_5 + uVar7 * 0x10 + -4);
        local_5c = 0;
        pbVar12 = (byte *)0x0;
        do {
            puVar11 = puVar11 + 1;
            pbVar8 = (byte *)*puVar11;
            pbVar9 = pbVar12;
            uVar2 = local_5c;
            if ((pbVar8 == (byte *)0x0) ||
                (uVar4 = (int)pbVar6 - (int)pbVar8, 0xffff < uVar4)) {
                *puVar11 = pbVar6;
            } else if ((((pbVar8[(int)pbVar12] == pbVar6[(int)pbVar12]) &&
                         (*pbVar8 == *pbVar6)) &&
                        (pbVar8[1] == pbVar6[1])) &&
                       (pbVar8[2] == pbVar6[2])) {
                local_58 = pbVar6 + 4;
                if ((((pbVar8[3] == pbVar6[3]) &&
                      (local_58 = pbVar6 + 5, pbVar8[4] == pbVar6[4])) &&
                     ((local_58 = pbVar6 + 6,
                       pbVar8[5] == pbVar6[5] &&
                           ((local_58 = pbVar6 + 7,
                             pbVar8[6] == pbVar6[6] &&
                                 (local_58 = pbVar6 + 8,
                                  pbVar8[7] == pbVar6[7])))))) &&
                    (local_58 = pbVar6 + 9, pbVar8[8] == pbVar6[8])) {
                    if (pbVar12 < (byte *)0x9 || uVar4 < local_5c) {
                        pbVar9 = (byte *)0x9;
                        uVar2 = uVar4;
                    }
                } else {
                    pbVar9 = local_58 + (-1 - (int)pbVar6);
                    bVar15 = pbVar12 == pbVar9;
                    uVar2 = uVar4;
                    if ((pbVar9 <= pbVar12) &&
                        (pbVar9 = pbVar12, uVar2 = local_5c,
                         uVar4 < local_5c && bVar15)) {
                        uVar2 = uVar4;
                    }
                }
            }
            local_5c = uVar2;
            pbVar12 = pbVar9;
        } while ((undefined4 *)((int)param_5 + uVar7 * 0x10 + 0xc) != puVar11);
        *(byte **)((int)param_5 + local_60 * 4 + uVar7 * 0x10) = pbVar6;
        if (pbVar9 < (byte *)0x4) {
            bVar15 = local_5c == 0x2000;
            if (local_5c < 0x2001) {
                bVar15 = pbVar9 == (byte *)0x3;
            }
            if (bVar15)
                goto LAB_0001b138;
            pbVar13 = pbVar6 + 1;
            if (pbVar10 <= pbVar13)
                goto LAB_0001b0f4;
            uVar3 = (uint)pbVar6[3] ^ (uVar3 ^ (uint)*pbVar6 << 10) << 5;
        } else {
        LAB_0001b138:
            pbVar12 = pbVar5;
            pbVar8 = param_1;
            if (pbVar6 != param_1) {
                if (pbVar6 == local_38) {
                    local_38 = pbVar6 + 4;
                    pbVar8 = param_1 + 1;
                    pbVar12 = pbVar5 + 1;
                    pbVar5[-2] = pbVar5[-2] & 0x1f;
                    *pbVar5 = *param_1;
                } else {
                    uVar7 = (int)pbVar6 - (int)param_1;
                    pbVar8 = pbVar6;
                    if (uVar7 < 0x20) {
                        param_1 = param_1 + -1;
                        *pbVar5 = (byte)uVar7;
                        do {
                            param_1 = param_1 + 1;
                            pbVar12 = pbVar12 + 1;
                            *pbVar12 = *param_1;
                        } while (pbVar5 + uVar7 != pbVar12);
                        local_38 = pbVar6 + 4;
                        pbVar12 = pbVar5 + uVar7 + 1;
                    } else if (uVar7 < 0x118) {
                        *pbVar5 = 0;
                        pbVar12 = pbVar5 + 1;
                        *pbVar12 = (byte)uVar7 - 0x20;
                        do {
                            pbVar8 = param_1 + 1;
                            pbVar12 = pbVar12 + 1;
                            *pbVar12 = *param_1;
                            param_1 = pbVar8;
                        } while (pbVar6 != pbVar8);
                        pbVar12 = pbVar5 + uVar7 + 2;
                        local_38 = pbVar6 + 4;
                    } else {
                        pbVar12 = (byte *)_lzo1b_store_run(pbVar5, param_1);
                    }
                }
            }
            pbVar13 = pbVar6 + (int)pbVar9;
            bVar1 = (byte)(local_5c >> 8);
            if (pbVar9 < (byte *)0x9) {
                if (local_5c < 0x2001) {
                    pbVar5 = pbVar12 + 2;
                    *pbVar12 =
                        (byte)(local_5c - 1) & 0x1f | ((char)pbVar9 + -1) * ' ';
                    pbVar12[1] = (byte)(local_5c - 1 >> 5);
                } else {
                    pbVar5 = pbVar12 + 3;
                    *pbVar12 = (char)pbVar9 - 3U | 0x20;
                    pbVar12[1] = (byte)local_5c;
                    pbVar12[2] = bVar1;
                }
                param_1 = pbVar13;
                if (pbVar10 <= pbVar13)
                    goto LAB_0001b0f4;
                pbVar6 = pbVar8 + -1;
                pbVar12 = pbVar8 + 2;
                param_1 = pbVar8 + 1;
                do {
                    pbVar9 = param_1;
                    pbVar6 = pbVar6 + 1;
                    param_1 = pbVar9 + 1;
                    pbVar12 = pbVar12 + 1;
                    uVar3 = (uint)*pbVar12 ^ (uVar3 ^ (uint)*pbVar6 << 10) << 5;
                    *(byte **)((int)param_5 +
                               (uVar3 * 0x4faf8000 >> 0x14) * 0x10) = pbVar9;
                } while (param_1 < pbVar13);
            } else {
                pbVar6 = pbVar13 + -local_5c;
                if ((pbVar13 < pbVar14) && (*pbVar13 == *pbVar6)) {
                    do {
                        pbVar13 = pbVar13 + 1;
                        if (pbVar14 == pbVar13)
                            break;
                        pbVar6 = pbVar6 + 1;
                    } while (*pbVar6 == *pbVar13);
                }
                uVar7 = (int)pbVar13 - (int)pbVar8;
                pbVar6 = pbVar12 + 1;
                if (uVar7 < 0x23) {
                    *pbVar12 = (char)uVar7 - 3U | 0x20;
                } else {
                    *pbVar12 = 0x20;
                    for (uVar7 = uVar7 - 0x22; 0xff < uVar7;
                         uVar7 = uVar7 - 0xff) {
                        *pbVar6 = 0;
                        pbVar6 = pbVar6 + 1;
                    }
                    *pbVar6 = (byte)uVar7;
                    pbVar6 = pbVar6 + 1;
                }
                pbVar5 = pbVar6 + 2;
                *pbVar6 = (byte)local_5c;
                pbVar6[1] = bVar1;
                param_1 = pbVar13;
                if (pbVar10 <= pbVar13) {
                LAB_0001b0f4:
                    if (pbVar14 != param_1) {
                        pbVar5 = (byte *)_lzo1b_store_run(
                            pbVar5, param_1, (int)pbVar14 - (int)param_1);
                    }
                    *param_4 = (int)pbVar5 - (int)param_3;
                    return 0;
                }
                pbVar6 = pbVar8 + -1;
                pbVar12 = pbVar8 + 2;
                param_1 = pbVar8 + 1;
                do {
                    pbVar9 = param_1;
                    pbVar6 = pbVar6 + 1;
                    param_1 = pbVar9 + 1;
                    pbVar12 = pbVar12 + 1;
                    uVar3 = (uint)*pbVar12 ^ (uVar3 ^ (uint)*pbVar6 << 10) << 5;
                    *(byte **)((int)param_5 +
                               (uVar3 * 0x4faf8000 >> 0x14) * 0x10) = pbVar9;
                } while (param_1 < pbVar13);
            }
            uVar3 = (uint)param_1[2] ^ (uVar3 ^ (uint)*pbVar9 << 10) << 5;
        }
        local_60 = local_60 + 1 & 3;
        pbVar6 = pbVar13;
    } while (true);
}

void lzo1b_9_compress(void)

{
    _lzo1b_do_compress();
    return;
}

undefined4 FUN_0001b57c(byte *param_1, int param_2, byte *param_3, int *param_4,
                        void *param_5)

{
    byte bVar1;
    char cVar2;
    bool bVar3;
    uint uVar4;
    byte *pbVar5;
    uint uVar6;
    byte *pbVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    uint uVar10;
    byte *pbVar11;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    byte *pbVar15;
    uint uVar16;
    byte *pbVar17;
    undefined4 *puVar18;
    byte *local_60;
    uint local_5c;
    byte *local_54;
    byte *local_2c;

    pbVar17 = param_1 + param_2;
    pbVar7 = param_1 + param_2 + -9;
    memset(param_5, 0, 0x40000);
    local_5c = 1;
    uVar4 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    *(byte **)((uVar4 * 0x9f5f & 0x3ffe0) + (int)param_5) = param_1;
    uVar4 = (uint)param_1[3] ^ (uVar4 ^ (uint)*param_1 << 10) << 5;
    pbVar5 = param_1 + 1;
    local_60 = param_3;
    local_54 = pbVar7;
LAB_0001b610:
    do {
        puVar8 = (undefined4 *)((int)param_5 + (uVar4 * 0x9f5f & 0x3ffe0));
        puVar18 = puVar8 + 8;
        pbVar14 = (byte *)0x0;
        uVar10 = 0;
        do {
            while (true) {
                puVar9 = puVar8;
                puVar8 = puVar9 + 1;
                local_2c = (byte *)*puVar9;
                pbVar13 = pbVar14;
                if ((local_2c != (byte *)0x0) &&
                    (uVar6 = (int)pbVar5 - (int)local_2c, uVar6 < 0x10000))
                    break;
                *puVar9 = pbVar5;
                uVar6 = uVar10;
                if (puVar18 == puVar8)
                    goto LAB_0001b6ac;
            }
            uVar16 = uVar10;
            if ((local_2c[(int)pbVar14] == pbVar5[(int)pbVar14]) &&
                (((*local_2c == *pbVar5 && (local_2c[1] == pbVar5[1])) &&
                  (local_2c[2] == pbVar5[2])))) {
                pbVar12 = pbVar5 + 4;
                uVar16 = uVar6;
                if (((((local_2c[3] == pbVar5[3]) &&
                       (pbVar12 = pbVar5 + 5, local_2c[4] == pbVar5[4])) &&
                      (pbVar12 = pbVar5 + 6, local_2c[5] == pbVar5[5])) &&
                     ((pbVar12 = pbVar5 + 7,
                       local_2c[6] == pbVar5[6] &&
                           (pbVar12 = pbVar5 + 8,
                            local_2c[7] == pbVar5[7])))) &&
                    (pbVar12 = pbVar5 + 9, local_2c[8] == pbVar5[8])) {
                    local_2c = local_2c + 8;
                    do {
                        pbVar13 = pbVar12;
                        if (pbVar17 <= pbVar13) {
                            pbVar13 = pbVar13 + -(int)pbVar5;
                            if (pbVar13 <= pbVar14)
                                goto LAB_0001bb3c;
                            goto LAB_0001b76c;
                        }
                        local_2c = local_2c + 1;
                        pbVar12 = pbVar13 + 1;
                    } while (*local_2c == *pbVar13);
                    pbVar13 = pbVar13 + -(int)pbVar5;
                    if (pbVar13 <= pbVar14) {
                    LAB_0001bb3c:
                        bVar3 = pbVar14 == pbVar13;
                        pbVar13 = pbVar14;
                        uVar16 = uVar10;
                        if (uVar6 < uVar10 && bVar3) {
                            uVar16 = uVar6;
                        }
                    }
                } else {
                    pbVar12 = pbVar12 + (-1 - (int)pbVar5);
                    pbVar13 = pbVar12;
                    if ((pbVar12 <= pbVar14) &&
                        (pbVar13 = pbVar14, uVar16 = uVar10,
                         uVar6 < uVar10 && pbVar14 == pbVar12)) {
                        uVar16 = uVar6;
                    }
                }
            }
            pbVar14 = pbVar13;
            uVar10 = uVar16;
            uVar6 = uVar16;
        } while (puVar18 != puVar8);
    LAB_0001b6ac:
        uVar10 = local_5c + 1 & 7;
        puVar9[local_5c - 7] = pbVar5;
        local_5c = uVar10;
        if (pbVar13 < (byte *)0x4) {
            if (uVar6 < 0x2001 && pbVar13 == (byte *)0x3) {
                pbVar13 = (byte *)0x3;
                pbVar14 = pbVar5 + 3;
                if (pbVar5 != param_1) {
                LAB_0001b778:
                    if (local_54 == pbVar5) {
                        local_54 = local_54 + 4;
                        local_60[-2] = local_60[-2] & 0x1f;
                        *local_60 = *param_1;
                        local_60 = local_60 + 1;
                        param_1 = param_1 + 1;
                    } else {
                        uVar10 = (int)pbVar5 - (int)param_1;
                        if (uVar10 < 0x20) {
                            pbVar11 = param_1 + -1;
                            *local_60 = (byte)uVar10;
                            pbVar12 = local_60;
                            do {
                                pbVar11 = pbVar11 + 1;
                                pbVar12 = pbVar12 + 1;
                                *pbVar12 = *pbVar11;
                            } while (local_60 + uVar10 != pbVar12);
                            local_60 = local_60 + uVar10 + 1;
                            local_54 = pbVar5 + 4;
                            param_1 = param_1 + uVar10;
                        } else if (uVar10 < 0x118) {
                            *local_60 = 0;
                            pbVar11 = local_60 + 1;
                            *pbVar11 = (byte)uVar10 - 0x20;
                            pbVar12 = param_1;
                            do {
                                pbVar15 = pbVar12 + 1;
                                pbVar11 = pbVar11 + 1;
                                *pbVar11 = *pbVar12;
                                pbVar12 = pbVar15;
                            } while (pbVar15 != param_1 + uVar10);
                            local_60 = local_60 + uVar10 + 2;
                            local_54 = pbVar5 + 4;
                            param_1 = pbVar15;
                        } else {
                            local_60 =
                                (byte *)_lzo1b_store_run(local_60, param_1);
                            param_1 = pbVar5;
                        }
                    }
                    goto LAB_0001b7d4;
                }
            LAB_0001b974:
                *local_60 =
                    (byte)(uVar6 - 1) & 0x1f | ((char)pbVar13 + -1) * ' ';
                local_60[1] = (byte)(uVar6 - 1 >> 5);
                local_60 = local_60 + 2;
            LAB_0001b904:
                if (pbVar7 <= pbVar14) {
                LAB_0001b6fc:
                    if (pbVar17 != pbVar14) {
                        local_60 = (byte *)_lzo1b_store_run(
                            local_60, pbVar14, (int)pbVar17 - (int)pbVar14);
                    }
                    *param_4 = (int)local_60 - (int)param_3;
                    return 0;
                }
                pbVar5 = param_1 + -1;
                pbVar13 = param_1 + 2;
                param_1 = param_1 + 1;
                do {
                    pbVar12 = param_1;
                    pbVar5 = pbVar5 + 1;
                    param_1 = pbVar12 + 1;
                    pbVar13 = pbVar13 + 1;
                    uVar4 = (uint)*pbVar13 ^ (uVar4 ^ (uint)*pbVar5 << 10) << 5;
                    *(byte **)((int)param_5 +
                               (uVar4 * 0x27d7c000 >> 0x13) * 0x20) = pbVar12;
                } while (param_1 < pbVar14);
                uVar4 = (uint)pbVar12[3] ^ (uVar4 ^ (uint)*pbVar12 << 10) << 5;
                pbVar5 = pbVar14;
            } else {
                pbVar14 = param_1;
                if (pbVar7 <= pbVar5 + 1)
                    goto LAB_0001b6fc;
                uVar4 = (uint)pbVar5[3] ^ (uVar4 ^ (uint)*pbVar5 << 10) << 5;
                pbVar5 = pbVar5 + 1;
            }
            goto LAB_0001b610;
        }
    LAB_0001b76c:
        pbVar14 = pbVar5 + (int)pbVar13;
        if (pbVar5 != param_1)
            goto LAB_0001b778;
    LAB_0001b7d4:
        bVar1 = (byte)(uVar6 >> 8);
        cVar2 = (char)pbVar13;
        if (pbVar13 < (byte *)0x9) {
            pbVar13 = (byte *)((uint)pbVar13 & 0xff);
            if (uVar6 < 0x2001)
                goto LAB_0001b974;
            local_60[2] = bVar1;
            local_60[1] = (byte)uVar6;
            *local_60 = cVar2 - 3U | 0x20;
            local_60 = local_60 + 3;
            goto LAB_0001b904;
        }
        pbVar5 = local_60 + 1;
        if (pbVar13 < (byte *)0x23) {
            *local_60 = cVar2 - 3U | 0x20;
        } else {
            *local_60 = 0x20;
            for (pbVar13 = pbVar13 + -0x22; (byte *)0xff < pbVar13;
                 pbVar13 = pbVar13 + -0xff) {
                *pbVar5 = 0;
                pbVar5 = pbVar5 + 1;
            }
            *pbVar5 = (byte)pbVar13;
            pbVar5 = pbVar5 + 1;
        }
        local_60 = pbVar5 + 2;
        *pbVar5 = (byte)uVar6;
        pbVar5[1] = bVar1;
        if (pbVar7 <= pbVar14)
            goto LAB_0001b6fc;
        pbVar5 = param_1 + -1;
        pbVar13 = param_1 + 2;
        param_1 = param_1 + 1;
        do {
            pbVar12 = param_1;
            pbVar5 = pbVar5 + 1;
            param_1 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
            uVar4 = (uint)*pbVar13 ^ (uVar4 ^ (uint)*pbVar5 << 10) << 5;
            *(byte **)((int)param_5 + (uVar4 * 0x27d7c000 >> 0x13) * 0x20) =
                pbVar12;
        } while (param_1 < pbVar14);
        uVar4 = (uint)pbVar12[3] ^ (uVar4 ^ (uint)*pbVar12 << 10) << 5;
        pbVar5 = pbVar14;
    } while (true);
}

void lzo1b_99_compress(void)

{
    _lzo1b_do_compress();
    return;
}

undefined4 FUN_0001bb94(int param_1, int param_2, int param_3, int param_4)

{
    char *pcVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    undefined1 *puVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    undefined4 uVar10;
    char *pcVar11;
    char cVar12;
    uint uVar13;
    char *pcVar14;
    undefined1 uVar15;
    int iVar16;
    char *pcVar17;

    if (param_4 == 0) {
        uVar13 = *(uint *)(param_2 + 0x44);
        iVar9 = uVar13 + 1;
        iVar3 = uVar13 + 2;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
    } else {
        uVar13 = *(uint *)(param_2 + 0x44);
        param_3 = param_3 - param_4;
        iVar16 = param_3;
        if (param_3 == 0) {
            iVar9 = uVar13 + 1;
            iVar3 = uVar13 + 2;
        } else {
            do {
                iVar9 = *(int *)(param_2 + 0x48);
                if (*(int *)(param_2 + 0x54) == 0) {
                    iVar3 = param_2 + iVar9;
                    iVar3 = param_2 + (((uint) * (byte *)(iVar3 + 0x5e) ^
                                        ((uint) * (byte *)(iVar3 + 0x5d) ^
                                         (uint) * (byte *)(iVar3 + 0x5c) << 5)
                                            << 5) *
                                           0x13ebe000 >>
                                       0x12) *
                                          4;
                    *(int *)(iVar3 + 0xa5054) = *(int *)(iVar3 + 0xa5054) + -1;
                } else {
                    *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + -1;
                }
                uVar4 = uVar13 + 1;
                iVar7 = param_2 + uVar13 * 4;
                iVar3 = param_2 +
                        (((uint) * (byte *)(param_2 + uVar13 + 0x5e) ^
                          ((uint) * (byte *)(param_2 + uVar4 + 0x5c) ^
                           (uint) * (byte *)(param_2 + uVar13 + 0x5c) << 5)
                              << 5) *
                             0x13ebe000 >>
                         0x12) *
                            4;
                iVar6 = *(int *)(iVar3 + 0xa5054);
                if (iVar6 == 0) {
                    uVar10 = 0xffffffff;
                } else {
                    uVar10 = *(undefined4 *)((int)&__DT_SYMTAB[0x85].st_name +
                                             iVar3);
                }
                *(undefined4 *)(iVar7 + 0x2105c) = uVar10;
                *(uint *)((int)&__DT_SYMTAB[0x85].st_name + iVar3) = uVar13;
                uVar8 = *(uint *)(param_2 + 4);
                *(uint *)(iVar7 + 0x63058) = uVar8 + 1;
                *(int *)(iVar3 + 0xa5054) = iVar6 + 1;
                iVar3 = *(int *)(param_2 + 0x2c);
                uVar13 = *(uint *)(param_2 + 0x40);
                puVar5 = *(undefined1 **)(iVar3 + 0x1c);
                if (puVar5 < *(undefined1 **)(iVar3 + 0x24)) {
                    *(undefined1 **)(iVar3 + 0x1c) = puVar5 + 1;
                    uVar15 = *puVar5;
                    *(undefined1 *)(param_2 + uVar13 + 0x5c) = uVar15;
                    if (uVar13 < uVar8) {
                        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar13) =
                            uVar15;
                        uVar13 = *(uint *)(param_2 + 0x40);
                        iVar9 = *(int *)(param_2 + 0x48);
                        uVar4 = *(int *)(param_2 + 0x44) + 1;
                    }
                } else {
                    if (*(int *)(param_2 + 0x24) != 0) {
                        *(int *)(param_2 + 0x24) =
                            *(int *)(param_2 + 0x24) + -1;
                    }
                    *(undefined1 *)(param_2 + uVar13 + 0x5c) = 0;
                    if (uVar13 < uVar8) {
                        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar13) = 0;
                        uVar13 = *(uint *)(param_2 + 0x40);
                        iVar9 = *(int *)(param_2 + 0x48);
                        uVar4 = *(int *)(param_2 + 0x44) + 1;
                    }
                }
                uVar2 = *(uint *)(param_2 + 0x4c);
                uVar8 = iVar9 + 1;
                *(uint *)(param_2 + 0x40) = uVar13 + 1;
                if (uVar13 + 1 == uVar2) {
                    *(undefined4 *)(param_2 + 0x40) = 0;
                }
                if (uVar2 == uVar4) {
                    iVar3 = 2;
                    iVar9 = 1;
                    uVar13 = 0;
                    *(undefined4 *)(param_2 + 0x44) = 0;
                } else {
                    *(uint *)(param_2 + 0x44) = uVar4;
                    iVar9 = uVar4 + 1;
                    iVar3 = uVar4 + 2;
                    uVar13 = uVar4;
                }
                if (uVar2 == uVar8) {
                    uVar8 = 0;
                }
                iVar16 = iVar16 + -1;
                *(uint *)(param_2 + 0x48) = uVar8;
            } while (iVar16 != 0);
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1 + param_3;
    }
    *(undefined4 *)(param_2 + 0x1c) = 2;
    *(undefined4 *)(param_2 + 0x20) = 0;
    uVar8 = (uint) * (byte *)(param_2 + uVar13 + 0x5c);
    iVar16 = param_2 +
             (((uint) * (byte *)(param_2 + iVar3 + 0x5c) ^
               ((uint) * (byte *)(param_2 + iVar9 + 0x5c) ^ uVar8 << 5) << 5) *
                  0x13ebe000 >>
              0x12) *
                 4;
    uVar4 = *(uint *)(iVar16 + 0xa5054);
    if (uVar4 == 0) {
        iVar9 = -1;
        *(undefined4 *)(param_2 + (uVar13 + 0x8416) * 4 + 4) = 0xffffffff;
        *(undefined4 *)(iVar16 + 0xa5054) = 1;
        uVar2 = uVar4;
    } else {
        iVar9 = *(int *)((int)&__DT_SYMTAB[0x85].st_name + iVar16);
        *(int *)(param_2 + (uVar13 + 0x8416) * 4 + 4) = iVar9;
        *(uint *)(iVar16 + 0xa5054) = uVar4 + 1;
        uVar2 = *(uint *)(param_2 + 0xc);
        if (uVar2 == 0 || uVar4 <= uVar2) {
            uVar2 = uVar4;
        }
    }
    *(uint *)((int)&__DT_SYMTAB[0x85].st_name + iVar16) = uVar13;
    uVar4 = *(uint *)(param_2 + 0x24);
    *(uint *)(param_2 + 0x28) = uVar8;
    if (uVar4 < 3) {
        uVar8 = *(uint *)(param_2 + 4);
        iVar16 = *(int *)(param_2 + 0x20);
        if (uVar4 == 0) {
            *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
        }
        uVar4 = *(uint *)(param_2 + 0x1c);
        *(uint *)(param_2 + (uVar13 + 0x18c16) * 4) = uVar8 + 1;
        goto LAB_0001bdc0;
    }
    iVar3 = param_2 + 0x5c;
    pcVar11 = (char *)(iVar3 + uVar13);
    iVar16 = uVar2 - 1;
    cVar12 = pcVar11[1];
    if (uVar2 == 0) {
        uVar4 = *(uint *)(param_2 + 0x1c);
    LAB_0001c164:
        iVar16 = *(int *)(param_2 + 0x20);
    } else {
        uVar8 = 2;
        do {
            pcVar14 = (char *)(iVar3 + iVar9);
            if ((((pcVar14[uVar8 - 1] == cVar12) &&
                  (pcVar14[uVar8] == pcVar11[uVar8])) &&
                 (*pcVar14 == *pcVar11)) &&
                (pcVar14[1] == pcVar11[1])) {
                pcVar14 = pcVar14 + 2;
                pcVar1 = pcVar11 + 3;
                do {
                    pcVar17 = pcVar1;
                    if ((char *)(iVar3 + uVar4 + uVar13) <= pcVar17)
                        break;
                    pcVar14 = pcVar14 + 1;
                    pcVar1 = pcVar17 + 1;
                } while (*pcVar17 == *pcVar14);
                uVar2 = (int)pcVar17 - (int)pcVar11;
                if (uVar8 < uVar2) {
                    *(uint *)(param_2 + 0x1c) = uVar2;
                    *(int *)(param_2 + 0x30) = iVar9;
                    if (uVar4 == uVar2)
                        goto LAB_0001c0f8;
                    if ((*(uint *)(param_2 + 0x10) <= uVar2) ||
                        (*(uint *)(param_2 + (iVar9 + 0x18c16) * 4) < uVar2))
                        break;
                    cVar12 = pcVar11[uVar2 - 1];
                    uVar8 = uVar2;
                }
            }
            iVar16 = iVar16 + -1;
            iVar9 = *(int *)(param_2 + 0x2105c + iVar9 * 4);
        } while (iVar16 != -1);
        uVar4 = *(uint *)(param_2 + 0x1c);
        if (uVar4 < 3)
            goto LAB_0001c164;
    LAB_0001c0f8:
        uVar8 = *(uint *)(param_2 + 0x30);
        if (uVar8 < uVar13) {
            iVar16 = -uVar8;
        } else {
            iVar16 = *(int *)(param_2 + 0x4c) - uVar8;
        }
        iVar16 = uVar13 + iVar16;
        *(int *)(param_2 + 0x20) = iVar16;
    }
    uVar8 = *(uint *)(param_2 + 4);
    *(uint *)(param_2 + (uVar13 + 0x18c16) * 4) = uVar4;
LAB_0001bdc0:
    iVar9 = *(int *)(param_2 + 0x48);
    if (*(int *)(param_2 + 0x54) == 0) {
        iVar3 = param_2 + iVar9;
        iVar3 = param_2 + (((uint) * (byte *)(iVar3 + 0x5e) ^
                            ((uint) * (byte *)(iVar3 + 0x5d) ^
                             (uint) * (byte *)(iVar3 + 0x5c) << 5)
                                << 5) *
                               0x13ebe000 >>
                           0x12) *
                              4;
        *(int *)(iVar3 + 0xa5054) = *(int *)(iVar3 + 0xa5054) + -1;
    } else {
        *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + -1;
    }
    iVar3 = *(int *)(param_2 + 0x2c);
    *(uint *)(param_1 + 8) = uVar4;
    *(int *)(param_1 + 0xc) = iVar16;
    puVar5 = *(undefined1 **)(iVar3 + 0x1c);
    uVar13 = *(uint *)(param_2 + 0x40);
    if (puVar5 < *(undefined1 **)(iVar3 + 0x24)) {
        *(undefined1 **)(iVar3 + 0x1c) = puVar5 + 1;
        uVar15 = *puVar5;
        *(undefined1 *)(param_2 + uVar13 + 0x5c) = uVar15;
    } else {
        if (*(int *)(param_2 + 0x24) != 0) {
            *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
        uVar15 = 0;
        *(undefined1 *)(param_2 + uVar13 + 0x5c) = 0;
    }
    if (uVar13 < uVar8) {
        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar13) = uVar15;
        uVar13 = *(uint *)(param_2 + 0x40);
        iVar9 = *(int *)(param_2 + 0x48);
    }
    iVar16 = *(int *)(param_2 + 0x4c);
    *(uint *)(param_2 + 0x40) = uVar13 + 1;
    iVar9 = iVar9 + 1;
    if (uVar13 + 1 == iVar16) {
        *(undefined4 *)(param_2 + 0x40) = 0;
    }
    iVar3 = *(int *)(param_2 + 0x44) + 1;
    if (iVar16 == iVar3) {
        iVar3 = 0;
    }
    *(int *)(param_2 + 0x44) = iVar3;
    if (iVar16 == iVar9) {
        *(undefined4 *)(param_2 + 0x48) = 0;
    }
    if (iVar16 != iVar9) {
        *(int *)(param_2 + 0x48) = iVar9;
    }
    if (*(int *)(param_2 + 0x28) < 0) {
        uVar13 = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
    } else {
        uVar13 = ~*(uint *)(param_2 + 0x24);
        *(uint *)(param_1 + 4) = *(uint *)(param_2 + 0x24) + 1;
    }
    iVar16 = *(int *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + uVar13;
    if (((iVar16 != 0) && (*(code **)(iVar16 + 8) != (code *)0x0)) &&
        (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x30))) {
        (**(code **)(iVar16 + 8))(iVar16, *(uint *)(param_1 + 0x30),
                                  *(undefined4 *)(param_1 + 0x34), 0);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x400;
    }
    return 0;
}

int lzo1b_999_compress_callback(byte *param_1, uint param_2, byte *param_3,
                                undefined4 *param_4, undefined4 *param_5,
                                int param_6, int param_7)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    byte *pbVar4;
    uint uVar5;
    byte *pbVar6;
    uint uVar7;
    bool bVar8;
    bool bVar9;
    undefined4 local_88;
    uint local_84;
    uint local_80;
    uint local_7c;
    undefined4 local_78;
    undefined4 local_74;
    byte *local_6c;
    byte *local_68;
    byte *local_64;
    int local_5c;
    undefined4 local_58;
    byte *local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    int local_40;
    uint local_3c;
    int local_38;
    undefined4 local_34;
    int local_30;
    int local_2c;

    pbVar6 = param_1 + param_2;
    *param_5 = 0xffff;
    param_5[2] = 2;
    local_88 = 1;
    param_5[0xb] = &local_88;
    param_5[7] = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_74 = 0;
    local_78 = 0;
    local_50 = 0;
    local_54 = (byte *)0x0;
    local_58 = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_40 = 0;
    param_5[8] = 0;
    param_5[5] = 0;
    param_5[6] = 0;
    param_5[1] = 0x800;
    param_5[3] = 0x800;
    param_5[4] = 0x800;
    param_5[0x13] = 0x107ff;
    param_5[0x15] = 0xffff;
    param_5[0x14] = (int)param_5 + 0x1085b;
    local_5c = param_6;
    local_6c = param_1;
    local_68 = param_1;
    local_64 = pbVar6;
    memset(param_5 + 0x29415, 0, 0x10000);
    param_5[0x10] = 0;
    param_5[0xe] = 0;
    param_5[0xd] = 0;
    param_5[0xf] = 0;
    param_5[0x11] = 0;
    param_5[0x16] = 0;
    param_5[9] = param_2;
    if (param_2 == 0) {
        param_5[0x12] = 0x800;
    } else {
        if (0x800 < param_2) {
            param_5[9] = 0x800;
            memcpy(param_5 + 0x17, param_1, 0x800);
            param_5[0x10] = 0x800;
            param_5[0x12] = 0x800;
            local_6c = param_1 + 0x800;
            goto LAB_0001c2d8;
        }
        memcpy(param_5 + 0x17, param_1, param_2);
        param_5[0x10] = param_2;
        param_5[0x12] = 0x800;
        local_6c = pbVar6;
        if (2 < param_2)
            goto LAB_0001c2d8;
    }
    *(undefined1 *)((int)param_5 + param_2 + 0x5e) = 0;
    *(undefined1 *)((int)param_5 + param_2 + 0x5d) = 0;
    *(undefined1 *)((int)param_5 + param_2 + 0x5c) = 0;
LAB_0001c2d8:
    param_5[5] = 0;
    if (param_7 != 0) {
        param_5[3] = param_7;
    }
    iVar3 = FUN_0001bb94(&local_88, param_5, 0);
    if (iVar3 == 0) {
        uVar5 = 0;
        pbVar6 = param_3;
        uVar1 = local_80;
        uVar2 = local_7c;
        while (local_84 != 0) {
            if (uVar5 == 0) {
                param_1 = local_6c + -local_84;
            }
            local_80 = uVar1;
            local_7c = uVar2;
            if ((uVar1 < 3) || (0x2000 < uVar2 && uVar1 < 4)) {
                uVar5 = uVar5 + 1;
                FUN_0001bb94(&local_88, param_5, 1, 0);
            LAB_0001c3c0:
                local_54 = (byte *)((int)pbVar6 - (int)param_3);
                uVar1 = local_80;
                uVar2 = local_7c;
            } else {
                pbVar4 = pbVar6;
                uVar7 = uVar5;
                if (uVar5 != 0) {
                    if (uVar5 == 1) {
                        if (local_3c == 3) {
                            uVar7 = 1;
                        LAB_0001c618:
                            pbVar4 = pbVar6 + 1;
                            pbVar6[-2] = pbVar6[-2] & 0x1f;
                            *pbVar6 = *param_1;
                            local_38 = local_38 + 1;
                            param_1 = param_1 + 1;
                            local_3c = uVar1;
                        } else {
                            if (uVar1 < local_84)
                                goto LAB_0001c52c;
                            uVar7 = 1;
                        LAB_0001c58c:
                            pbVar4 =
                                (byte *)_lzo1b_store_run(pbVar6, param_1, 1);
                            local_3c = uVar1;
                        }
                    } else {
                        uVar7 = 1;
                        if (uVar1 < local_84)
                            goto LAB_0001c52c;
                    LAB_0001c424:
                        pbVar4 =
                            (byte *)_lzo1b_store_run(pbVar6, param_1, uVar5);
                        local_3c = uVar1;
                        if (0x117 < uVar5)
                            goto LAB_0001c47c;
                    }
                LAB_0001c480:
                    bVar9 = 7 < uVar1;
                    bVar8 = uVar1 == 8;
                    if (uVar1 < 9) {
                        bVar9 = 0x1fff < uVar2;
                        bVar8 = uVar2 == 0x2000;
                    }
                    if (!bVar9 || bVar8) {
                        *pbVar4 =
                            (byte)(uVar2 - 1) & 0x1f | ((char)uVar1 + -1) * ' ';
                        pbVar4[1] = (byte)(uVar2 - 1 >> 5);
                        local_30 = local_30 + 1;
                    } else {
                        pbVar6 = pbVar4 + 1;
                        if (uVar1 < 0x23) {
                            *pbVar4 = (char)uVar1 - 3U | 0x20;
                        } else {
                            *pbVar4 = 0x20;
                            for (uVar5 = uVar1 - 0x22; 0xff < uVar5;
                                 uVar5 = uVar5 - 0xff) {
                                *pbVar6 = 0;
                                pbVar6 = pbVar6 + 1;
                            }
                            *pbVar6 = (byte)uVar5;
                            pbVar6 = pbVar6 + 1;
                        }
                        *pbVar6 = (byte)uVar2;
                        pbVar6[1] = (byte)(uVar2 >> 8);
                        local_2c = local_2c + 1;
                        pbVar4 = pbVar6;
                        local_3c = 0;
                    }
                    pbVar6 = pbVar4 + 2;
                    uVar5 = 0;
                    FUN_0001bb94(&local_88, param_5, uVar1, uVar7);
                    goto LAB_0001c3c0;
                }
                if ((local_3c != 3) || (local_84 <= uVar1)) {
                    uVar7 = 1;
                LAB_0001c47c:
                    local_3c = 0;
                    goto LAB_0001c480;
                }
            LAB_0001c52c:
                FUN_0001bb94(&local_88, param_5, 1, 0);
                bVar9 = 7 < uVar1;
                bVar8 = uVar1 == 8;
                if (uVar1 < 9) {
                    bVar9 = 0x1fff < uVar2;
                    bVar8 = uVar2 == 0x2000;
                }
                if ((!bVar9 || bVar8) && (0x2000 < local_7c)) {
                    uVar7 = uVar7 + 1;
                }
                if (local_80 < uVar7 + uVar1) {
                    if (uVar5 != 0) {
                        if (uVar5 == 1) {
                            uVar7 = 2;
                            if (local_3c == 3)
                                goto LAB_0001c618;
                            goto LAB_0001c58c;
                        }
                        uVar7 = 2;
                        goto LAB_0001c424;
                    }
                    uVar7 = 2;
                    goto LAB_0001c47c;
                }
                uVar5 = uVar5 + 1;
                local_40 = local_40 + 1;
                uVar1 = local_80;
                uVar2 = local_7c;
            }
        }
        if (uVar5 != 0) {
            pbVar6 = (byte *)_lzo1b_store_run(pbVar6, param_1, uVar5);
        }
        *pbVar6 = 0x21;
        pbVar6[1] = 0;
        pbVar6[2] = 0;
        local_54 = pbVar6 + (3 - (int)param_3);
        *param_4 = local_54;
        if ((local_5c != 0) && (*(code **)(local_5c + 8) != (code *)0x0)) {
            (**(code **)(local_5c + 8))(local_5c, local_58);
        }
    }
    return iVar3;
}

void lzo1b_999_compress(void)

{
    lzo1b_999_compress_callback();
    return;
}

int _lzo1b_do_compress(undefined4 param_1, uint param_2, undefined1 *param_3,
                       uint *param_4, undefined4 param_5, code *param_6)

{
    int iVar1;
    undefined1 *puVar2;

    if (param_2 == 0) {
        *param_4 = 0;
        puVar2 = param_3;
    } else if (param_2 < 0xb) {
        puVar2 = (undefined1 *)_lzo1b_store_run(param_3, param_1, param_2);
        *param_4 = (int)puVar2 - (int)param_3;
        if ((uint)((int)puVar2 - (int)param_3) <= param_2) {
            return -1;
        }
    } else {
        iVar1 = (*param_6)();
        if (iVar1 != 0) {
            return iVar1;
        }
        puVar2 = param_3 + *param_4;
    }
    *puVar2 = 0x21;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *param_4 = *param_4 + 3;
    return 0;
}

undefined4 lzo1b_decompress(byte *param_1, int param_2, undefined4 *param_3,
                            int *param_4)

{
    byte *pbVar1;
    byte *pbVar2;
    undefined1 *puVar3;
    int iVar4;
    uint uVar5;
    byte *pbVar6;
    uint uVar7;
    undefined1 *puVar8;
    byte *pbVar9;
    int iVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    undefined4 *puVar13;
    undefined4 *puVar14;
    uint uVar15;
    undefined4 *puVar16;
    undefined1 *puVar17;
    undefined1 *puVar18;
    byte *pbVar19;

    pbVar1 = param_1 + param_2;
    puVar14 = param_3;
    do {
        while (true) {
            pbVar2 = param_1 + 1;
            uVar15 = (uint)*param_1;
            if (uVar15 < 0x20)
                break;
        LAB_0001c7fc:
            uVar7 = uVar15 & 0x1f;
            uVar5 = (uint)*pbVar2;
            if (uVar15 < 0x40) {
                if (uVar7 == 0) {
                    iVar4 = 0;
                    if (uVar5 == 0) {
                        do {
                            iVar10 = iVar4;
                            pbVar2 = pbVar2 + 1;
                            uVar5 = (uint)*pbVar2;
                            iVar4 = iVar10 + 0xff;
                        } while (uVar5 == 0);
                        iVar10 = iVar10 + 0x11e;
                        pbVar6 = pbVar2;
                    } else {
                        iVar10 = 0x1f;
                        pbVar6 = pbVar2;
                    }
                    uVar7 = uVar5 + iVar10;
                    pbVar2 = pbVar6 + 1;
                    uVar5 = (uint)pbVar6[1];
                }
                param_1 = pbVar2 + 2;
                iVar4 = -(uVar5 + (uint)pbVar2[1] * 0x100);
                puVar13 = (undefined4 *)((int)puVar14 + iVar4);
                if (puVar14 == puVar13) {
                    *param_4 = (int)puVar14 - (int)param_3;
                    if (pbVar1 == param_1) {
                        return 0;
                    }
                    if (param_1 < pbVar1) {
                        return 0xfffffff8;
                    }
                    return 0xfffffffc;
                }
                if ((uVar7 < 5) || (iVar4 + 3 < 0 == SCARRY4(iVar4, 3))) {
                    *(undefined1 *)puVar14 = *(undefined1 *)puVar13;
                    *(undefined1 *)((int)puVar14 + 1) =
                        *(undefined1 *)((int)puVar13 + 1);
                    puVar3 = (undefined1 *)((int)puVar14 + 2);
                    *puVar3 = *(undefined1 *)((int)puVar13 + 2);
                    puVar17 = (undefined1 *)((int)puVar13 + 3);
                    do {
                        puVar18 = puVar17 + 1;
                        puVar3 = puVar3 + 1;
                        *puVar3 = *puVar17;
                        puVar17 = puVar18;
                    } while (puVar18 !=
                             (undefined1 *)((int)puVar13 + 3) + uVar7);
                    puVar14 = (undefined4 *)((int)puVar14 + uVar7 + 3);
                } else {
                    puVar11 = puVar13 + 1;
                    uVar15 = uVar7 - 5 >> 2;
                    *puVar14 = *puVar13;
                    puVar13 = puVar11;
                    puVar12 = puVar14 + 1;
                    do {
                        puVar16 = puVar12 + 1;
                        *puVar12 = *puVar13;
                        puVar13 = puVar13 + 1;
                        puVar12 = puVar16;
                    } while (puVar16 != puVar14 + uVar15 + 2);
                    iVar4 = uVar7 + uVar15 * -4 + -5;
                    puVar14 = puVar14 + 1 + uVar15 + 1;
                    if (iVar4 != 0) {
                        puVar17 = (undefined1 *)((int)puVar14 + -1);
                        puVar13 = puVar11 + uVar15 + 1;
                        do {
                            puVar12 = (undefined4 *)((int)puVar13 + 1);
                            puVar17 = puVar17 + 1;
                            *puVar17 = *(undefined1 *)puVar13;
                            puVar13 = puVar12;
                        } while (puVar12 !=
                                 (undefined4 *)((int)(puVar11 + uVar15 + 1) +
                                                iVar4));
                        puVar14 = (undefined4 *)((int)puVar14 + iVar4);
                    }
                }
            } else {
                uVar5 = ~(uVar7 | uVar5 << 5);
                puVar18 = (undefined1 *)((int)puVar14 + uVar5 + 2);
                param_1 = pbVar2 + 1;
                *(undefined1 *)puVar14 = *(undefined1 *)((int)puVar14 + uVar5);
                puVar3 = (undefined1 *)((int)puVar14 + 1);
                *puVar3 = *(undefined1 *)((int)puVar14 + uVar5 + 1);
                puVar17 = puVar18;
                do {
                    puVar8 = puVar17 + 1;
                    puVar3 = puVar3 + 1;
                    *puVar3 = *puVar17;
                    puVar17 = puVar8;
                } while (puVar8 != puVar18 + ((uVar15 >> 5) - 1));
                puVar14 = (undefined4 *)((int)puVar14 + (uVar15 >> 5) + 1);
            }
        }
        if (uVar15 != 0) {
            if (3 < uVar15)
                goto LAB_0001c768;
            pbVar6 = (byte *)((int)puVar14 + -1);
            pbVar9 = param_1 + uVar15;
            do {
                param_1 = param_1 + 1;
                pbVar6 = pbVar6 + 1;
                *pbVar6 = *param_1;
            } while (pbVar9 != param_1);
            puVar14 = (undefined4 *)((int)puVar14 + uVar15);
            pbVar2 = pbVar2 + uVar15;
        LAB_0001c7a4:
            uVar15 = (uint)*pbVar2;
            puVar13 = puVar14;
            if (uVar15 < 0x20) {
                do {
                    pbVar6 = pbVar2;
                    uVar15 = ~(uVar15 | (uint)pbVar6[1] << 5);
                    puVar14 = puVar13 + 1;
                    *(undefined1 *)puVar13 =
                        *(undefined1 *)((int)puVar13 + uVar15);
                    *(undefined1 *)((int)puVar13 + 1) =
                        *(undefined1 *)((int)puVar13 + uVar15 + 1);
                    *(undefined1 *)((int)puVar13 + 2) =
                        *(undefined1 *)((int)puVar13 + uVar15 + 2);
                    *(byte *)((int)puVar13 + 3) = pbVar6[2];
                    uVar15 = (uint)pbVar6[3];
                    pbVar2 = pbVar6 + 3;
                    puVar13 = puVar14;
                } while (uVar15 < 0x20);
                pbVar2 = pbVar6 + 4;
            } else {
                pbVar2 = pbVar2 + 1;
            }
            goto LAB_0001c7fc;
        }
        uVar15 = (uint)param_1[1];
        pbVar2 = param_1 + 2;
        if (uVar15 < 0xf8) {
            uVar15 = uVar15 + 0x20;
        LAB_0001c768:
            iVar4 = (uVar15 - 4 & 0xfffffffc) + 4;
            puVar13 = (undefined4 *)((int)puVar14 + iVar4);
            pbVar6 = pbVar2;
            do {
                puVar12 = puVar14;
                puVar14 = puVar12 + 1;
                *puVar12 = *(undefined4 *)pbVar6;
                pbVar6 = pbVar6 + 4;
            } while (puVar14 != puVar13);
            uVar15 = uVar15 & 3;
            pbVar2 = pbVar2 + iVar4;
            if (uVar15 != 0) {
                pbVar9 = (byte *)((int)puVar12 + 3);
                pbVar19 = pbVar2 + uVar15;
                pbVar6 = pbVar2;
                do {
                    pbVar2 = pbVar6 + 1;
                    pbVar9 = pbVar9 + 1;
                    *pbVar9 = *pbVar6;
                    pbVar6 = pbVar2;
                } while (pbVar2 != pbVar19);
                puVar14 = (undefined4 *)((int)puVar14 + uVar15);
            }
            goto LAB_0001c7a4;
        }
        iVar4 = uVar15 - 0xf8;
        if (iVar4 == 0) {
            iVar10 = 0x118;
            puVar13 = puVar14;
        } else {
            iVar10 = 0x100;
            do {
                iVar4 = iVar4 + -1;
                iVar10 = iVar10 << 1;
                puVar13 = puVar14;
            } while (iVar4 != 0);
        }
        do {
            iVar10 = iVar10 + -8;
            param_1 = pbVar2 + 8;
            puVar14 = puVar13 + 2;
            *puVar13 = *(undefined4 *)pbVar2;
            puVar13[1] = *(undefined4 *)(pbVar2 + 4);
            pbVar2 = param_1;
            puVar13 = puVar14;
        } while (iVar10 != 0);
    } while (true);
}

/* WARNING: Type propagation algorithm not settling */

undefined4 lzo1b_decompress_safe(byte *param_1, int param_2, byte *param_3,
                                 int *param_4)

{
    uint uVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    byte *pbVar7;
    int iVar8;
    byte *pbVar9;
    uint uVar10;
    int iVar11;
    byte *pbVar12;
    bool bVar13;

    pbVar3 = param_1 + param_2;
    iVar8 = *param_4;
    pbVar2 = param_3;
    if (param_1 < pbVar3) {
        do {
            while (true) {
                pbVar9 = (byte *)(uint)*param_1;
                pbVar4 = param_1 + 1;
                if ((byte *)0x1f < pbVar9)
                    break;
                if (pbVar9 != (byte *)0x0) {
                LAB_0001cbe8:
                    if (pbVar3 + -(int)pbVar4 < pbVar9)
                        goto LAB_0001ce20;
                    if (param_3 + (iVar8 - (int)pbVar2) < pbVar9)
                        goto LAB_0001ce70;
                    if (pbVar9 < (byte *)0x4) {
                        pbVar7 = pbVar2 + -1;
                        pbVar6 = pbVar4;
                        do {
                            pbVar5 = pbVar6 + 1;
                            pbVar7 = pbVar7 + 1;
                            *pbVar7 = *pbVar6;
                            pbVar6 = pbVar5;
                        } while (pbVar4 + (int)pbVar9 != pbVar5);
                        pbVar6 = pbVar2 + (int)pbVar9;
                    } else {
                        iVar11 = ((uint)(pbVar9 + -4) & 0xfffffffc) + 4;
                        pbVar7 = pbVar4;
                        pbVar6 = pbVar2;
                        do {
                            pbVar12 = pbVar6;
                            pbVar6 = pbVar12 + 4;
                            *(undefined4 *)pbVar12 = *(undefined4 *)pbVar7;
                            pbVar7 = pbVar7 + 4;
                        } while (pbVar2 + iVar11 != pbVar6);
                        uVar10 = (uint)pbVar9 & 3;
                        pbVar5 = pbVar4 + iVar11;
                        if (uVar10 != 0) {
                            pbVar12 = pbVar12 + 3;
                            pbVar4 = pbVar5 + uVar10;
                            pbVar2 = pbVar5;
                            do {
                                pbVar5 = pbVar2 + 1;
                                pbVar12 = pbVar12 + 1;
                                *pbVar12 = *pbVar2;
                                pbVar2 = pbVar5;
                            } while (pbVar4 != pbVar5);
                            pbVar6 = pbVar6 + uVar10;
                        }
                    }
                    if (pbVar5 < pbVar3) {
                        pbVar9 = (byte *)(uint)*pbVar5;
                        pbVar4 = pbVar5 + 1;
                        pbVar2 = pbVar6;
                        if (pbVar9 < (byte *)0x20) {
                            if ((uint)((int)pbVar3 - (int)pbVar4) < 2)
                                goto LAB_0001ce20;
                            if (param_3 + (iVar8 - (int)pbVar6) < (byte *)0x4)
                                goto LAB_0001ce70;
                            pbVar4 = pbVar5 + 4;
                            while (true) {
                                uVar10 =
                                    ~((uint)pbVar9 | (uint)pbVar4[-3] << 5);
                                pbVar9 = pbVar2 + uVar10;
                                if (pbVar9 < param_3 || pbVar2 <= pbVar9)
                                    goto LAB_0001cd1c;
                                pbVar6 = pbVar2 + 4;
                                *pbVar2 = pbVar2[uVar10];
                                pbVar2[1] = pbVar9[1];
                                pbVar2[2] = pbVar9[2];
                                pbVar2[3] = pbVar4[-2];
                                if (pbVar3 <= pbVar4 + -1)
                                    goto LAB_0001ce80;
                                pbVar9 = (byte *)(uint)pbVar4[-1];
                                pbVar2 = pbVar6;
                                if ((byte *)0x1f < pbVar9)
                                    break;
                                if ((uint)((int)pbVar3 - (int)pbVar4) < 2)
                                    goto LAB_0001ce20;
                                pbVar4 = pbVar4 + 3;
                                if (param_3 + (iVar8 - (int)pbVar6) <
                                    (byte *)0x4)
                                    goto LAB_0001ce70;
                            }
                        }
                        break;
                    }
                LAB_0001ce80:
                    iVar8 = (int)pbVar6 - (int)param_3;
                    goto LAB_0001ce84;
                }
                if (pbVar4 == pbVar3)
                    goto LAB_0001ce20;
                uVar10 = (uint)param_1[1];
                pbVar4 = param_1 + 2;
                if (uVar10 < 0xf8) {
                    pbVar9 = (byte *)(uVar10 + 0x20);
                    goto LAB_0001cbe8;
                }
                iVar11 = uVar10 - 0xf8;
                if (iVar11 == 0) {
                    pbVar6 = (byte *)0x118;
                } else {
                    pbVar6 = (byte *)0x100;
                    do {
                        iVar11 = iVar11 + -1;
                        pbVar6 = (byte *)((int)pbVar6 << 1);
                    } while (iVar11 != 0);
                }
                if (pbVar3 + -(int)pbVar4 < pbVar6)
                    goto LAB_0001ce20;
                if (param_3 + (iVar8 - (int)pbVar2) < pbVar6)
                    goto LAB_0001ce70;
                do {
                    pbVar6 = pbVar6 + -8;
                    param_1 = pbVar4 + 8;
                    pbVar9 = pbVar2 + 8;
                    *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
                    *(undefined4 *)(pbVar2 + 4) = *(undefined4 *)(pbVar4 + 4);
                    pbVar4 = param_1;
                    pbVar2 = pbVar9;
                } while (pbVar6 != (byte *)0x0);
            joined_r0x0001cd8c:
                pbVar2 = pbVar9;
                if (pbVar3 <= param_1)
                    goto LAB_0001cae4;
            }
            if (pbVar9 < (byte *)0x40) {
                uVar10 = (uint)pbVar9 & 0x1f;
                if (uVar10 == 0) {
                    pbVar9 = pbVar4;
                    iVar11 = 0;
                    while (true) {
                        if (pbVar9 == pbVar3)
                            goto LAB_0001ce20;
                        pbVar4 = pbVar9 + 1;
                        if (*pbVar9 != 0)
                            break;
                        bVar13 = iVar11 == -0x1ff;
                        pbVar9 = pbVar4;
                        iVar11 = iVar11 + 0xff;
                        if (bVar13)
                            goto LAB_0001ce70;
                    }
                    uVar10 = (uint)*pbVar9 + iVar11 + 0x1f;
                }
                if ((uint)((int)pbVar3 - (int)pbVar4) < 2) {
                LAB_0001ce20:
                    *param_4 = (int)pbVar2 - (int)param_3;
                    return 0xfffffffc;
                }
                param_1 = pbVar4 + 2;
                iVar11 = -((uint)*pbVar4 + (uint)pbVar4[1] * 0x100);
                pbVar4 = pbVar2 + iVar11;
                if (pbVar2 == pbVar4) {
                    *param_4 = (int)pbVar2 - (int)param_3;
                    if (pbVar3 == param_1) {
                        return 0;
                    }
                    if (pbVar3 <= param_1) {
                        return 0xfffffffc;
                    }
                    return 0xfffffff8;
                }
                if (pbVar4 < param_3 || pbVar2 <= pbVar4) {
                LAB_0001cd1c:
                    *param_4 = (int)pbVar2 - (int)param_3;
                    return 0xfffffffa;
                }
                if (param_3 + (iVar8 - (int)pbVar2) < (byte *)(uVar10 + 3)) {
                LAB_0001ce70:
                    *param_4 = (int)pbVar2 - (int)param_3;
                    return 0xfffffffb;
                }
                if ((uVar10 < 5) || (iVar11 + 3 < 0 == SCARRY4(iVar11, 3))) {
                    *pbVar2 = *pbVar4;
                    pbVar2[1] = pbVar4[1];
                    pbVar6 = pbVar2 + 2;
                    *pbVar6 = pbVar4[2];
                    pbVar9 = pbVar4 + 3;
                    do {
                        pbVar7 = pbVar9 + 1;
                        pbVar6 = pbVar6 + 1;
                        *pbVar6 = *pbVar9;
                        pbVar9 = pbVar7;
                    } while (pbVar4 + 3 + uVar10 != pbVar7);
                    pbVar9 = pbVar2 + uVar10 + 3;
                } else {
                    pbVar6 = pbVar4 + 4;
                    uVar1 = uVar10 - 5 >> 2;
                    *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
                    pbVar4 = pbVar2 + 4;
                    pbVar9 = pbVar6;
                    do {
                        pbVar7 = pbVar4 + 4;
                        *(undefined4 *)pbVar4 = *(undefined4 *)pbVar9;
                        pbVar4 = pbVar7;
                        pbVar9 = pbVar9 + 4;
                    } while (pbVar7 != pbVar2 + (uVar1 + 2) * 4);
                    iVar11 = uVar10 + uVar1 * -4 + -5;
                    pbVar9 = pbVar2 + 4 + (uVar1 + 1) * 4;
                    if (iVar11 != 0) {
                        pbVar4 = pbVar9 + -1;
                        pbVar2 = pbVar6 + (uVar1 + 1) * 4;
                        do {
                            pbVar7 = pbVar2 + 1;
                            pbVar4 = pbVar4 + 1;
                            *pbVar4 = *pbVar2;
                            pbVar2 = pbVar7;
                        } while (pbVar7 != pbVar6 + (uVar1 + 1) * 4 + iVar11);
                        pbVar9 = pbVar9 + iVar11;
                        goto LAB_0001cbd8;
                    }
                }
                goto joined_r0x0001cd8c;
            }
            if (pbVar4 == pbVar3)
                goto LAB_0001ce20;
            param_1 = pbVar4 + 1;
            pbVar4 = pbVar2 + ~((uint)pbVar9 & 0x1f | (uint)*pbVar4 << 5);
            if (pbVar4 < param_3 || pbVar2 <= pbVar4)
                goto LAB_0001cd1c;
            uVar10 = (uint)pbVar9 >> 5;
            if (param_3 + (iVar8 - (int)pbVar2) < (byte *)(uVar10 + 1))
                goto LAB_0001ce70;
            *pbVar2 = *pbVar4;
            pbVar6 = pbVar2 + 1;
            *pbVar6 = pbVar4[1];
            pbVar9 = pbVar4 + 2;
            do {
                pbVar7 = pbVar9 + 1;
                pbVar6 = pbVar6 + 1;
                *pbVar6 = *pbVar9;
                pbVar9 = pbVar7;
            } while (pbVar4 + 2 + (uVar10 - 1) != pbVar7);
            pbVar9 = pbVar2 + uVar10 + 1;
        LAB_0001cbd8:
            pbVar2 = pbVar9;
        } while (param_1 < pbVar3);
    LAB_0001cae4:
        iVar8 = (int)pbVar9 - (int)param_3;
    } else {
        iVar8 = 0;
    }
LAB_0001ce84:
    *param_4 = iVar8;
    return 0xfffffff9;
}

char *_lzo1b_store_run(char *param_1, char *param_2, uint param_3)

{
    char *pcVar1;
    uint uVar2;
    char *pcVar3;
    char *pcVar4;
    uint uVar5;
    int iVar6;

    if (0x1ff < param_3) {
        if (0x7fff < param_3) {
            uVar2 = param_3 - 0x8000;
            uVar5 = uVar2 >> 0xf;
            pcVar1 = param_1 + 2;
            pcVar3 = param_2;
            do {
                pcVar1[-2] = '\0';
                pcVar1[-1] = -1;
                pcVar4 = pcVar1 + 0x8002;
                memcpy(pcVar1, pcVar3, 0x8000);
                pcVar1 = pcVar4;
                pcVar3 = pcVar3 + 0x8000;
            } while (pcVar4 != param_1 + uVar5 * 0x8002 + 0x8004);
            param_3 = param_3 & 0x7fff;
            param_1 = param_1 + (uVar5 + 1) * 0x8002;
            param_2 = param_2 + (uVar2 & 0xffff8000) + 0x8000;
        }
        iVar6 = 6;
        uVar5 = 0x4000;
        do {
            while (uVar5 <= param_3) {
                pcVar1 = param_1 + 2;
                *param_1 = '\0';
                param_1[1] = (char)iVar6 + -8;
                param_1 = pcVar1 + uVar5;
                param_3 = param_3 - uVar5;
                memcpy(pcVar1, param_2, uVar5);
                iVar6 = iVar6 + -1;
                param_2 = param_2 + uVar5;
                uVar5 = uVar5 >> 1;
                if (iVar6 == 0)
                    goto joined_r0x0001d008;
            }
            iVar6 = iVar6 + -1;
            uVar5 = uVar5 >> 1;
        } while (iVar6 != 0);
    }
joined_r0x0001d008:
    for (; 0x117 < param_3; param_3 = param_3 - 0x118) {
        *param_1 = '\0';
        param_1[1] = -8;
        memcpy(param_1 + 2, param_2, 0x118);
        param_2 = param_2 + 0x118;
        param_1 = param_1 + 0x11a;
    }
    if (param_3 < 0x20) {
        if (param_3 != 0) {
            *param_1 = (char)param_3;
            pcVar1 = param_1;
            pcVar3 = param_2;
            do {
                pcVar4 = pcVar3 + 1;
                pcVar1 = pcVar1 + 1;
                *pcVar1 = *pcVar3;
                pcVar3 = pcVar4;
            } while (pcVar4 != param_2 + param_3);
            return param_1 + param_3 + 1;
        }
    } else {
        *param_1 = '\0';
        pcVar3 = param_1 + 1;
        *pcVar3 = (char)param_3 + -0x20;
        pcVar1 = param_2;
        do {
            pcVar4 = pcVar1 + 1;
            pcVar3 = pcVar3 + 1;
            *pcVar3 = *pcVar1;
            pcVar1 = pcVar4;
        } while (pcVar4 != param_2 + param_3);
        param_1 = param_1 + param_3 + 2;
    }
    return param_1;
}

void lzo1c_1_compress(void)

{
    _lzo1c_do_compress();
    return;
}

void lzo1c_2_compress(void)

{
    _lzo1c_do_compress();
    return;
}

void lzo1c_3_compress(void)

{
    _lzo1c_do_compress();
    return;
}

undefined4 FUN_0001df18(byte *param_1, int param_2, byte *param_3, int *param_4,
                        int param_5)

{
    undefined4 *puVar1;
    int iVar2;
    byte *pbVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    uint uVar7;
    byte *pbVar8;
    uint uVar9;
    undefined4 *puVar10;
    undefined4 *puVar11;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    byte *pbVar15;
    uint uVar16;
    byte *pbVar17;
    bool bVar18;
    uint local_64;
    byte *local_54;
    byte *local_34;

    pbVar4 = param_1 + param_2;
    local_34 = param_3 + 1;
    uVar9 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    pbVar15 = param_1 + param_2 + -9;
    *(byte **)(param_5 + (uVar9 * 0x9f5f >> 4 & 0x3ffe) * 4) = param_1;
    local_64 = (uint)param_1[3] ^ (uVar9 ^ (uint)*param_1 << 10) << 5;
    uVar9 = 1;
    pbVar3 = param_3;
    pbVar12 = param_1;
    pbVar8 = param_1 + 1;
    local_54 = pbVar15;
LAB_0001df9c:
    do {
        pbVar13 = (byte *)0x0;
        iVar2 = 2;
        pbVar5 = pbVar8 + 9;
        puVar10 = (undefined4 *)(param_5 + (local_64 * 0x27d7c000 >> 0x13) * 8);
        puVar1 = puVar10;
        uVar7 = 0;
        do {
            puVar11 = puVar1;
            pbVar6 = (byte *)*puVar11;
            if ((((param_1 <= pbVar6) &&
                  (uVar16 = (int)pbVar8 - (int)pbVar6, uVar16 - 1 < 0x3fff)) &&
                 (pbVar6[(int)pbVar13] == pbVar8[(int)pbVar13])) &&
                (((*pbVar6 == *pbVar8 && (pbVar6[1] == pbVar8[1])) &&
                  (pbVar6[2] == pbVar8[2])))) {
                pbVar14 = pbVar8 + 4;
                if (((pbVar6[3] == pbVar8[3]) &&
                     (pbVar14 = pbVar8 + 5, pbVar6[4] == pbVar8[4])) &&
                    ((pbVar14 = pbVar8 + 6,
                      pbVar6[5] == pbVar8[5] &&
                          (((pbVar14 = pbVar8 + 7,
                             pbVar6[6] == pbVar8[6] &&
                                 (pbVar14 = pbVar8 + 8,
                                  pbVar6[7] == pbVar8[7])) &&
                            (pbVar14 = pbVar5, pbVar6[8] == pbVar8[8])))))) {
                    if (pbVar8 == pbVar12) {
                        uVar7 = uVar16;
                    }
                    puVar11[iVar2 + (uVar9 - 2)] = pbVar8;
                    pbVar6 = pbVar12;
                    if (pbVar8 == pbVar12)
                        goto LAB_0001e1e4;
                    pbVar13 = (byte *)0x9;
                    goto LAB_0001e0c4;
                }
                if (pbVar13 < pbVar14 + (-1 - (int)pbVar8)) {
                    pbVar13 = pbVar14 + (-1 - (int)pbVar8);
                    uVar7 = uVar16;
                }
            }
            uVar16 = uVar7;
            iVar2 = 1;
            puVar1 = puVar11 + 1;
            uVar7 = uVar16;
        } while (puVar10 + 2 != puVar11 + 1);
        puVar11[uVar9 - 1] = pbVar8;
        if (pbVar13 < (byte *)0x4) {
            if (0x2000 < uVar16 || pbVar13 != (byte *)0x3) {
                if (pbVar15 <= pbVar8 + 1)
                    goto LAB_0001e078;
                local_64 = (uint)pbVar8[3] ^ (local_64 ^ (uint)*pbVar8 << 10)
                                                 << 5;
                uVar9 = uVar9 ^ 1;
                pbVar8 = pbVar8 + 1;
                goto LAB_0001df9c;
            }
            pbVar13 = (byte *)0x3;
            pbVar5 = pbVar8 + 3;
            if (pbVar8 != pbVar12) {
            LAB_0001e0c4:
                pbVar14 = pbVar13;
                uVar7 = uVar16;
                if (local_54 == pbVar8) {
                    pbVar3[-2] = pbVar3[-2] & 0x1f;
                    local_54 = local_54 + 4;
                    *pbVar3 = *pbVar12;
                    pbVar3 = pbVar3 + 1;
                    pbVar12 = pbVar12 + 1;
                } else {
                    uVar16 = (int)pbVar8 - (int)pbVar12;
                    if (uVar16 < 0x20) {
                        bVar18 = uVar16 == 3;
                        if (uVar16 < 4) {
                            bVar18 = pbVar3 == local_34;
                        }
                        if (bVar18) {
                            local_34[-2] =
                                local_34[-2] | (byte)((uVar16 & 0xff) << 6);
                        } else {
                            *pbVar3 = (byte)uVar16;
                            pbVar3 = pbVar3 + 1;
                        }
                        pbVar6 = pbVar3 + -1;
                        pbVar13 = pbVar12;
                        do {
                            pbVar17 = pbVar13 + 1;
                            pbVar6 = pbVar6 + 1;
                            *pbVar6 = *pbVar13;
                            pbVar13 = pbVar17;
                        } while (pbVar17 != pbVar12 + uVar16);
                        local_54 = pbVar8 + 4;
                        pbVar3 = pbVar3 + uVar16;
                        pbVar12 = pbVar17;
                    } else if (uVar16 < 0x118) {
                        *pbVar3 = 0;
                        pbVar6 = pbVar3 + 1;
                        *pbVar6 = (byte)uVar16 - 0x20;
                        pbVar13 = pbVar12;
                        do {
                            pbVar17 = pbVar13 + 1;
                            pbVar6 = pbVar6 + 1;
                            *pbVar6 = *pbVar13;
                            pbVar13 = pbVar17;
                        } while (pbVar17 != pbVar12 + uVar16);
                        local_54 = pbVar8 + 4;
                        pbVar3 = pbVar3 + uVar16 + 2;
                        pbVar12 = pbVar17;
                    } else {
                        pbVar3 = (byte *)_lzo1c_store_run(pbVar3, pbVar12);
                        pbVar12 = pbVar8;
                    }
                }
                goto LAB_0001e118;
            }
        LAB_0001e2a8:
            *pbVar3 = (byte)(uVar7 - 1) & 0x1f | ((char)pbVar13 + -1) * ' ';
            pbVar3[1] = (byte)(uVar7 - 1 >> 5);
            pbVar3 = pbVar3 + 2;
            pbVar6 = pbVar12;
            pbVar12 = pbVar5;
        LAB_0001e154:
            if (pbVar15 <= pbVar12)
                goto LAB_0001e078;
            uVar7 = (uint)pbVar6[3] ^ (local_64 ^ (uint)*pbVar6 << 10) << 5;
        } else {
            pbVar5 = pbVar8 + (int)pbVar13;
            pbVar14 = pbVar13;
            if (pbVar8 != pbVar12)
                goto LAB_0001e0c4;
        LAB_0001e118:
            pbVar6 = pbVar12;
            if (pbVar14 < (byte *)0x9) {
                pbVar13 = (byte *)((uint)pbVar14 & 0xff);
                if (uVar7 < 0x2001)
                    goto LAB_0001e2a8;
                local_34 = pbVar3 + 3;
                *pbVar3 = (char)pbVar14 - 3U | 0x20;
                pbVar3[2] = (byte)(uVar7 >> 6);
                pbVar3[1] = (byte)uVar7 & 0x3f;
                pbVar3 = local_34;
                pbVar12 = pbVar5;
                goto LAB_0001e154;
            }
        LAB_0001e1e4:
            pbVar8 = pbVar5 + -uVar7;
            pbVar12 = pbVar5;
            if ((pbVar5 < pbVar4) && (*pbVar8 == *pbVar5)) {
                do {
                    pbVar12 = pbVar5 + 1;
                    if (pbVar4 == pbVar12)
                        break;
                    pbVar8 = pbVar8 + 1;
                    pbVar5 = pbVar12;
                } while (*pbVar8 == *pbVar12);
            }
            uVar16 = (int)pbVar12 - (int)pbVar6;
            pbVar8 = pbVar3 + 1;
            if (uVar16 < 0x23) {
                *pbVar3 = (char)uVar16 - 3U | 0x20;
            } else {
                *pbVar3 = 0x20;
                for (uVar16 = uVar16 - 0x22; 0xff < uVar16;
                     uVar16 = uVar16 - 0xff) {
                    *pbVar8 = 0;
                    pbVar8 = pbVar8 + 1;
                }
                *pbVar8 = (byte)uVar16;
                pbVar8 = pbVar8 + 1;
            }
            pbVar3 = pbVar8 + 2;
            *pbVar8 = (byte)uVar7 & 0x3f;
            pbVar8[1] = (byte)(uVar7 >> 6);
            if (pbVar15 <= pbVar12) {
            LAB_0001e078:
                if (pbVar4 != pbVar12) {
                    pbVar3 = (byte *)_lzo1c_store_run(
                        pbVar3, pbVar12, (int)pbVar4 - (int)pbVar12);
                }
                *param_4 = (int)pbVar3 - (int)param_3;
                return 0;
            }
            uVar7 = (uint)pbVar6[3] ^ (local_64 ^ (uint)*pbVar6 << 10) << 5;
            local_34 = pbVar3;
        }
        *(byte **)(param_5 + ((uVar7 * 0x9f5f >> 4 & 0x3ffe) + (uVar9 ^ 1)) *
                                 4) = pbVar6 + 1;
        local_64 = (uint)pbVar12[2] ^ ((uint)pbVar12[1] ^ (uint)*pbVar12 << 5)
                                          << 5;
        pbVar8 = pbVar12;
    } while (true);
}

void lzo1c_4_compress(void)

{
    _lzo1c_do_compress();
    return;
}

undefined4 FUN_0001e4ec(byte *param_1, int param_2, byte *param_3, int *param_4,
                        int param_5)

{
    byte bVar1;
    undefined4 *puVar2;
    int iVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    byte *pbVar7;
    uint uVar8;
    byte *pbVar9;
    uint uVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    byte *pbVar13;
    byte *pbVar14;
    byte *pbVar15;
    byte *pbVar16;
    uint uVar17;
    byte *pbVar18;
    bool bVar19;
    uint local_64;
    byte *local_54;
    byte *local_34;

    pbVar5 = param_1 + param_2;
    local_34 = param_3 + 1;
    uVar10 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    pbVar16 = param_1 + param_2 + -9;
    *(byte **)(param_5 + (uVar10 * 0x9f5f >> 4 & 0x3ffe) * 4) = param_1;
    local_64 = (uint)param_1[3] ^ (uVar10 ^ (uint)*param_1 << 10) << 5;
    uVar10 = 1;
    pbVar4 = param_3;
    pbVar13 = param_1;
    pbVar9 = param_1 + 1;
    local_54 = pbVar16;
LAB_0001e570:
    do {
        pbVar14 = (byte *)0x0;
        iVar3 = 2;
        pbVar6 = pbVar9 + 9;
        puVar11 = (undefined4 *)(param_5 + (local_64 * 0x27d7c000 >> 0x13) * 8);
        puVar2 = puVar11;
        uVar8 = 0;
        do {
            puVar12 = puVar2;
            pbVar7 = (byte *)*puVar12;
            if ((((param_1 <= pbVar7) &&
                  (uVar17 = (int)pbVar9 - (int)pbVar7, uVar17 - 1 < 0x3fff)) &&
                 (pbVar7[(int)pbVar14] == pbVar9[(int)pbVar14])) &&
                (((*pbVar7 == *pbVar9 && (pbVar7[1] == pbVar9[1])) &&
                  (pbVar7[2] == pbVar9[2])))) {
                pbVar15 = pbVar9 + 4;
                if (((pbVar7[3] == pbVar9[3]) &&
                     (pbVar15 = pbVar9 + 5, pbVar7[4] == pbVar9[4])) &&
                    ((pbVar15 = pbVar9 + 6,
                      pbVar7[5] == pbVar9[5] &&
                          (((pbVar15 = pbVar9 + 7,
                             pbVar7[6] == pbVar9[6] &&
                                 (pbVar15 = pbVar9 + 8,
                                  pbVar7[7] == pbVar9[7])) &&
                            (pbVar15 = pbVar6, pbVar7[8] == pbVar9[8])))))) {
                    if (pbVar9 == pbVar13) {
                        uVar8 = uVar17;
                    }
                    puVar12[iVar3 + (uVar10 - 2)] = pbVar9;
                    pbVar7 = pbVar13;
                    if (pbVar9 == pbVar13)
                        goto LAB_0001e7e4;
                    pbVar14 = (byte *)0x9;
                    goto LAB_0001e698;
                }
                if (pbVar14 < pbVar15 + (-1 - (int)pbVar9)) {
                    pbVar14 = pbVar15 + (-1 - (int)pbVar9);
                    uVar8 = uVar17;
                }
            }
            uVar17 = uVar8;
            iVar3 = 1;
            puVar2 = puVar12 + 1;
            uVar8 = uVar17;
        } while (puVar11 + 2 != puVar12 + 1);
        puVar12[uVar10 - 1] = pbVar9;
        if (pbVar14 < (byte *)0x4) {
            if (0x2000 < uVar17 || pbVar14 != (byte *)0x3) {
                if (pbVar16 <= pbVar9 + 1)
                    goto LAB_0001e64c;
                local_64 = (uint)pbVar9[3] ^ (local_64 ^ (uint)*pbVar9 << 10)
                                                 << 5;
                uVar10 = uVar10 ^ 1;
                pbVar9 = pbVar9 + 1;
                goto LAB_0001e570;
            }
            pbVar14 = (byte *)0x3;
            pbVar6 = pbVar9 + 3;
            if (pbVar9 != pbVar13) {
            LAB_0001e698:
                pbVar15 = pbVar14;
                uVar8 = uVar17;
                if (local_54 == pbVar9) {
                    pbVar4[-2] = pbVar4[-2] & 0x1f;
                    local_54 = local_54 + 4;
                    *pbVar4 = *pbVar13;
                    pbVar4 = pbVar4 + 1;
                    pbVar13 = pbVar13 + 1;
                } else {
                    uVar17 = (int)pbVar9 - (int)pbVar13;
                    if (uVar17 < 0x20) {
                        bVar19 = uVar17 == 3;
                        if (uVar17 < 4) {
                            bVar19 = pbVar4 == local_34;
                        }
                        if (bVar19) {
                            local_34[-2] =
                                local_34[-2] | (byte)((uVar17 & 0xff) << 6);
                        } else {
                            *pbVar4 = (byte)uVar17;
                            pbVar4 = pbVar4 + 1;
                        }
                        pbVar7 = pbVar4 + -1;
                        pbVar14 = pbVar13;
                        do {
                            pbVar18 = pbVar14 + 1;
                            pbVar7 = pbVar7 + 1;
                            *pbVar7 = *pbVar14;
                            pbVar14 = pbVar18;
                        } while (pbVar18 != pbVar13 + uVar17);
                        local_54 = pbVar9 + 4;
                        pbVar4 = pbVar4 + uVar17;
                        pbVar13 = pbVar18;
                    } else if (uVar17 < 0x118) {
                        *pbVar4 = 0;
                        pbVar7 = pbVar4 + 1;
                        *pbVar7 = (byte)uVar17 - 0x20;
                        pbVar14 = pbVar13;
                        do {
                            pbVar18 = pbVar14 + 1;
                            pbVar7 = pbVar7 + 1;
                            *pbVar7 = *pbVar14;
                            pbVar14 = pbVar18;
                        } while (pbVar18 != pbVar13 + uVar17);
                        local_54 = pbVar9 + 4;
                        pbVar4 = pbVar4 + uVar17 + 2;
                        pbVar13 = pbVar18;
                    } else {
                        pbVar4 = (byte *)_lzo1c_store_run(pbVar4, pbVar13);
                        pbVar13 = pbVar9;
                    }
                }
                goto LAB_0001e6ec;
            }
        LAB_0001e8dc:
            *pbVar4 = (byte)(uVar8 - 1) & 0x1f | ((char)pbVar14 + -1) * ' ';
            pbVar4[1] = (byte)(uVar8 - 1 >> 5);
            pbVar4 = pbVar4 + 2;
            pbVar7 = pbVar13;
            pbVar13 = pbVar6;
        LAB_0001e728:
            if (pbVar16 <= pbVar13)
                goto LAB_0001e64c;
            uVar8 = (uint)pbVar7[3] ^ (local_64 ^ (uint)*pbVar7 << 10) << 5;
            *(byte **)(param_5 +
                       ((uVar8 * 0x9f5f >> 4 & 0x3ffe) + (uVar10 ^ 1)) * 4) =
                pbVar7 + 1;
            bVar1 = pbVar7[4];
            uVar8 = uVar8 ^ (uint)pbVar7[1] << 10;
        } else {
            pbVar6 = pbVar9 + (int)pbVar14;
            pbVar15 = pbVar14;
            if (pbVar9 != pbVar13)
                goto LAB_0001e698;
        LAB_0001e6ec:
            pbVar7 = pbVar13;
            if (pbVar15 < (byte *)0x9) {
                pbVar14 = (byte *)((uint)pbVar15 & 0xff);
                if (uVar8 < 0x2001)
                    goto LAB_0001e8dc;
                local_34 = pbVar4 + 3;
                *pbVar4 = (char)pbVar15 - 3U | 0x20;
                pbVar4[2] = (byte)(uVar8 >> 6);
                pbVar4[1] = (byte)uVar8 & 0x3f;
                pbVar4 = local_34;
                pbVar13 = pbVar6;
                goto LAB_0001e728;
            }
        LAB_0001e7e4:
            pbVar9 = pbVar6 + -uVar8;
            pbVar13 = pbVar6;
            if ((pbVar6 < pbVar5) && (*pbVar9 == *pbVar6)) {
                do {
                    pbVar13 = pbVar6 + 1;
                    if (pbVar5 == pbVar13)
                        break;
                    pbVar9 = pbVar9 + 1;
                    pbVar6 = pbVar13;
                } while (*pbVar9 == *pbVar13);
            }
            uVar17 = (int)pbVar13 - (int)pbVar7;
            pbVar9 = pbVar4 + 1;
            if (uVar17 < 0x23) {
                *pbVar4 = (char)uVar17 - 3U | 0x20;
            } else {
                *pbVar4 = 0x20;
                for (uVar17 = uVar17 - 0x22; 0xff < uVar17;
                     uVar17 = uVar17 - 0xff) {
                    *pbVar9 = 0;
                    pbVar9 = pbVar9 + 1;
                }
                *pbVar9 = (byte)uVar17;
                pbVar9 = pbVar9 + 1;
            }
            pbVar4 = pbVar9 + 2;
            *pbVar9 = (byte)uVar8 & 0x3f;
            pbVar9[1] = (byte)(uVar8 >> 6);
            if (pbVar16 <= pbVar13) {
            LAB_0001e64c:
                if (pbVar5 != pbVar13) {
                    pbVar4 = (byte *)_lzo1c_store_run(
                        pbVar4, pbVar13, (int)pbVar5 - (int)pbVar13);
                }
                *param_4 = (int)pbVar4 - (int)param_3;
                return 0;
            }
            uVar8 = (uint)pbVar7[3] ^ (local_64 ^ (uint)*pbVar7 << 10) << 5;
            *(byte **)(param_5 +
                       ((uVar8 * 0x9f5f >> 4 & 0x3ffe) + (uVar10 ^ 1)) * 4) =
                pbVar7 + 1;
            bVar1 = pbVar7[4];
            uVar8 = uVar8 ^ (uint)pbVar7[1] << 10;
            local_34 = pbVar4;
        }
        *(byte **)(param_5 +
                   (((uint)bVar1 ^ uVar8 << 5) * 0x9f5f >> 4 & 0x3ffe |
                    uVar10) *
                       4) = pbVar7 + 2;
        local_64 = (uint)pbVar13[2] ^ ((uint)pbVar13[1] ^ (uint)*pbVar13 << 5)
                                          << 5;
        uVar10 = uVar10 + 1 & 1;
        pbVar9 = pbVar13;
    } while (true);
}

void lzo1c_5_compress(void)

{
    _lzo1c_do_compress();
    return;
}

undefined4 FUN_0001eb20(byte *param_1, int param_2, byte *param_3, int *param_4,
                        int param_5)

{
    undefined4 *puVar1;
    int iVar2;
    byte *pbVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    byte *pbVar7;
    byte *pbVar8;
    uint uVar9;
    undefined4 *puVar10;
    undefined4 *puVar11;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    byte *pbVar15;
    uint uVar16;
    uint uVar17;
    bool bVar18;
    byte *local_68;
    uint local_60;
    byte *local_58;
    byte *local_34;

    pbVar6 = param_1 + param_2;
    pbVar14 = param_1 + param_2 + -9;
    uVar9 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    *(byte **)(param_5 + (uVar9 * 0x9f5f >> 4 & 0x3ffe) * 4) = param_1;
    uVar16 = (uint)param_1[3] ^ (uVar9 ^ (uint)*param_1 << 10) << 5;
    uVar9 = 1;
    pbVar5 = param_3;
    pbVar7 = param_1;
    pbVar4 = param_1 + 1;
    local_58 = pbVar14;
    local_34 = param_3 + 1;
LAB_0001eba8:
    do {
        while (true) {
            pbVar12 = pbVar7;
            pbVar7 = pbVar4 + 9;
            puVar10 =
                (undefined4 *)(param_5 + (uVar16 * 0x27d7c000 >> 0x13) * 8);
            iVar2 = 2;
            pbVar13 = (byte *)0x0;
            local_60 = 0;
            puVar1 = puVar10;
            do {
                puVar11 = puVar1;
                pbVar8 = (byte *)*puVar11;
                if ((((param_1 <= pbVar8) &&
                      (uVar17 = (int)pbVar4 - (int)pbVar8,
                       uVar17 - 1 < 0x3fff)) &&
                     (pbVar8[(int)pbVar13] == pbVar4[(int)pbVar13])) &&
                    (((*pbVar8 == *pbVar4 && (pbVar8[1] == pbVar4[1])) &&
                      (pbVar8[2] == pbVar4[2])))) {
                    local_68 = pbVar4 + 4;
                    if (((pbVar8[3] == pbVar4[3]) &&
                         (local_68 = pbVar4 + 5, pbVar8[4] == pbVar4[4])) &&
                        ((local_68 = pbVar4 + 6,
                          pbVar8[5] == pbVar4[5] &&
                              (((local_68 = pbVar4 + 7,
                                 pbVar8[6] == pbVar4[6] &&
                                     (local_68 = pbVar4 + 8,
                                      (uint)pbVar8[7] == (uint)pbVar4[7])) &&
                                (local_68 = pbVar7,
                                 pbVar8[8] == pbVar4[8])))))) {
                        local_60 = (uint)pbVar4[7];
                        if (pbVar12 == pbVar4) {
                            local_60 = uVar17;
                        }
                        puVar11[iVar2 + (uVar9 - 2)] = pbVar4;
                        pbVar13 = pbVar12;
                        if (pbVar12 == pbVar4)
                            goto LAB_0001ed20;
                        pbVar13 = (byte *)0x9;
                        goto LAB_0001ecbc;
                    }
                    if (pbVar13 < local_68 + (-1 - (int)pbVar4)) {
                        pbVar13 = local_68 + (-1 - (int)pbVar4);
                        local_60 = uVar17;
                    }
                }
                iVar2 = 1;
                puVar1 = puVar11 + 1;
            } while (puVar10 + 2 != puVar11 + 1);
            puVar11[uVar9 - 1] = pbVar4;
            uVar17 = local_60;
            if (pbVar13 < (byte *)0x4)
                break;
            pbVar7 = pbVar4 + (int)pbVar13;
            pbVar8 = pbVar13;
            if (pbVar4 != pbVar12)
                goto LAB_0001ecbc;
        LAB_0001ed18:
            pbVar13 = pbVar12;
            if (pbVar8 < (byte *)0x9) {
                pbVar13 = (byte *)((uint)pbVar8 & 0xff);
                if (local_60 < 0x2001)
                    goto LAB_0001ef54;
                pbVar3 = pbVar5 + 3;
                *pbVar5 = (char)pbVar8 - 3U | 0x20;
                pbVar5[2] = (byte)(local_60 >> 6);
                pbVar5[1] = (byte)local_60 & 0x3f;
                pbVar5 = pbVar12;
                pbVar12 = pbVar7;
                local_34 = pbVar3;
                goto LAB_0001eeac;
            }
        LAB_0001ed20:
            pbVar4 = pbVar7 + -local_60;
            pbVar12 = pbVar7;
            if ((pbVar7 < pbVar6) && (*pbVar4 == *pbVar7)) {
                do {
                    pbVar12 = pbVar7 + 1;
                    if (pbVar6 == pbVar12)
                        break;
                    pbVar4 = pbVar4 + 1;
                    pbVar7 = pbVar12;
                } while (*pbVar4 == *pbVar12);
            }
            uVar17 = (int)pbVar12 - (int)pbVar13;
            pbVar7 = pbVar5 + 1;
            if (uVar17 < 0x23) {
                *pbVar5 = (char)uVar17 - 3U | 0x20;
            } else {
                *pbVar5 = 0x20;
                for (uVar17 = uVar17 - 0x22; 0xff < uVar17;
                     uVar17 = uVar17 - 0xff) {
                    *pbVar7 = 0;
                    pbVar7 = pbVar7 + 1;
                }
                *pbVar7 = (byte)uVar17;
                pbVar7 = pbVar7 + 1;
            }
            pbVar3 = pbVar7 + 2;
            *pbVar7 = (byte)local_60 & 0x3f;
            pbVar7[1] = (byte)(local_60 >> 6);
            if (pbVar14 <= pbVar12)
                goto LAB_0001ec6c;
            uVar17 = uVar9 + 1 & 1;
            uVar16 = (uint)pbVar13[3] ^ (uVar16 ^ (uint)*pbVar13 << 10) << 5;
            *(byte **)(param_5 +
                       ((uVar16 * 0x9f5f >> 4 & 0x3ffe) + (uVar9 ^ 1)) * 4) =
                pbVar13 + 1;
            uVar16 = (uint)pbVar13[4] ^ (uVar16 ^ (uint)pbVar13[1] << 10) << 5;
            *(byte **)(param_5 + (uVar16 * 0x9f5f >> 4 & 0x3ffe | uVar9) * 4) =
                pbVar13 + 2;
            uVar9 = (uint)pbVar13[5] ^ (uVar16 ^ (uint)pbVar13[2] << 10) << 5;
            *(byte **)(param_5 + (uVar9 * 0x9f5f >> 4 & 0x3ffe | uVar17) * 4) =
                pbVar13 + 3;
            *(byte **)(param_5 + (((uint)pbVar13[6] ^
                                   (uVar9 ^ (uint)pbVar13[3] << 10) << 5) *
                                              0x9f5f >>
                                          4 &
                                      0x3ffe |
                                  uVar17 ^ 1) *
                                     4) = pbVar13 + 4;
            uVar16 = (uint)pbVar12[2] ^ ((uint)pbVar12[1] ^ (uint)*pbVar12 << 5)
                                            << 5;
            uVar9 = uVar17;
            pbVar5 = pbVar3;
            pbVar7 = pbVar12;
            pbVar4 = pbVar12;
            local_34 = pbVar3;
        }
        bVar18 = local_60 == 0x2000;
        if (local_60 < 0x2001) {
            bVar18 = pbVar13 == (byte *)0x3;
        }
        if (!bVar18) {
            pbVar3 = pbVar5;
            if (pbVar14 <= pbVar4 + 1)
                goto LAB_0001ec6c;
            uVar16 = (uint)pbVar4[3] ^ (uVar16 ^ (uint)*pbVar4 << 10) << 5;
            uVar9 = uVar9 ^ 1;
            pbVar7 = pbVar12;
            pbVar4 = pbVar4 + 1;
            goto LAB_0001eba8;
        }
        pbVar13 = (byte *)0x3;
        pbVar7 = pbVar4 + 3;
        if (pbVar4 != pbVar12) {
        LAB_0001ecbc:
            pbVar8 = pbVar13;
            local_60 = uVar17;
            if (local_58 == pbVar4) {
                pbVar5[-2] = pbVar5[-2] & 0x1f;
                local_58 = local_58 + 4;
                *pbVar5 = *pbVar12;
                pbVar5 = pbVar5 + 1;
                pbVar12 = pbVar12 + 1;
            } else {
                uVar17 = (int)pbVar4 - (int)pbVar12;
                if (uVar17 < 0x20) {
                    bVar18 = uVar17 == 3;
                    if (uVar17 < 4) {
                        bVar18 = pbVar5 == local_34;
                    }
                    if (bVar18) {
                        local_34[-2] =
                            local_34[-2] | (byte)((uVar17 & 0xff) << 6);
                    } else {
                        *pbVar5 = (byte)uVar17;
                        pbVar5 = pbVar5 + 1;
                    }
                    pbVar3 = pbVar5 + -1;
                    pbVar13 = pbVar12;
                    do {
                        pbVar15 = pbVar13 + 1;
                        pbVar3 = pbVar3 + 1;
                        *pbVar3 = *pbVar13;
                        pbVar13 = pbVar15;
                    } while (pbVar15 != pbVar12 + uVar17);
                    local_58 = pbVar4 + 4;
                    pbVar5 = pbVar5 + uVar17;
                    pbVar12 = pbVar15;
                } else if (uVar17 < 0x118) {
                    *pbVar5 = 0;
                    pbVar3 = pbVar5 + 1;
                    *pbVar3 = (byte)uVar17 - 0x20;
                    pbVar13 = pbVar12;
                    do {
                        pbVar15 = pbVar13 + 1;
                        pbVar3 = pbVar3 + 1;
                        *pbVar3 = *pbVar13;
                        pbVar13 = pbVar15;
                    } while (pbVar15 != pbVar12 + uVar17);
                    local_58 = pbVar4 + 4;
                    pbVar5 = pbVar5 + uVar17 + 2;
                    pbVar12 = pbVar15;
                } else {
                    pbVar5 = (byte *)_lzo1c_store_run(pbVar5, pbVar12);
                    pbVar12 = pbVar4;
                }
            }
            goto LAB_0001ed18;
        }
    LAB_0001ef54:
        pbVar3 = pbVar5 + 2;
        *pbVar5 = (byte)(local_60 - 1) & 0x1f | ((char)pbVar13 + -1) * ' ';
        pbVar5[1] = (byte)(local_60 - 1 >> 5);
        pbVar5 = pbVar12;
        pbVar12 = pbVar7;
    LAB_0001eeac:
        if (pbVar14 <= pbVar12) {
        LAB_0001ec6c:
            if (pbVar6 != pbVar12) {
                pbVar3 = (byte *)_lzo1c_store_run(pbVar3, pbVar12,
                                                  (int)pbVar6 - (int)pbVar12);
            }
            *param_4 = (int)pbVar3 - (int)param_3;
            return 0;
        }
        pbVar4 = pbVar5 + -1;
        pbVar13 = pbVar5 + 2;
        pbVar7 = pbVar5 + 1;
        do {
            pbVar5 = pbVar7;
            pbVar4 = pbVar4 + 1;
            pbVar7 = pbVar5 + 1;
            pbVar13 = pbVar13 + 1;
            uVar16 = (uint)*pbVar13 ^ (uVar16 ^ (uint)*pbVar4 << 10) << 5;
            *(byte **)(param_5 + (uVar16 * 0x27d7c000 >> 0x13) * 8) = pbVar5;
        } while (pbVar7 < pbVar12);
        uVar16 = (uint)pbVar5[3] ^ (uVar16 ^ (uint)*pbVar5 << 10) << 5;
        uVar9 = uVar9 ^ 1;
        pbVar5 = pbVar3;
        pbVar4 = pbVar12;
    } while (true);
}

void lzo1c_6_compress(void)

{
    _lzo1c_do_compress();
    return;
}

undefined4 FUN_0001f1c4(byte *param_1, int param_2, byte *param_3, int *param_4,
                        int param_5)

{
    byte bVar1;
    undefined4 *puVar2;
    uint uVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    int iVar7;
    uint uVar8;
    byte *pbVar9;
    uint uVar10;
    undefined4 *puVar11;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    byte *pbVar15;
    byte *pbVar16;
    uint uVar17;
    byte *pbVar18;
    bool bVar19;
    uint local_60;
    byte *local_54;
    byte *local_34;

    pbVar5 = param_1 + param_2;
    pbVar14 = param_1 + param_2 + -9;
    local_34 = param_3 + 1;
    uVar10 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    *(byte **)(param_5 + (uVar10 * 0x9f5f >> 3 & 0x3ffc) * 4) = param_1;
    local_60 = (uint)param_1[3] ^ (uVar10 ^ (uint)*param_1 << 10) << 5;
    pbVar9 = param_1 + 1;
    pbVar4 = param_3;
    pbVar16 = param_1;
    uVar10 = 1;
    local_54 = pbVar14;
LAB_0001f248:
    do {
        pbVar13 = (byte *)0x0;
        pbVar6 = pbVar9 + 9;
        iVar7 = 4;
        puVar2 =
            (undefined4 *)(param_5 + (local_60 * 0x4faf8000 >> 0x14) * 0x10);
        uVar8 = 0;
        do {
            puVar11 = puVar2;
            pbVar18 = (byte *)*puVar11;
            if ((((param_1 <= pbVar18) &&
                  (uVar3 = (int)pbVar9 - (int)pbVar18, uVar3 - 1 < 0x3fff)) &&
                 (pbVar18[(int)pbVar13] == pbVar9[(int)pbVar13])) &&
                (((*pbVar18 == *pbVar9 && (pbVar18[1] == pbVar9[1])) &&
                  (pbVar18[2] == pbVar9[2])))) {
                pbVar12 = pbVar9 + 4;
                if (((pbVar18[3] == pbVar9[3]) &&
                     (pbVar12 = pbVar9 + 5, pbVar18[4] == pbVar9[4])) &&
                    ((pbVar12 = pbVar9 + 6,
                      pbVar18[5] == pbVar9[5] &&
                          (((pbVar12 = pbVar9 + 7,
                             pbVar18[6] == pbVar9[6] &&
                                 (pbVar12 = pbVar9 + 8,
                                  pbVar18[7] == pbVar9[7])) &&
                            (pbVar12 = pbVar6, pbVar18[8] == pbVar9[8])))))) {
                    uVar17 = uVar10 + 1 & 3;
                    if (pbVar16 == pbVar9) {
                        uVar8 = uVar3;
                    }
                    puVar11[iVar7 + (uVar10 - 4)] = pbVar9;
                    if (pbVar16 == pbVar9)
                        goto LAB_0001f4b8;
                    pbVar13 = (byte *)0x9;
                    goto LAB_0001f368;
                }
                if (pbVar13 < pbVar12 + (-1 - (int)pbVar9)) {
                    pbVar13 = pbVar12 + (-1 - (int)pbVar9);
                    uVar8 = uVar3;
                }
            }
            uVar3 = uVar8;
            iVar7 = iVar7 + -1;
            puVar2 = puVar11 + 1;
            uVar8 = uVar3;
        } while (iVar7 != 0);
        puVar11[uVar10 - 3] = pbVar9;
        uVar17 = uVar10 + 1 & 3;
        if (pbVar13 < (byte *)0x4) {
            if (0x2000 < uVar3 || pbVar13 != (byte *)0x3) {
                pbVar6 = pbVar16;
                if (pbVar14 <= pbVar9 + 1)
                    goto LAB_0001f31c;
                local_60 = (uint)pbVar9[3] ^ (local_60 ^ (uint)*pbVar9 << 10)
                                                 << 5;
                pbVar9 = pbVar9 + 1;
                uVar10 = uVar17;
                goto LAB_0001f248;
            }
            pbVar13 = (byte *)0x3;
            pbVar6 = pbVar9 + 3;
            if (pbVar9 != pbVar16) {
            LAB_0001f368:
                pbVar18 = pbVar13;
                uVar8 = uVar3;
                if (local_54 == pbVar9) {
                    pbVar4[-2] = pbVar4[-2] & 0x1f;
                    local_54 = local_54 + 4;
                    *pbVar4 = *pbVar16;
                    pbVar4 = pbVar4 + 1;
                    pbVar16 = pbVar16 + 1;
                } else {
                    uVar10 = (int)pbVar9 - (int)pbVar16;
                    if (uVar10 < 0x20) {
                        bVar19 = uVar10 == 3;
                        if (uVar10 < 4) {
                            bVar19 = pbVar4 == local_34;
                        }
                        if (bVar19) {
                            local_34[-2] =
                                local_34[-2] | (byte)((uVar10 & 0xff) << 6);
                        } else {
                            *pbVar4 = (byte)uVar10;
                            pbVar4 = pbVar4 + 1;
                        }
                        pbVar12 = pbVar4 + -1;
                        pbVar13 = pbVar16;
                        do {
                            pbVar15 = pbVar13 + 1;
                            pbVar12 = pbVar12 + 1;
                            *pbVar12 = *pbVar13;
                            pbVar13 = pbVar15;
                        } while (pbVar15 != pbVar16 + uVar10);
                        local_54 = pbVar9 + 4;
                        pbVar4 = pbVar4 + uVar10;
                        pbVar16 = pbVar15;
                    } else if (uVar10 < 0x118) {
                        *pbVar4 = 0;
                        pbVar12 = pbVar4 + 1;
                        *pbVar12 = (byte)uVar10 - 0x20;
                        pbVar13 = pbVar16;
                        do {
                            pbVar15 = pbVar13 + 1;
                            pbVar12 = pbVar12 + 1;
                            *pbVar12 = *pbVar13;
                            pbVar13 = pbVar15;
                        } while (pbVar15 != pbVar16 + uVar10);
                        local_54 = pbVar9 + 4;
                        pbVar4 = pbVar4 + uVar10 + 2;
                        pbVar16 = pbVar15;
                    } else {
                        pbVar4 = (byte *)_lzo1c_store_run(pbVar4, pbVar16);
                        pbVar16 = pbVar9;
                    }
                }
                goto LAB_0001f3bc;
            }
        LAB_0001f5b4:
            *pbVar4 = (byte)(uVar8 - 1) & 0x1f | ((char)pbVar13 + -1) * ' ';
            pbVar4[1] = (byte)(uVar8 - 1 >> 5);
            pbVar4 = pbVar4 + 2;
        LAB_0001f3f8:
            if (pbVar14 <= pbVar6)
                goto LAB_0001f31c;
            uVar8 = (uint)pbVar16[3] ^ (local_60 ^ (uint)*pbVar16 << 10) << 5;
            *(byte **)(param_5 + ((uVar8 * 0x9f5f >> 3 & 0x3ffc) + uVar17) *
                                     4) = pbVar16 + 1;
            bVar1 = pbVar16[4];
            uVar8 = uVar8 ^ (uint)pbVar16[1] << 10;
            pbVar9 = pbVar6;
        } else {
            pbVar6 = pbVar9 + (int)pbVar13;
            pbVar18 = pbVar13;
            if (pbVar9 != pbVar16)
                goto LAB_0001f368;
        LAB_0001f3bc:
            if (pbVar18 < (byte *)0x9) {
                pbVar13 = (byte *)((uint)pbVar18 & 0xff);
                if (uVar8 < 0x2001)
                    goto LAB_0001f5b4;
                local_34 = pbVar4 + 3;
                *pbVar4 = (char)pbVar18 - 3U | 0x20;
                pbVar4[2] = (byte)(uVar8 >> 6);
                pbVar4[1] = (byte)uVar8 & 0x3f;
                pbVar4 = local_34;
                goto LAB_0001f3f8;
            }
        LAB_0001f4b8:
            pbVar9 = pbVar6 + -uVar8;
            if ((pbVar6 < pbVar5) && (*pbVar9 == *pbVar6)) {
                do {
                    pbVar6 = pbVar6 + 1;
                    if (pbVar5 == pbVar6)
                        break;
                    pbVar9 = pbVar9 + 1;
                } while (*pbVar9 == *pbVar6);
            }
            uVar10 = (int)pbVar6 - (int)pbVar16;
            pbVar9 = pbVar4 + 1;
            if (uVar10 < 0x23) {
                *pbVar4 = (char)uVar10 - 3U | 0x20;
            } else {
                *pbVar4 = 0x20;
                for (uVar10 = uVar10 - 0x22; 0xff < uVar10;
                     uVar10 = uVar10 - 0xff) {
                    *pbVar9 = 0;
                    pbVar9 = pbVar9 + 1;
                }
                *pbVar9 = (byte)uVar10;
                pbVar9 = pbVar9 + 1;
            }
            pbVar4 = pbVar9 + 2;
            *pbVar9 = (byte)uVar8 & 0x3f;
            pbVar9[1] = (byte)(uVar8 >> 6);
            if (pbVar14 <= pbVar6) {
            LAB_0001f31c:
                if (pbVar5 != pbVar6) {
                    pbVar4 = (byte *)_lzo1c_store_run(
                        pbVar4, pbVar6, (int)pbVar5 - (int)pbVar6);
                }
                *param_4 = (int)pbVar4 - (int)param_3;
                return 0;
            }
            uVar8 = (uint)pbVar16[3] ^ (local_60 ^ (uint)*pbVar16 << 10) << 5;
            *(byte **)(param_5 + ((uVar8 * 0x9f5f >> 3 & 0x3ffc) + uVar17) *
                                     4) = pbVar16 + 1;
            bVar1 = pbVar16[4];
            uVar8 = uVar8 ^ (uint)pbVar16[1] << 10;
            pbVar9 = pbVar6;
            local_34 = pbVar4;
        }
        uVar3 = uVar17 + 1 & 3;
        uVar10 = uVar3 + 1 & 3;
        *(byte **)(param_5 +
                   (((uint)bVar1 ^ uVar8 << 5) * 0x9f5f >> 3 & 0x3ffc | uVar3) *
                       4) = pbVar16 + 2;
        local_60 = (uint)pbVar9[2] ^ ((uint)pbVar9[1] ^ (uint)*pbVar9 << 5)
                                         << 5;
        pbVar16 = pbVar9;
    } while (true);
}

void lzo1c_7_compress(void)

{
    _lzo1c_do_compress();
    return;
}

undefined4 FUN_0001f7f8(byte *param_1, int param_2, byte *param_3, int *param_4,
                        int param_5)

{
    undefined4 *puVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte *pbVar4;
    int iVar5;
    uint uVar6;
    undefined4 *puVar7;
    byte *pbVar8;
    byte *pbVar9;
    byte *pbVar10;
    uint uVar11;
    byte *pbVar12;
    uint uVar13;
    uint uVar14;
    byte *pbVar15;
    byte *pbVar16;
    uint uVar17;
    uint uVar18;
    bool bVar19;
    byte *local_60;
    byte *local_54;
    byte *local_34;

    pbVar2 = param_1 + param_2;
    pbVar12 = param_1 + param_2 + -9;
    local_34 = param_3 + 1;
    uVar6 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    *(byte **)(param_5 + (uVar6 * 0x9f5f >> 3 & 0x3ffc) * 4) = param_1;
    uVar14 = (uint)param_1[3] ^ (uVar6 ^ (uint)*param_1 << 10) << 5;
    uVar6 = 1;
    pbVar9 = param_1 + 1;
    pbVar16 = param_1;
    local_60 = param_3;
    local_54 = pbVar12;
LAB_0001f878:
    do {
        while (true) {
            iVar5 = 4;
            pbVar3 = pbVar9 + 9;
            pbVar10 = (byte *)0x0;
            puVar1 =
                (undefined4 *)(param_5 + (uVar14 * 0x4faf8000 >> 0x14) * 0x10);
            uVar11 = 0;
            do {
                puVar7 = puVar1;
                pbVar4 = (byte *)*puVar7;
                if ((((param_1 <= pbVar4) &&
                      (uVar17 = (int)pbVar9 - (int)pbVar4,
                       uVar17 - 1 < 0x3fff)) &&
                     (pbVar4[(int)pbVar10] == pbVar9[(int)pbVar10])) &&
                    (((*pbVar4 == *pbVar9 && (pbVar4[1] == pbVar9[1])) &&
                      (pbVar4[2] == pbVar9[2])))) {
                    pbVar8 = pbVar9 + 4;
                    if (((pbVar4[3] == pbVar9[3]) &&
                         (pbVar8 = pbVar9 + 5, pbVar4[4] == pbVar9[4])) &&
                        ((pbVar8 = pbVar9 + 6,
                          pbVar4[5] == pbVar9[5] &&
                              (((pbVar8 = pbVar9 + 7,
                                 pbVar4[6] == pbVar9[6] &&
                                     (pbVar8 = pbVar9 + 8,
                                      pbVar4[7] == pbVar9[7])) &&
                                (pbVar8 = pbVar3, pbVar4[8] == pbVar9[8])))))) {
                        if (pbVar9 == pbVar16) {
                            uVar11 = uVar17;
                        }
                        uVar13 = uVar6 + 1 & 3;
                        puVar7[iVar5 + (uVar6 - 4)] = pbVar9;
                        if (pbVar9 == pbVar16)
                            goto LAB_0001f9ec;
                        pbVar10 = (byte *)0x9;
                        goto LAB_0001f988;
                    }
                    if (pbVar10 < pbVar8 + (-1 - (int)pbVar9)) {
                        pbVar10 = pbVar8 + (-1 - (int)pbVar9);
                        uVar11 = uVar17;
                    }
                }
                uVar17 = uVar11;
                iVar5 = iVar5 + -1;
                puVar1 = puVar7 + 1;
                uVar11 = uVar17;
            } while (iVar5 != 0);
            uVar13 = uVar6 + 1 & 3;
            puVar7[uVar6 - 3] = pbVar9;
            if (pbVar10 < (byte *)0x4)
                break;
            pbVar3 = pbVar9 + (int)pbVar10;
            pbVar4 = pbVar10;
            if (pbVar9 != pbVar16)
                goto LAB_0001f988;
        LAB_0001f9e4:
            if (pbVar4 < (byte *)0x9) {
                pbVar10 = (byte *)((uint)pbVar4 & 0xff);
                if (uVar11 < 0x2001)
                    goto LAB_0001fce0;
                local_34 = local_60 + 3;
                *local_60 = (char)pbVar4 - 3U | 0x20;
                local_60[2] = (byte)(uVar11 >> 6);
                local_60[1] = (byte)uVar11 & 0x3f;
                uVar6 = uVar13;
                pbVar9 = pbVar3;
                local_60 = local_34;
                goto LAB_0001fc6c;
            }
        LAB_0001f9ec:
            pbVar10 = pbVar3 + -uVar11;
            pbVar9 = pbVar3;
            if ((pbVar3 < pbVar2) && (*pbVar10 == *pbVar3)) {
                do {
                    pbVar9 = pbVar3 + 1;
                    if (pbVar2 == pbVar9)
                        break;
                    pbVar10 = pbVar10 + 1;
                    pbVar3 = pbVar9;
                } while (*pbVar10 == *pbVar9);
            }
            uVar6 = (int)pbVar9 - (int)pbVar16;
            pbVar3 = local_60 + 1;
            if (uVar6 < 0x23) {
                *local_60 = (char)uVar6 - 3U | 0x20;
            } else {
                *local_60 = 0x20;
                for (uVar6 = uVar6 - 0x22; 0xff < uVar6; uVar6 = uVar6 - 0xff) {
                    *pbVar3 = 0;
                    pbVar3 = pbVar3 + 1;
                }
                *pbVar3 = (byte)uVar6;
                pbVar3 = pbVar3 + 1;
            }
            local_60 = pbVar3 + 2;
            *pbVar3 = (byte)uVar11 & 0x3f;
            pbVar3[1] = (byte)(uVar11 >> 6);
            pbVar3 = pbVar9;
            if (pbVar12 <= pbVar9)
                goto LAB_0001f938;
            uVar6 = uVar13 + 1 & 3;
            uVar11 = uVar6 + 1 & 3;
            uVar14 = (uint)pbVar16[3] ^ (uVar14 ^ (uint)*pbVar16 << 10) << 5;
            uVar18 = uVar11 + 1 & 3;
            *(byte **)(param_5 + ((uVar14 * 0x9f5f >> 3 & 0x3ffc) + uVar13) *
                                     4) = pbVar16 + 1;
            uVar17 = (uint)pbVar16[4] ^ (uVar14 ^ (uint)pbVar16[1] << 10) << 5;
            *(byte **)(param_5 + (uVar17 * 0x9f5f >> 3 & 0x3ffc | uVar6) * 4) =
                pbVar16 + 2;
            uVar14 = uVar18 + 1 & 3;
            uVar6 = (uint)pbVar16[5] ^ (uVar17 ^ (uint)pbVar16[2] << 10) << 5;
            *(byte **)(param_5 + (uVar6 * 0x9f5f >> 3 & 0x3ffc | uVar11) * 4) =
                pbVar16 + 3;
            uVar11 = uVar14 + 1 & 3;
            uVar6 = (uint)pbVar16[6] ^ (uVar6 ^ (uint)pbVar16[3] << 10) << 5;
            *(byte **)(param_5 + (uVar6 * 0x9f5f >> 3 & 0x3ffc | uVar18) * 4) =
                pbVar16 + 4;
            uVar13 = uVar11 + 1 & 3;
            uVar6 = (uint)pbVar16[7] ^ (uVar6 ^ (uint)pbVar16[4] << 10) << 5;
            *(byte **)(param_5 + (uVar6 * 0x9f5f >> 3 & 0x3ffc | uVar14) * 4) =
                pbVar16 + 5;
            uVar17 = uVar13 + 1 & 3;
            uVar14 = (uint)pbVar16[8] ^ (uVar6 ^ (uint)pbVar16[5] << 10) << 5;
            *(byte **)(param_5 + (uVar14 * 0x9f5f >> 3 & 0x3ffc | uVar11) * 4) =
                pbVar16 + 6;
            uVar6 = uVar17 + 1 & 3;
            uVar14 = (uint)pbVar16[9] ^ (uVar14 ^ (uint)pbVar16[6] << 10) << 5;
            *(byte **)(param_5 + (uVar14 * 0x9f5f >> 3 & 0x3ffc | uVar13) * 4) =
                pbVar16 + 7;
            *(byte **)(param_5 + (((uint)pbVar16[10] ^
                                   (uVar14 ^ (uint)pbVar16[7] << 10) << 5) *
                                              0x9f5f >>
                                          3 &
                                      0x3ffc |
                                  uVar17) *
                                     4) = pbVar16 + 8;
            uVar14 = (uint)pbVar9[2] ^ ((uint)pbVar9[1] ^ (uint)*pbVar9 << 5)
                                           << 5;
            pbVar16 = pbVar9;
            local_34 = local_60;
        }
        bVar19 = uVar17 == 0x2000;
        if (uVar17 < 0x2001) {
            bVar19 = pbVar10 == (byte *)0x3;
        }
        if (!bVar19) {
            pbVar3 = pbVar16;
            if (pbVar12 <= pbVar9 + 1)
                goto LAB_0001f938;
            uVar14 = (uint)pbVar9[3] ^ (uVar14 ^ (uint)*pbVar9 << 10) << 5;
            uVar6 = uVar13;
            pbVar9 = pbVar9 + 1;
            goto LAB_0001f878;
        }
        pbVar10 = (byte *)0x3;
        pbVar3 = pbVar9 + 3;
        if (pbVar9 != pbVar16) {
        LAB_0001f988:
            pbVar4 = pbVar10;
            uVar11 = uVar17;
            if (local_54 == pbVar9) {
                local_54 = local_54 + 4;
                local_60[-2] = local_60[-2] & 0x1f;
                *local_60 = *pbVar16;
                local_60 = local_60 + 1;
                pbVar16 = pbVar16 + 1;
            } else {
                uVar6 = (int)pbVar9 - (int)pbVar16;
                if (uVar6 < 0x20) {
                    bVar19 = uVar6 == 3;
                    if (uVar6 < 4) {
                        bVar19 = local_60 == local_34;
                    }
                    if (bVar19) {
                        local_34[-2] =
                            local_34[-2] | (byte)((uVar6 & 0xff) << 6);
                    } else {
                        *local_60 = (byte)uVar6;
                        local_60 = local_60 + 1;
                    }
                    pbVar8 = local_60 + -1;
                    pbVar10 = pbVar16;
                    do {
                        pbVar15 = pbVar10 + 1;
                        pbVar8 = pbVar8 + 1;
                        *pbVar8 = *pbVar10;
                        pbVar10 = pbVar15;
                    } while (pbVar15 != pbVar16 + uVar6);
                    local_60 = local_60 + uVar6;
                    local_54 = pbVar9 + 4;
                    pbVar16 = pbVar15;
                } else if (uVar6 < 0x118) {
                    *local_60 = 0;
                    pbVar8 = local_60 + 1;
                    *pbVar8 = (byte)uVar6 - 0x20;
                    pbVar10 = pbVar16;
                    do {
                        pbVar15 = pbVar10 + 1;
                        pbVar8 = pbVar8 + 1;
                        *pbVar8 = *pbVar10;
                        pbVar10 = pbVar15;
                    } while (pbVar15 != pbVar16 + uVar6);
                    local_60 = local_60 + uVar6 + 2;
                    local_54 = pbVar9 + 4;
                    pbVar16 = pbVar15;
                } else {
                    local_60 = (byte *)_lzo1c_store_run(local_60, pbVar16);
                    pbVar16 = pbVar9;
                }
            }
            goto LAB_0001f9e4;
        }
    LAB_0001fce0:
        *local_60 = (byte)(uVar11 - 1) & 0x1f | ((char)pbVar10 + -1) * ' ';
        local_60[1] = (byte)(uVar11 - 1 >> 5);
        uVar6 = uVar13;
        pbVar9 = pbVar3;
        local_60 = local_60 + 2;
    LAB_0001fc6c:
        pbVar3 = pbVar9;
        if (pbVar12 <= pbVar9) {
        LAB_0001f938:
            if (pbVar2 != pbVar3) {
                local_60 = (byte *)_lzo1c_store_run(local_60, pbVar3,
                                                    (int)pbVar2 - (int)pbVar3);
            }
            *param_4 = (int)local_60 - (int)param_3;
            return 0;
        }
        pbVar3 = pbVar16 + -1;
        pbVar10 = pbVar16 + 2;
        pbVar16 = pbVar16 + 1;
        do {
            pbVar4 = pbVar16;
            pbVar3 = pbVar3 + 1;
            pbVar16 = pbVar4 + 1;
            pbVar10 = pbVar10 + 1;
            uVar14 = (uint)*pbVar10 ^ (uVar14 ^ (uint)*pbVar3 << 10) << 5;
            *(byte **)(param_5 + (uVar14 * 0x4faf8000 >> 0x14) * 0x10) = pbVar4;
        } while (pbVar16 < pbVar9);
        uVar14 = (uint)pbVar4[3] ^ (uVar14 ^ (uint)*pbVar4 << 10) << 5;
    } while (true);
}

void lzo1c_8_compress(void)

{
    _lzo1c_do_compress();
    return;
}

undefined4 FUN_0001ff34(byte *param_1, int param_2, byte *param_3, int *param_4,
                        int param_5)

{
    uint uVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte *pbVar4;
    int iVar5;
    byte *pbVar6;
    uint uVar7;
    byte *pbVar8;
    uint uVar9;
    undefined4 *puVar10;
    byte *pbVar11;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    bool bVar15;
    uint local_64;
    uint local_60;
    byte *local_3c;
    byte *local_34;

    pbVar12 = param_1 + param_2 + -9;
    pbVar4 = param_1 + param_2;
    local_34 = param_3 + 1;
    uVar9 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    local_64 = 1;
    *(byte **)(param_5 + (uVar9 * 0x9f5f >> 3 & 0x3ffc) * 4) = param_1;
    uVar9 = (uint)param_1[3] ^ (uVar9 ^ (uint)*param_1 << 10) << 5;
    pbVar2 = param_3;
    pbVar13 = param_1;
    pbVar3 = param_1 + 1;
    local_3c = pbVar12;
    do {
        iVar5 = param_5 + (uVar9 * 0x4faf8000 >> 0x14) * 0x10;
        puVar10 = (undefined4 *)(iVar5 + -4);
        local_60 = 0;
        pbVar11 = (byte *)0x0;
        do {
            puVar10 = puVar10 + 1;
            pbVar6 = (byte *)*puVar10;
            pbVar8 = pbVar11;
            uVar7 = local_60;
            if ((pbVar6 < param_1) ||
                (uVar1 = (int)pbVar3 - (int)pbVar6, 0x3ffe < uVar1 - 1)) {
                *puVar10 = pbVar3;
            } else if ((((pbVar6[(int)pbVar11] == pbVar3[(int)pbVar11]) &&
                         (*pbVar6 == *pbVar3)) &&
                        (pbVar6[1] == pbVar3[1])) &&
                       (pbVar6[2] == pbVar3[2])) {
                pbVar14 = pbVar3 + 4;
                if ((((pbVar6[3] == pbVar3[3]) &&
                      (pbVar14 = pbVar3 + 5, pbVar6[4] == pbVar3[4])) &&
                     ((pbVar14 = pbVar3 + 6,
                       pbVar6[5] == pbVar3[5] &&
                           ((pbVar14 = pbVar3 + 7,
                             pbVar6[6] == pbVar3[6] &&
                                 (pbVar14 = pbVar3 + 8,
                                  pbVar6[7] == pbVar3[7])))))) &&
                    (pbVar14 = pbVar3 + 9, pbVar6[8] == pbVar3[8])) {
                    if (pbVar11 < (byte *)0x9 || uVar1 < local_60) {
                        pbVar8 = (byte *)0x9;
                        uVar7 = uVar1;
                    }
                } else {
                    pbVar8 = pbVar14 + (-1 - (int)pbVar3);
                    bVar15 = pbVar11 == pbVar8;
                    uVar7 = uVar1;
                    if ((pbVar8 <= pbVar11) &&
                        (pbVar8 = pbVar11, uVar7 = local_60,
                         uVar1 < local_60 && bVar15)) {
                        uVar7 = uVar1;
                    }
                }
            }
            local_60 = uVar7;
            pbVar11 = pbVar8;
        } while ((undefined4 *)(iVar5 + 0xc) != puVar10);
        *(byte **)(iVar5 + local_64 * 4) = pbVar3;
        if (pbVar8 < (byte *)0x4) {
            bVar15 = local_60 == 0x2000;
            if (local_60 < 0x2001) {
                bVar15 = pbVar8 == (byte *)0x3;
            }
            if (bVar15)
                goto LAB_000200b8;
            pbVar14 = pbVar3 + 1;
            if (pbVar12 <= pbVar14)
                goto LAB_0002007c;
            uVar9 = (uint)pbVar3[3] ^ (uVar9 ^ (uint)*pbVar3 << 10) << 5;
        } else {
        LAB_000200b8:
            pbVar11 = pbVar2;
            pbVar6 = pbVar13;
            if (pbVar3 != pbVar13) {
                if (pbVar3 == local_3c) {
                    local_3c = pbVar3 + 4;
                    pbVar6 = pbVar13 + 1;
                    pbVar11 = pbVar2 + 1;
                    pbVar2[-2] = pbVar2[-2] & 0x1f;
                    *pbVar2 = *pbVar13;
                } else {
                    uVar7 = (int)pbVar3 - (int)pbVar13;
                    if (uVar7 < 0x20) {
                        bVar15 = uVar7 == 3;
                        if (uVar7 < 4) {
                            bVar15 = pbVar2 == local_34;
                        }
                        if (bVar15) {
                            local_34[-2] =
                                local_34[-2] | (byte)((uVar7 & 0xff) << 6);
                        } else {
                            *pbVar2 = (byte)uVar7;
                            pbVar2 = pbVar2 + 1;
                        }
                        pbVar11 = pbVar2 + -1;
                        do {
                            pbVar6 = pbVar13 + 1;
                            pbVar11 = pbVar11 + 1;
                            *pbVar11 = *pbVar13;
                            pbVar13 = pbVar6;
                        } while (pbVar3 != pbVar6);
                        pbVar11 = pbVar2 + uVar7;
                        local_3c = pbVar3 + 4;
                    } else if (uVar7 < 0x118) {
                        *pbVar2 = 0;
                        pbVar11 = pbVar2 + 1;
                        *pbVar11 = (byte)uVar7 - 0x20;
                        do {
                            pbVar6 = pbVar13 + 1;
                            pbVar11 = pbVar11 + 1;
                            *pbVar11 = *pbVar13;
                            pbVar13 = pbVar6;
                        } while (pbVar3 != pbVar6);
                        pbVar11 = pbVar2 + uVar7 + 2;
                        local_3c = pbVar3 + 4;
                    } else {
                        pbVar11 = (byte *)_lzo1c_store_run(pbVar2, pbVar13);
                        pbVar6 = pbVar3;
                    }
                }
            }
            pbVar14 = pbVar3 + (int)pbVar8;
            if (pbVar8 < (byte *)0x9) {
                if (local_60 < 0x2001) {
                    pbVar2 = pbVar11 + 2;
                    *pbVar11 =
                        (byte)(local_60 - 1) & 0x1f | ((char)pbVar8 + -1) * ' ';
                    pbVar11[1] = (byte)(local_60 - 1 >> 5);
                } else {
                    pbVar2 = pbVar11 + 3;
                    *pbVar11 = (char)pbVar8 - 3U | 0x20;
                    pbVar11[1] = (byte)local_60 & 0x3f;
                    pbVar11[2] = (byte)(local_60 >> 6);
                    local_34 = pbVar2;
                }
                pbVar13 = pbVar14;
                if (pbVar12 <= pbVar14)
                    goto LAB_0002007c;
                pbVar3 = pbVar6 + -1;
                pbVar11 = pbVar6 + 2;
                pbVar13 = pbVar6 + 1;
                do {
                    pbVar8 = pbVar13;
                    pbVar3 = pbVar3 + 1;
                    pbVar13 = pbVar8 + 1;
                    pbVar11 = pbVar11 + 1;
                    uVar9 = (uint)*pbVar11 ^ (uVar9 ^ (uint)*pbVar3 << 10) << 5;
                    *(byte **)(param_5 + (uVar9 * 0x4faf8000 >> 0x14) * 0x10) =
                        pbVar8;
                } while (pbVar13 < pbVar14);
                uVar9 = (uint)pbVar8[3] ^ (uVar9 ^ (uint)*pbVar8 << 10) << 5;
            } else {
                pbVar2 = pbVar14 + -local_60;
                if ((pbVar14 < pbVar4) && (*pbVar14 == *pbVar2)) {
                    do {
                        pbVar14 = pbVar14 + 1;
                        if (pbVar4 == pbVar14)
                            break;
                        pbVar2 = pbVar2 + 1;
                    } while (*pbVar2 == *pbVar14);
                }
                uVar7 = (int)pbVar14 - (int)pbVar6;
                pbVar13 = pbVar11 + 1;
                if (uVar7 < 0x23) {
                    *pbVar11 = (char)uVar7 - 3U | 0x20;
                } else {
                    *pbVar11 = 0x20;
                    for (uVar7 = uVar7 - 0x22; 0xff < uVar7;
                         uVar7 = uVar7 - 0xff) {
                        *pbVar13 = 0;
                        pbVar13 = pbVar13 + 1;
                    }
                    *pbVar13 = (byte)uVar7;
                    pbVar13 = pbVar13 + 1;
                }
                pbVar2 = pbVar13 + 2;
                *pbVar13 = (byte)local_60 & 0x3f;
                pbVar13[1] = (byte)(local_60 >> 6);
                pbVar13 = pbVar14;
                if (pbVar12 <= pbVar14) {
                LAB_0002007c:
                    if (pbVar4 != pbVar13) {
                        pbVar2 = (byte *)_lzo1c_store_run(
                            pbVar2, pbVar13, (int)pbVar4 - (int)pbVar13);
                    }
                    *param_4 = (int)pbVar2 - (int)param_3;
                    return 0;
                }
                pbVar3 = pbVar6 + -1;
                pbVar11 = pbVar6 + 2;
                pbVar13 = pbVar6 + 1;
                do {
                    pbVar8 = pbVar13;
                    pbVar3 = pbVar3 + 1;
                    pbVar13 = pbVar8 + 1;
                    pbVar11 = pbVar11 + 1;
                    uVar9 = (uint)*pbVar11 ^ (uVar9 ^ (uint)*pbVar3 << 10) << 5;
                    *(byte **)(param_5 + (uVar9 * 0x4faf8000 >> 0x14) * 0x10) =
                        pbVar8;
                } while (pbVar13 < pbVar14);
                uVar9 = (uint)pbVar8[3] ^ (uVar9 ^ (uint)*pbVar8 << 10) << 5;
                local_34 = pbVar2;
            }
        }
        local_64 = local_64 + 1 & 3;
        pbVar3 = pbVar14;
    } while (true);
}

void lzo1c_9_compress(void)

{
    _lzo1c_do_compress();
    return;
}

undefined4 FUN_0002051c(byte *param_1, int param_2, byte *param_3, int *param_4,
                        int param_5)

{
    char cVar1;
    uint uVar2;
    undefined4 *puVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    byte *pbVar7;
    uint uVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;
    uint uVar11;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    byte *pbVar15;
    byte *pbVar16;
    byte *pbVar17;
    uint uVar18;
    bool bVar19;
    uint local_68;
    uint local_64;
    byte *local_58;
    byte *local_3c;
    byte *local_2c;

    pbVar6 = param_1 + param_2;
    uVar8 = (uint)param_1[2] ^ ((uint)param_1[1] ^ (uint)*param_1 << 5) << 5;
    local_64 = 1;
    pbVar14 = param_1 + param_2 + -9;
    *(byte **)((uVar8 * 0x9f5f & 0x3ffe0) + param_5) = param_1;
    uVar8 = (uint)param_1[3] ^ (uVar8 ^ (uint)*param_1 << 10) << 5;
    pbVar16 = param_1;
    pbVar4 = param_3;
    pbVar5 = param_1 + 1;
    local_58 = pbVar14;
    local_3c = param_3 + 1;
LAB_000205ac:
    do {
        local_68 = 0;
        puVar9 = (undefined4 *)(param_5 + (uVar8 * 0x9f5f & 0x3ffe0));
        puVar3 = puVar9 + 8;
        pbVar17 = (byte *)0x0;
        do {
            while (true) {
                puVar10 = puVar9;
                puVar9 = puVar10 + 1;
                local_2c = (byte *)*puVar10;
                pbVar13 = pbVar17;
                uVar11 = local_68;
                if ((param_1 <= local_2c) &&
                    (uVar18 = (int)pbVar5 - (int)local_2c, uVar18 - 1 < 0x3fff))
                    break;
                *puVar10 = pbVar5;
            LAB_0002061c:
                local_68 = uVar11;
                pbVar17 = pbVar13;
                if (puVar3 == puVar9)
                    goto LAB_00020678;
            }
            if (local_2c[(int)pbVar17] != pbVar5[(int)pbVar17])
                goto LAB_0002061c;
            uVar2 = local_68;
            if (((*local_2c == *pbVar5) && (local_2c[1] == pbVar5[1])) &&
                (local_2c[2] == pbVar5[2])) {
                pbVar7 = pbVar5 + 4;
                if ((((local_2c[3] == pbVar5[3]) &&
                      (pbVar7 = pbVar5 + 5, local_2c[4] == pbVar5[4])) &&
                     ((pbVar7 = pbVar5 + 6,
                       local_2c[5] == pbVar5[5] &&
                           ((pbVar7 = pbVar5 + 7,
                             local_2c[6] == pbVar5[6] &&
                                 (pbVar7 = pbVar5 + 8,
                                  local_2c[7] == pbVar5[7])))))) &&
                    (pbVar7 = pbVar5 + 9, local_2c[8] == pbVar5[8])) {
                    local_2c = local_2c + 8;
                    do {
                        pbVar13 = pbVar7;
                        if (pbVar6 <= pbVar13) {
                            pbVar13 = pbVar13 + -(int)pbVar5;
                            if (pbVar13 <= pbVar17)
                                goto LAB_00020b54;
                            goto LAB_00020750;
                        }
                        local_2c = local_2c + 1;
                        pbVar7 = pbVar13 + 1;
                    } while (*local_2c == *pbVar13);
                    pbVar13 = pbVar13 + -(int)pbVar5;
                    uVar2 = uVar18;
                    if (pbVar17 < pbVar13)
                        goto LAB_0002066c;
                LAB_00020b54:
                    bVar19 = pbVar17 == pbVar13;
                    pbVar13 = pbVar17;
                    if (uVar18 < local_68 && bVar19) {
                        uVar11 = uVar18;
                    }
                } else {
                    pbVar7 = pbVar7 + (-1 - (int)pbVar5);
                    pbVar13 = pbVar7;
                    uVar11 = uVar18;
                    if ((pbVar7 <= pbVar17) &&
                        (pbVar13 = pbVar17, uVar11 = local_68,
                         uVar18 < local_68 && pbVar17 == pbVar7)) {
                        uVar11 = uVar18;
                    }
                }
                goto LAB_0002061c;
            }
        LAB_0002066c:
            local_68 = uVar2;
            pbVar17 = pbVar13;
        } while (puVar3 != puVar9);
    LAB_00020678:
        uVar11 = local_64 + 1 & 7;
        puVar10[local_64 - 7] = pbVar5;
        uVar18 = local_68;
        local_64 = uVar11;
        if ((byte *)0x3 < pbVar13) {
        LAB_00020750:
            local_68 = uVar18;
            pbVar17 = pbVar5 + (int)pbVar13;
            if (pbVar5 != pbVar16) {
            LAB_0002075c:
                if (local_58 == pbVar5) {
                    pbVar4[-2] = pbVar4[-2] & 0x1f;
                    local_58 = local_58 + 4;
                    *pbVar4 = *pbVar16;
                    pbVar16 = pbVar16 + 1;
                    pbVar4 = pbVar4 + 1;
                } else {
                    uVar11 = (int)pbVar5 - (int)pbVar16;
                    if (uVar11 < 0x20) {
                        bVar19 = uVar11 == 3;
                        if (uVar11 < 4) {
                            bVar19 = pbVar4 == local_3c;
                        }
                        if (bVar19) {
                            local_3c[-2] =
                                local_3c[-2] | (byte)((uVar11 & 0xff) << 6);
                        } else {
                            *pbVar4 = (byte)uVar11;
                            pbVar4 = pbVar4 + 1;
                        }
                        pbVar12 = pbVar4 + -1;
                        pbVar7 = pbVar16;
                        do {
                            pbVar15 = pbVar7 + 1;
                            pbVar12 = pbVar12 + 1;
                            *pbVar12 = *pbVar7;
                            pbVar7 = pbVar15;
                        } while (pbVar15 != pbVar16 + uVar11);
                        local_58 = pbVar5 + 4;
                        pbVar16 = pbVar15;
                        pbVar4 = pbVar4 + uVar11;
                    } else if (uVar11 < 0x118) {
                        *pbVar4 = 0;
                        pbVar12 = pbVar4 + 1;
                        *pbVar12 = (byte)uVar11 - 0x20;
                        pbVar7 = pbVar16;
                        do {
                            pbVar15 = pbVar7 + 1;
                            pbVar12 = pbVar12 + 1;
                            *pbVar12 = *pbVar7;
                            pbVar7 = pbVar15;
                        } while (pbVar15 != pbVar16 + uVar11);
                        local_58 = pbVar5 + 4;
                        pbVar16 = pbVar15;
                        pbVar4 = pbVar4 + uVar11 + 2;
                    } else {
                        pbVar4 = (byte *)_lzo1c_store_run(pbVar4, pbVar16);
                        pbVar16 = pbVar5;
                    }
                }
            }
            cVar1 = (char)pbVar13;
            if (pbVar13 < (byte *)0x9) {
                pbVar13 = (byte *)((uint)pbVar13 & 0xff);
                if (local_68 < 0x2001) {
                LAB_000208fc:
                    *pbVar4 = (byte)(local_68 - 1) & 0x1f |
                              ((char)pbVar13 + -1) * ' ';
                    pbVar4[1] = (byte)(local_68 - 1 >> 5);
                    pbVar4 = pbVar4 + 2;
                } else {
                    local_3c = pbVar4 + 3;
                    *pbVar4 = cVar1 - 3U | 0x20;
                    pbVar4[1] = (byte)local_68 & 0x3f;
                    pbVar4[2] = (byte)(local_68 >> 6);
                    pbVar4 = local_3c;
                }
                if (pbVar14 <= pbVar17)
                    goto LAB_000206e0;
                pbVar5 = pbVar16 + -1;
                pbVar13 = pbVar16 + 2;
                pbVar16 = pbVar16 + 1;
                do {
                    pbVar7 = pbVar16;
                    pbVar5 = pbVar5 + 1;
                    pbVar16 = pbVar7 + 1;
                    pbVar13 = pbVar13 + 1;
                    uVar8 = (uint)*pbVar13 ^ (uVar8 ^ (uint)*pbVar5 << 10) << 5;
                    *(byte **)(param_5 + (uVar8 * 0x27d7c000 >> 0x13) * 0x20) =
                        pbVar7;
                } while (pbVar16 < pbVar17);
                uVar8 = (uint)pbVar7[3] ^ (uVar8 ^ (uint)*pbVar7 << 10) << 5;
                pbVar5 = pbVar17;
            } else {
                pbVar5 = pbVar4 + 1;
                if (pbVar13 < (byte *)0x23) {
                    *pbVar4 = cVar1 - 3U | 0x20;
                } else {
                    *pbVar4 = 0x20;
                    for (pbVar13 = pbVar13 + -0x22; (byte *)0xff < pbVar13;
                         pbVar13 = pbVar13 + -0xff) {
                        *pbVar5 = 0;
                        pbVar5 = pbVar5 + 1;
                    }
                    *pbVar5 = (byte)pbVar13;
                    pbVar5 = pbVar5 + 1;
                }
                pbVar4 = pbVar5 + 2;
                *pbVar5 = (byte)local_68 & 0x3f;
                pbVar5[1] = (byte)(local_68 >> 6);
                if (pbVar14 <= pbVar17) {
                LAB_000206e0:
                    if (pbVar6 != pbVar17) {
                        pbVar4 = (byte *)_lzo1c_store_run(
                            pbVar4, pbVar17, (int)pbVar6 - (int)pbVar17);
                    }
                    *param_4 = (int)pbVar4 - (int)param_3;
                    return 0;
                }
                pbVar5 = pbVar16 + -1;
                pbVar13 = pbVar16 + 2;
                pbVar16 = pbVar16 + 1;
                do {
                    pbVar7 = pbVar16;
                    pbVar5 = pbVar5 + 1;
                    pbVar16 = pbVar7 + 1;
                    pbVar13 = pbVar13 + 1;
                    uVar8 = (uint)*pbVar13 ^ (uVar8 ^ (uint)*pbVar5 << 10) << 5;
                    *(byte **)(param_5 + (uVar8 * 0x27d7c000 >> 0x13) * 0x20) =
                        pbVar7;
                } while (pbVar16 < pbVar17);
                uVar8 = (uint)pbVar7[3] ^ (uVar8 ^ (uint)*pbVar7 << 10) << 5;
                pbVar5 = pbVar17;
                local_3c = pbVar4;
            }
            goto LAB_000205ac;
        }
        if (local_68 < 0x2001 && pbVar13 == (byte *)0x3) {
            pbVar13 = (byte *)0x3;
            pbVar17 = pbVar5 + 3;
            if (pbVar5 != pbVar16)
                goto LAB_0002075c;
            goto LAB_000208fc;
        }
        pbVar17 = pbVar16;
        if (pbVar14 <= pbVar5 + 1)
            goto LAB_000206e0;
        uVar8 = (uint)pbVar5[3] ^ (uVar8 ^ (uint)*pbVar5 << 10) << 5;
        pbVar5 = pbVar5 + 1;
    } while (true);
}

void lzo1c_99_compress(void)

{
    _lzo1c_do_compress();
    return;
}

undefined4 FUN_00020bb4(int param_1, int param_2, int param_3, int param_4)

{
    ushort uVar1;
    short sVar2;
    char *pcVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    uint uVar10;
    undefined2 uVar11;
    int iVar12;
    char *pcVar13;
    char cVar14;
    uint uVar15;
    char *pcVar16;
    undefined1 uVar17;
    char *pcVar18;
    undefined1 *puVar19;

    if (param_4 == 0) {
        uVar15 = *(uint *)(param_2 + 0x44);
        iVar12 = uVar15 + 1;
        iVar7 = uVar15 + 2;
        uVar11 = (undefined2)uVar15;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
    } else {
        param_3 = param_3 - param_4;
        uVar15 = *(uint *)(param_2 + 0x44);
        iVar5 = param_3;
        if (param_3 == 0) {
            uVar11 = (undefined2)uVar15;
            iVar12 = uVar15 + 1;
            iVar7 = uVar15 + 2;
        } else {
            do {
                iVar7 = *(int *)(param_2 + 0x48);
                if (*(int *)(param_2 + 0x54) == 0) {
                    iVar12 = param_2 + iVar7;
                    iVar12 = param_2 + (((uint) * (byte *)(iVar12 + 0x5e) ^
                                         ((uint) * (byte *)(iVar12 + 0x5d) ^
                                          (uint) * (byte *)(iVar12 + 0x5c) << 5)
                                             << 5) *
                                            0x13ebe000 >>
                                        0x12) *
                                           2;
                    *(short *)(iVar12 + 0x1f058) =
                        *(short *)(iVar12 + 0x1f058) + -1;
                } else {
                    *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + -1;
                }
                uVar8 = uVar15 + 1;
                iVar9 = param_2 + uVar15 * 2;
                iVar12 = param_2 +
                         (((uint) * (byte *)(param_2 + uVar15 + 0x5e) ^
                           ((uint) * (byte *)(param_2 + uVar8 + 0x5c) ^
                            (uint) * (byte *)(param_2 + uVar15 + 0x5c) << 5)
                               << 5) *
                              0x13ebe000 >>
                          0x12) *
                             2;
                sVar2 = *(short *)(iVar12 + 0x1f058);
                if (sVar2 == 0) {
                    uVar11 = 0xffff;
                } else {
                    uVar11 = *(undefined2 *)(iVar12 + 0x505c);
                }
                *(undefined2 *)(iVar9 + 0xd05c) = uVar11;
                *(short *)(iVar12 + 0x505c) = (short)uVar15;
                uVar10 = *(uint *)(param_2 + 4);
                *(short *)(iVar9 + 0x1605a) = (short)uVar10 + 1;
                *(short *)(iVar12 + 0x1f058) = sVar2 + 1;
                iVar12 = *(int *)(param_2 + 0x2c);
                uVar15 = *(uint *)(param_2 + 0x40);
                puVar19 = *(undefined1 **)(iVar12 + 0x1c);
                if (puVar19 < *(undefined1 **)(iVar12 + 0x24)) {
                    *(undefined1 **)(iVar12 + 0x1c) = puVar19 + 1;
                    uVar17 = *puVar19;
                    *(undefined1 *)(param_2 + uVar15 + 0x5c) = uVar17;
                    if (uVar15 < uVar10) {
                        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar15) =
                            uVar17;
                        uVar15 = *(uint *)(param_2 + 0x40);
                        iVar7 = *(int *)(param_2 + 0x48);
                        uVar8 = *(int *)(param_2 + 0x44) + 1;
                    }
                } else {
                    if (*(int *)(param_2 + 0x24) != 0) {
                        *(int *)(param_2 + 0x24) =
                            *(int *)(param_2 + 0x24) + -1;
                    }
                    *(undefined1 *)(param_2 + uVar15 + 0x5c) = 0;
                    if (uVar15 < uVar10) {
                        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar15) = 0;
                        uVar15 = *(uint *)(param_2 + 0x40);
                        iVar7 = *(int *)(param_2 + 0x48);
                        uVar8 = *(int *)(param_2 + 0x44) + 1;
                    }
                }
                uVar4 = *(uint *)(param_2 + 0x4c);
                *(uint *)(param_2 + 0x40) = uVar15 + 1;
                uVar10 = iVar7 + 1;
                if (uVar15 + 1 == uVar4) {
                    *(undefined4 *)(param_2 + 0x40) = 0;
                }
                if (uVar4 == uVar8) {
                    uVar6 = 0;
                    iVar7 = 2;
                    *(undefined4 *)(param_2 + 0x44) = 0;
                    iVar12 = 1;
                    uVar15 = uVar6;
                } else {
                    *(uint *)(param_2 + 0x44) = uVar8;
                    iVar12 = uVar8 + 1;
                    iVar7 = uVar8 + 2;
                    uVar6 = uVar8 & 0xffff;
                    uVar15 = uVar8;
                }
                uVar11 = (undefined2)uVar6;
                if (uVar4 == uVar10) {
                    uVar10 = 0;
                }
                iVar5 = iVar5 + -1;
                *(uint *)(param_2 + 0x48) = uVar10;
            } while (iVar5 != 0);
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1 + param_3;
    }
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 2;
    uVar10 = (uint) * (byte *)(param_2 + uVar15 + 0x5c);
    iVar5 = param_2 +
            (((uint) * (byte *)(param_2 + iVar7 + 0x5c) ^
              ((uint) * (byte *)(param_2 + iVar12 + 0x5c) ^ uVar10 << 5) << 5) *
                 0x13ebe000 >>
             0x12) *
                2;
    uVar1 = *(ushort *)(iVar5 + 0x1f058);
    uVar8 = (uint)uVar1;
    if (uVar8 == 0) {
        *(undefined2 *)(param_2 + (uVar15 + 0x682c) * 2 + 4) = 0xffff;
        uVar6 = 0xffff;
        *(undefined2 *)(iVar5 + 0x1f058) = 1;
        uVar4 = uVar8;
    } else {
        uVar6 = (uint) * (ushort *)(iVar5 + 0x505c);
        *(ushort *)(param_2 + (uVar15 + 0x682c) * 2 + 4) =
            *(ushort *)(iVar5 + 0x505c);
        *(ushort *)(iVar5 + 0x1f058) = uVar1 + 1;
        uVar4 = *(uint *)(param_2 + 0xc);
        if (uVar4 == 0 || uVar8 <= uVar4) {
            uVar4 = uVar8;
        }
    }
    *(undefined2 *)(iVar5 + 0x505c) = uVar11;
    uVar8 = *(uint *)(param_2 + 0x24);
    *(uint *)(param_2 + 0x28) = uVar10;
    if (uVar8 < 3) {
        uVar10 = *(uint *)(param_2 + 4);
        iVar5 = *(int *)(param_2 + 0x20);
        if (uVar8 == 0) {
            uVar6 = 0xffffffff;
        }
        if (uVar8 == 0) {
            *(uint *)(param_2 + 0x28) = uVar6;
        }
        uVar8 = *(uint *)(param_2 + 0x1c);
        *(short *)(param_2 + (uVar15 + 0xb02c) * 2 + 2) = (short)uVar10 + 1;
        goto LAB_00020df8;
    }
    iVar7 = param_2 + 0x5c;
    pcVar13 = (char *)(iVar7 + uVar15);
    iVar5 = uVar4 - 1;
    cVar14 = pcVar13[1];
    if (uVar4 == 0) {
        uVar8 = *(uint *)(param_2 + 0x1c);
    LAB_000211ac:
        iVar5 = *(int *)(param_2 + 0x20);
    } else {
        uVar10 = 2;
        do {
            pcVar16 = (char *)(iVar7 + uVar6);
            if ((((pcVar16[uVar10 - 1] == cVar14) &&
                  (pcVar16[uVar10] == pcVar13[uVar10])) &&
                 (*pcVar16 == *pcVar13)) &&
                (pcVar16[1] == pcVar13[1])) {
                pcVar16 = pcVar16 + 2;
                pcVar3 = pcVar13 + 3;
                do {
                    pcVar18 = pcVar3;
                    if ((char *)(iVar7 + uVar8 + uVar15) <= pcVar18)
                        break;
                    pcVar16 = pcVar16 + 1;
                    pcVar3 = pcVar18 + 1;
                } while (*pcVar18 == *pcVar16);
                uVar4 = (int)pcVar18 - (int)pcVar13;
                if (uVar10 < uVar4) {
                    *(uint *)(param_2 + 0x1c) = uVar4;
                    *(uint *)(param_2 + 0x30) = uVar6;
                    if (uVar8 == uVar4)
                        goto LAB_0002113c;
                    if ((*(uint *)(param_2 + 0x10) <= uVar4) ||
                        (*(ushort *)(param_2 + (uVar6 + 0xb02c) * 2 + 2) <
                         uVar4))
                        break;
                    cVar14 = pcVar13[uVar4 - 1];
                    uVar10 = uVar4;
                }
            }
            iVar5 = iVar5 + -1;
            uVar6 = (uint) * (ushort *)(param_2 + 0xd05c + uVar6 * 2);
        } while (iVar5 != -1);
        uVar8 = *(uint *)(param_2 + 0x1c);
        if (uVar8 < 3)
            goto LAB_000211ac;
    LAB_0002113c:
        uVar10 = *(uint *)(param_2 + 0x30);
        if (uVar10 < uVar15) {
            iVar5 = -uVar10;
        } else {
            iVar5 = *(int *)(param_2 + 0x4c) - uVar10;
        }
        iVar5 = uVar15 + iVar5;
        *(int *)(param_2 + 0x20) = iVar5;
    }
    uVar10 = *(uint *)(param_2 + 4);
    *(short *)(param_2 + (uVar15 + 0xb02c) * 2 + 2) = (short)uVar8;
LAB_00020df8:
    iVar7 = *(int *)(param_2 + 0x48);
    if (*(int *)(param_2 + 0x54) == 0) {
        iVar12 = param_2 + iVar7;
        iVar12 = param_2 + (((uint) * (byte *)(iVar12 + 0x5e) ^
                             ((uint) * (byte *)(iVar12 + 0x5d) ^
                              (uint) * (byte *)(iVar12 + 0x5c) << 5)
                                 << 5) *
                                0x13ebe000 >>
                            0x12) *
                               2;
        *(short *)(iVar12 + 0x1f058) = *(short *)(iVar12 + 0x1f058) + -1;
    } else {
        *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + -1;
    }
    iVar12 = *(int *)(param_2 + 0x2c);
    *(uint *)(param_1 + 8) = uVar8;
    *(int *)(param_1 + 0xc) = iVar5;
    puVar19 = *(undefined1 **)(iVar12 + 0x1c);
    uVar15 = *(uint *)(param_2 + 0x40);
    if (puVar19 < *(undefined1 **)(iVar12 + 0x24)) {
        *(undefined1 **)(iVar12 + 0x1c) = puVar19 + 1;
        uVar17 = *puVar19;
        *(undefined1 *)(param_2 + uVar15 + 0x5c) = uVar17;
    } else {
        uVar17 = 0;
        if (*(int *)(param_2 + 0x24) != 0) {
            *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
        *(undefined1 *)(param_2 + uVar15 + 0x5c) = 0;
    }
    if (uVar15 < uVar10) {
        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar15) = uVar17;
        uVar15 = *(uint *)(param_2 + 0x40);
        iVar7 = *(int *)(param_2 + 0x48);
    }
    iVar5 = *(int *)(param_2 + 0x4c);
    *(uint *)(param_2 + 0x40) = uVar15 + 1;
    iVar7 = iVar7 + 1;
    if (uVar15 + 1 == iVar5) {
        *(undefined4 *)(param_2 + 0x40) = 0;
    }
    iVar12 = *(int *)(param_2 + 0x44) + 1;
    if (iVar5 == iVar12) {
        iVar12 = 0;
    }
    *(int *)(param_2 + 0x44) = iVar12;
    if (iVar5 == iVar7) {
        *(undefined4 *)(param_2 + 0x48) = 0;
    }
    if (iVar5 != iVar7) {
        *(int *)(param_2 + 0x48) = iVar7;
    }
    if (*(int *)(param_2 + 0x28) < 0) {
        uVar15 = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
    } else {
        uVar15 = ~*(uint *)(param_2 + 0x24);
        *(uint *)(param_1 + 4) = *(uint *)(param_2 + 0x24) + 1;
    }
    iVar5 = *(int *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + uVar15;
    if (((iVar5 != 0) && (*(code **)(iVar5 + 8) != (code *)0x0)) &&
        (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x30))) {
        (**(code **)(iVar5 + 8))(iVar5, *(uint *)(param_1 + 0x30),
                                 *(undefined4 *)(param_1 + 0x34), 0);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x400;
    }
    return 0;
}

int lzo1c_999_compress_callback(byte *param_1, uint param_2, byte *param_3,
                                undefined4 *param_4, undefined4 *param_5,
                                int param_6, int param_7)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    uint uVar7;
    byte *pbVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;
    int local_a0;
    undefined4 local_8c;
    uint local_88;
    uint local_84;
    uint local_80;
    undefined4 local_7c;
    undefined4 local_78;
    byte *local_70;
    byte *local_6c;
    byte *local_68;
    int local_60;
    undefined4 local_5c;
    byte *local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    int local_44;
    uint local_40;
    byte *local_3c;
    int local_38;
    int local_34;
    int local_30;
    int local_2c;

    pbVar8 = param_1 + param_2;
    param_5[2] = 2;
    local_3c = param_3 + 1;
    local_8c = 1;
    *param_5 = 0x3fff;
    param_5[1] = 0x800;
    param_5[0xb] = &local_8c;
    param_5[7] = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_40 = 0;
    local_78 = 0;
    local_7c = 0;
    local_54 = 0;
    local_58 = (byte *)0x0;
    local_5c = 0;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_44 = 0;
    param_5[8] = 0;
    param_5[5] = 0;
    param_5[3] = 0x800;
    param_5[4] = 0x800;
    local_60 = param_6;
    param_5[0x15] = 0x3fff;
    param_5[6] = 0;
    param_5[0x13] = 0x47ff;
    param_5[0x14] = (int)param_5 + 0x485b;
    local_70 = param_1;
    local_6c = param_1;
    local_68 = pbVar8;
    memset(param_5 + 0x7c16, 0, 0x8000);
    param_5[0x10] = 0;
    param_5[0xe] = 0;
    param_5[0xd] = 0;
    param_5[0xf] = 0;
    param_5[0x11] = 0;
    param_5[0x16] = 0;
    param_5[9] = param_2;
    if (param_2 == 0) {
        param_5[0x12] = 0x800;
    } else {
        if (0x800 < param_2) {
            param_5[9] = 0x800;
            memcpy(param_5 + 0x17, param_1, 0x800);
            param_5[0x10] = 0x800;
            param_5[0x12] = 0x800;
            local_70 = param_1 + 0x800;
            goto LAB_00021314;
        }
        memcpy(param_5 + 0x17, param_1, param_2);
        param_5[0x10] = param_2;
        param_5[0x12] = 0x800;
        local_70 = pbVar8;
        if (2 < param_2)
            goto LAB_00021314;
    }
    *(undefined1 *)((int)param_5 + param_2 + 0x5e) = 0;
    *(undefined1 *)((int)param_5 + param_2 + 0x5d) = 0;
    *(undefined1 *)((int)param_5 + param_2 + 0x5c) = 0;
LAB_00021314:
    param_5[5] = 0;
    if (param_7 != 0) {
        param_5[3] = param_7;
    }
    iVar3 = FUN_00020bb4(&local_8c, param_5, 0);
    if (iVar3 != 0) {
        return iVar3;
    }
    uVar7 = 0;
    pbVar8 = param_3;
    uVar1 = local_84;
    uVar2 = local_80;
    do {
        while (true) {
            if (local_88 == 0) {
                if (uVar7 != 0) {
                    pbVar8 = (byte *)_lzo1c_store_run(pbVar8, param_1, uVar7);
                }
                *pbVar8 = 0x21;
                pbVar8[1] = 0;
                pbVar8[2] = 0;
                local_58 = pbVar8 + (3 - (int)param_3);
                *param_4 = local_58;
                if (local_60 == 0) {
                    return 0;
                }
                if (*(code **)(local_60 + 8) == (code *)0x0) {
                    return 0;
                }
                (**(code **)(local_60 + 8))(local_60, local_5c);
                return 0;
            }
            if (uVar7 == 0) {
                param_1 = local_70 + -local_88;
            }
            local_84 = uVar1;
            local_80 = uVar2;
            if ((2 < uVar1) && (uVar2 < 0x2001 || 3 < uVar1))
                break;
            uVar7 = uVar7 + 1;
            FUN_00020bb4(&local_8c, param_5, 1, 0);
        LAB_000213fc:
            local_58 = (byte *)((int)pbVar8 - (int)param_3);
            uVar1 = local_84;
            uVar2 = local_80;
        }
        bVar11 = 7 < uVar1;
        bVar9 = uVar1 == 8;
        if (uVar1 < 9) {
            bVar11 = 0x1fff < uVar2;
            bVar9 = uVar2 == 0x2000;
        }
        if (uVar7 != 0) {
            if (uVar7 == 1) {
                if (local_40 == 3) {
                    local_a0 = 1;
                } else {
                LAB_0002156c:
                    local_a0 = (int)local_3c - (int)pbVar8;
                    if (local_a0 != 0) {
                        local_a0 = 1;
                    }
                    if (uVar1 < local_88)
                        goto LAB_0002158c;
                    local_a0 = 1;
                LAB_000215dc:
                    if (uVar7 != 1)
                        goto LAB_000215e4;
                    if (local_40 != 3)
                        goto LAB_00021688;
                }
                pbVar4 = pbVar8 + 1;
                pbVar8[-2] = pbVar8[-2] & 0x1f;
                *pbVar8 = *param_1;
                local_38 = local_38 + 1;
                param_1 = param_1 + 1;
                local_40 = uVar1;
            } else if (uVar7 == 3) {
                if (local_3c != pbVar8) {
                    if (uVar1 < local_88)
                        goto LAB_00021474;
                    local_a0 = 1;
                    goto LAB_000215ec;
                }
                local_a0 = 1;
                pbVar4 = pbVar8;
            LAB_0002170c:
                pbVar5 = pbVar4 + -1;
                pbVar8[-2] = pbVar8[-2] | (byte)(uVar7 << 6);
                pbVar8 = param_1;
                do {
                    pbVar6 = pbVar8 + 1;
                    pbVar5 = pbVar5 + 1;
                    *pbVar5 = *pbVar8;
                    pbVar8 = pbVar6;
                } while (pbVar6 != param_1 + uVar7);
                pbVar4 = pbVar4 + uVar7;
                local_34 = local_34 + 1;
                param_1 = pbVar6;
                local_40 = uVar1;
            } else {
                if (uVar7 == 2)
                    goto LAB_0002156c;
                if (uVar1 < local_88) {
                LAB_00021474:
                    local_a0 = 1;
                    goto LAB_0002158c;
                }
                local_a0 = 1;
            LAB_000215e4:
                if (uVar7 < 4) {
                LAB_00021688:
                    pbVar4 = local_3c;
                    if (pbVar8 == local_3c)
                        goto LAB_0002170c;
                    pbVar4 = (byte *)_lzo1c_store_run(pbVar8, param_1, uVar7);
                    local_40 = uVar1;
                } else {
                LAB_000215ec:
                    pbVar8 = (byte *)_lzo1c_store_run(pbVar8, param_1, uVar7);
                    pbVar4 = pbVar8;
                    local_40 = uVar1;
                    if (0x117 < uVar7)
                        goto LAB_000214c8;
                }
            }
        joined_r0x00021614:
            if (bVar11 && !bVar9) {
                pbVar5 = pbVar4 + 1;
                if (uVar1 < 0x23) {
                    *pbVar4 = (char)uVar1 - 3U | 0x20;
                } else {
                    *pbVar4 = 0x20;
                    for (uVar7 = uVar1 - 0x22; 0xff < uVar7;
                         uVar7 = uVar7 - 0xff) {
                        *pbVar5 = 0;
                        pbVar5 = pbVar5 + 1;
                    }
                    *pbVar5 = (byte)uVar7;
                    pbVar5 = pbVar5 + 1;
                }
                pbVar8 = pbVar5 + 2;
                *pbVar5 = (byte)uVar2 & 0x3f;
                pbVar5[1] = (byte)(uVar2 >> 6);
                local_2c = local_2c + 1;
                local_40 = 0;
                local_3c = pbVar8;
            } else {
                pbVar8 = pbVar4 + 2;
                *pbVar4 = (byte)(uVar2 - 1) & 0x1f | ((char)uVar1 + -1) * ' ';
                pbVar4[1] = (byte)(uVar2 - 1 >> 5);
                local_30 = local_30 + 1;
            }
            uVar7 = 0;
            FUN_00020bb4(&local_8c, param_5, uVar1, local_a0);
            goto LAB_000213fc;
        }
        if (((local_40 != 3) && (local_3c != pbVar8)) || (local_88 <= uVar1)) {
            local_a0 = 1;
        LAB_000214c8:
            pbVar4 = pbVar8;
            local_40 = 0;
            goto joined_r0x00021614;
        }
        local_a0 = 0;
    LAB_0002158c:
        FUN_00020bb4(&local_8c, param_5, 1, 0);
        bVar12 = 7 < uVar1;
        bVar10 = uVar1 == 8;
        if (uVar1 < 9) {
            bVar12 = 0x1fff < uVar2;
            bVar10 = uVar2 == 0x2000;
        }
        if ((!bVar12 || bVar10) && (0x2000 < local_80)) {
            local_a0 = local_a0 + 1;
        }
        if (local_84 < local_a0 + uVar1) {
            local_a0 = 2;
            if (uVar7 != 0)
                goto LAB_000215dc;
            goto LAB_000214c8;
        }
        uVar7 = uVar7 + 1;
        local_44 = local_44 + 1;
        uVar1 = local_84;
        uVar2 = local_80;
    } while (true);
}

void lzo1c_999_compress(void)

{
    lzo1c_999_compress_callback();
    return;
}

int _lzo1c_do_compress(undefined4 param_1, uint param_2, undefined1 *param_3,
                       uint *param_4, undefined4 param_5, code *param_6)

{
    int iVar1;
    undefined1 *puVar2;

    if (param_2 == 0) {
        *param_4 = 0;
        puVar2 = param_3;
    } else if (param_2 < 0xb) {
        puVar2 = (undefined1 *)_lzo1c_store_run(param_3, param_1, param_2);
        *param_4 = (int)puVar2 - (int)param_3;
        if ((uint)((int)puVar2 - (int)param_3) <= param_2) {
            return -1;
        }
    } else {
        iVar1 = (*param_6)();
        if (iVar1 != 0) {
            return iVar1;
        }
        puVar2 = param_3 + *param_4;
    }
    *puVar2 = 0x21;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *param_4 = *param_4 + 3;
    return 0;
}

undefined4 lzo1c_decompress(byte *param_1, int param_2, undefined4 *param_3,
                            int *param_4)

{
    undefined4 *puVar1;
    uint uVar2;
    undefined1 *puVar3;
    int iVar4;
    byte *pbVar5;
    byte *pbVar6;
    byte *pbVar7;
    uint uVar8;
    undefined4 *puVar9;
    undefined1 *puVar10;
    int iVar11;
    undefined4 *puVar12;
    undefined4 *puVar13;
    byte *pbVar14;
    undefined4 *puVar15;
    uint uVar16;
    undefined1 *puVar17;
    undefined1 *puVar18;

    pbVar5 = param_1;
    puVar15 = param_3;
LAB_00021840:
    do {
        pbVar6 = pbVar5 + 1;
        uVar16 = (uint)*pbVar5;
        if (0x1f < uVar16)
            goto LAB_00021950;
        if (uVar16 != 0) {
            pbVar5 = pbVar6;
            if (uVar16 < 4)
                goto LAB_000218d0;
        LAB_0002186c:
            iVar4 = (uVar16 - 4 & 0xfffffffc) + 4;
            pbVar5 = pbVar6;
            puVar1 = puVar15;
            do {
                puVar13 = puVar1;
                puVar1 = puVar13 + 1;
                *puVar13 = *(undefined4 *)pbVar5;
                pbVar5 = pbVar5 + 4;
            } while (puVar1 != (undefined4 *)((int)puVar15 + iVar4));
            uVar16 = uVar16 & 3;
            pbVar6 = pbVar6 + iVar4;
            if (uVar16 != 0) {
                pbVar14 = (byte *)((int)puVar13 + 3);
                pbVar7 = pbVar6 + uVar16;
                pbVar5 = pbVar6;
                do {
                    pbVar6 = pbVar5 + 1;
                    pbVar14 = pbVar14 + 1;
                    *pbVar14 = *pbVar5;
                    pbVar5 = pbVar6;
                } while (pbVar6 != pbVar7);
                puVar1 = (undefined4 *)((int)puVar1 + uVar16);
            }
            while (true) {
                uVar16 = (uint)*pbVar6;
                if (uVar16 < 0x20) {
                    do {
                        pbVar5 = pbVar6;
                        uVar16 = ~(uVar16 | (uint)pbVar5[1] << 5);
                        puVar15 = puVar1 + 1;
                        *(undefined1 *)puVar1 =
                            *(undefined1 *)((int)puVar1 + uVar16);
                        *(undefined1 *)((int)puVar1 + 1) =
                            *(undefined1 *)((int)puVar1 + uVar16 + 1);
                        *(undefined1 *)((int)puVar1 + 2) =
                            *(undefined1 *)((int)puVar1 + uVar16 + 2);
                        *(byte *)((int)puVar1 + 3) = pbVar5[2];
                        uVar16 = (uint)pbVar5[3];
                        puVar1 = puVar15;
                        pbVar6 = pbVar5 + 3;
                    } while (uVar16 < 0x20);
                    pbVar6 = pbVar5 + 4;
                } else {
                    pbVar6 = pbVar6 + 1;
                    puVar15 = puVar1;
                }
            LAB_00021950:
                uVar8 = uVar16 & 0x1f;
                uVar2 = (uint)*pbVar6;
                if (0x3f < uVar16)
                    break;
                if (uVar8 == 0) {
                    iVar4 = 0;
                    if (uVar2 == 0) {
                        do {
                            iVar11 = iVar4;
                            pbVar6 = pbVar6 + 1;
                            uVar2 = (uint)*pbVar6;
                            iVar4 = iVar11 + 0xff;
                        } while (uVar2 == 0);
                        iVar11 = iVar11 + 0x11e;
                        pbVar5 = pbVar6;
                    } else {
                        iVar11 = 0x1f;
                        pbVar5 = pbVar6;
                    }
                    uVar8 = uVar2 + iVar11;
                    pbVar6 = pbVar5 + 1;
                    uVar2 = (uint)pbVar5[1];
                }
                pbVar5 = pbVar6 + 2;
                iVar4 = -((uVar2 & 0x3f) + (uint)pbVar6[1] * 0x40);
                puVar1 = (undefined4 *)((int)puVar15 + iVar4);
                if (puVar15 == puVar1) {
                    *param_4 = (int)puVar15 - (int)param_3;
                    if (param_1 + param_2 == pbVar5) {
                        return 0;
                    }
                    if (pbVar5 < param_1 + param_2) {
                        return 0xfffffff8;
                    }
                    return 0xfffffffc;
                }
                if ((uVar8 < 5) || (iVar4 + 3 < 0 == SCARRY4(iVar4, 3))) {
                    *(undefined1 *)puVar15 = *(undefined1 *)puVar1;
                    *(undefined1 *)((int)puVar15 + 1) =
                        *(undefined1 *)((int)puVar1 + 1);
                    puVar3 = (undefined1 *)((int)puVar15 + 2);
                    *puVar3 = *(undefined1 *)((int)puVar1 + 2);
                    puVar17 = (undefined1 *)((int)puVar1 + 3);
                    do {
                        puVar18 = puVar17 + 1;
                        puVar3 = puVar3 + 1;
                        *puVar3 = *puVar17;
                        puVar17 = puVar18;
                    } while (puVar18 !=
                             (undefined1 *)((int)puVar1 + 3) + uVar8);
                    puVar15 = (undefined4 *)((int)puVar15 + uVar8 + 3);
                } else {
                    puVar12 = puVar1 + 1;
                    uVar16 = uVar8 - 5 >> 2;
                    *puVar15 = *puVar1;
                    puVar1 = puVar15 + 1;
                    puVar13 = puVar12;
                    do {
                        puVar9 = puVar1 + 1;
                        *puVar1 = *puVar13;
                        puVar1 = puVar9;
                        puVar13 = puVar13 + 1;
                    } while (puVar9 != puVar15 + uVar16 + 2);
                    iVar4 = uVar8 + uVar16 * -4 + -5;
                    puVar15 = puVar15 + 1 + uVar16 + 1;
                    if (iVar4 != 0) {
                        puVar17 = (undefined1 *)((int)puVar15 + -1);
                        puVar1 = puVar12 + uVar16 + 1;
                        do {
                            puVar13 = (undefined4 *)((int)puVar1 + 1);
                            puVar17 = puVar17 + 1;
                            *puVar17 = *(undefined1 *)puVar1;
                            puVar1 = puVar13;
                        } while (puVar13 !=
                                 (undefined4 *)((int)(puVar12 + uVar16 + 1) +
                                                iVar4));
                        puVar15 = (undefined4 *)((int)puVar15 + iVar4);
                    }
                }
                uVar16 = (uint)(*pbVar6 >> 6);
                if (uVar16 == 0)
                    goto LAB_00021840;
            LAB_000218d0:
                pbVar7 = (byte *)((int)puVar15 + -1);
                pbVar6 = pbVar5 + uVar16;
                do {
                    pbVar14 = pbVar5 + 1;
                    pbVar7 = pbVar7 + 1;
                    *pbVar7 = *pbVar5;
                    pbVar5 = pbVar14;
                } while (pbVar14 != pbVar6);
                puVar1 = (undefined4 *)((int)puVar15 + uVar16);
            }
            uVar2 = ~(uVar8 | uVar2 << 5);
            puVar18 = (undefined1 *)((int)puVar15 + uVar2 + 2);
            pbVar5 = pbVar6 + 1;
            *(undefined1 *)puVar15 = *(undefined1 *)((int)puVar15 + uVar2);
            puVar3 = (undefined1 *)((int)puVar15 + 1);
            *puVar3 = *(undefined1 *)((int)puVar15 + uVar2 + 1);
            puVar17 = puVar18;
            do {
                puVar10 = puVar17 + 1;
                puVar3 = puVar3 + 1;
                *puVar3 = *puVar17;
                puVar17 = puVar10;
            } while (puVar10 != puVar18 + ((uVar16 >> 5) - 1));
            puVar15 = (undefined4 *)((int)puVar15 + (uVar16 >> 5) + 1);
            goto LAB_00021840;
        }
        uVar16 = (uint)pbVar5[1];
        pbVar6 = pbVar5 + 2;
        if (uVar16 < 0xf8) {
            uVar16 = uVar16 + 0x20;
            goto LAB_0002186c;
        }
        iVar4 = uVar16 - 0xf8;
        if (iVar4 == 0) {
            iVar11 = 0x118;
        } else {
            iVar11 = 0x100;
            do {
                iVar4 = iVar4 + -1;
                iVar11 = iVar11 << 1;
            } while (iVar4 != 0);
        }
        do {
            iVar11 = iVar11 + -8;
            pbVar5 = pbVar6 + 8;
            puVar1 = puVar15 + 2;
            *puVar15 = *(undefined4 *)pbVar6;
            puVar15[1] = *(undefined4 *)(pbVar6 + 4);
            pbVar6 = pbVar5;
            puVar15 = puVar1;
        } while (iVar11 != 0);
    } while (true);
}

/* WARNING: Type propagation algorithm not settling */

undefined4 lzo1c_decompress_safe(byte *param_1, int param_2, byte *param_3,
                                 int *param_4)

{
    uint uVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte *pbVar4;
    int iVar5;
    byte *pbVar6;
    byte *pbVar7;
    byte *pbVar8;
    uint uVar9;
    int iVar10;
    byte *pbVar11;
    bool bVar12;

    pbVar2 = param_1 + param_2;
    iVar5 = *param_4;
    pbVar3 = param_3;
    if (param_1 < pbVar2) {
        do {
            while (true) {
                pbVar8 = (byte *)(uint)*param_1;
                pbVar4 = param_1 + 1;
                if ((byte *)0x1f < pbVar8)
                    goto LAB_00021c14;
                if (pbVar8 == (byte *)0x0)
                    break;
            LAB_00021d08:
                param_1 = pbVar4;
                if (pbVar2 + -(int)param_1 < pbVar8) {
                LAB_00021fbc:
                    *param_4 = (int)pbVar3 - (int)param_3;
                    return 0xfffffffc;
                }
                if (param_3 + (iVar5 - (int)pbVar3) < pbVar8) {
                LAB_00021ed8:
                    *param_4 = (int)pbVar3 - (int)param_3;
                    return 0xfffffffb;
                }
                if (pbVar8 < (byte *)0x4)
                    goto LAB_00021df0;
                iVar10 = ((uint)(pbVar8 + -4) & 0xfffffffc) + 4;
                pbVar7 = pbVar3 + iVar10;
                pbVar4 = param_1;
                do {
                    pbVar11 = pbVar3;
                    pbVar3 = pbVar11 + 4;
                    *(undefined4 *)pbVar11 = *(undefined4 *)pbVar4;
                    pbVar4 = pbVar4 + 4;
                } while (pbVar7 != pbVar3);
                uVar9 = (uint)pbVar8 & 3;
                pbVar7 = param_1 + iVar10;
                if (uVar9 != 0) {
                    pbVar11 = pbVar11 + 3;
                    pbVar4 = pbVar7 + uVar9;
                    pbVar8 = pbVar7;
                    do {
                        pbVar7 = pbVar8 + 1;
                        pbVar11 = pbVar11 + 1;
                        *pbVar11 = *pbVar8;
                        pbVar8 = pbVar7;
                    } while (pbVar4 != pbVar7);
                    pbVar3 = pbVar3 + uVar9;
                }
            LAB_00021e0c:
                if (pbVar2 <= pbVar7) {
                LAB_00021fe0:
                    iVar5 = (int)pbVar3 - (int)param_3;
                    goto LAB_00021fe4;
                }
                pbVar8 = (byte *)(uint)*pbVar7;
                pbVar4 = pbVar7 + 1;
                if (pbVar8 < (byte *)0x20) {
                    if ((uint)((int)pbVar2 - (int)pbVar4) < 2)
                        goto LAB_00021fbc;
                    if (param_3 + (iVar5 - (int)pbVar3) < (byte *)0x4)
                        goto LAB_00021ed8;
                    pbVar11 = pbVar3;
                    pbVar4 = pbVar7 + 4;
                    while (true) {
                        uVar9 = ~((uint)pbVar8 | (uint)pbVar4[-3] << 5);
                        pbVar8 = pbVar11 + uVar9;
                        if (pbVar8 < param_3 || pbVar11 <= pbVar8)
                            goto LAB_00021ff4;
                        pbVar3 = pbVar11 + 4;
                        *pbVar11 = pbVar11[uVar9];
                        pbVar11[1] = pbVar8[1];
                        pbVar11[2] = pbVar8[2];
                        pbVar11[3] = pbVar4[-2];
                        if (pbVar2 <= pbVar4 + -1)
                            goto LAB_00021fe0;
                        pbVar8 = (byte *)(uint)pbVar4[-1];
                        if ((byte *)0x1f < pbVar8)
                            break;
                        if ((uint)((int)pbVar2 - (int)pbVar4) < 2)
                            goto LAB_00021fbc;
                        pbVar11 = pbVar3;
                        pbVar4 = pbVar4 + 3;
                        if (param_3 + (iVar5 - (int)pbVar3) < (byte *)0x4)
                            goto LAB_00021ed8;
                    }
                }
            LAB_00021c14:
                pbVar11 = pbVar3;
                if (pbVar8 < (byte *)0x40) {
                    uVar9 = (uint)pbVar8 & 0x1f;
                    if (uVar9 == 0) {
                        pbVar8 = pbVar4;
                        iVar10 = 0;
                        while (true) {
                            if (pbVar8 == pbVar2)
                                goto LAB_00021fbc;
                            pbVar4 = pbVar8 + 1;
                            if (*pbVar8 != 0)
                                break;
                            bVar12 = iVar10 == -0x1ff;
                            pbVar8 = pbVar4;
                            iVar10 = iVar10 + 0xff;
                            if (bVar12)
                                goto LAB_00021ed8;
                        }
                        uVar9 = (uint)*pbVar8 + iVar10 + 0x1f;
                    }
                    if ((uint)((int)pbVar2 - (int)pbVar4) < 2)
                        goto LAB_00021fbc;
                    param_1 = pbVar4 + 2;
                    iVar10 = -((*pbVar4 & 0x3f) + (uint)pbVar4[1] * 0x40);
                    pbVar8 = pbVar3 + iVar10;
                    if (pbVar3 == pbVar8) {
                        *param_4 = (int)pbVar3 - (int)param_3;
                        if (pbVar2 == param_1) {
                            return 0;
                        }
                        if (param_1 < pbVar2) {
                            return 0xfffffff8;
                        }
                        return 0xfffffffc;
                    }
                    if (pbVar8 < param_3 || pbVar3 <= pbVar8)
                        goto LAB_00021ff4;
                    if (param_3 + (iVar5 - (int)pbVar3) < (byte *)(uVar9 + 3))
                        goto LAB_00021ed8;
                    if ((uVar9 < 5) || (iVar10 + 3 < 0 == SCARRY4(iVar10, 3))) {
                        *pbVar3 = *pbVar8;
                        pbVar3[1] = pbVar8[1];
                        pbVar11 = pbVar3 + 2;
                        *pbVar11 = pbVar8[2];
                        pbVar7 = pbVar8 + 3;
                        do {
                            pbVar6 = pbVar7 + 1;
                            pbVar11 = pbVar11 + 1;
                            *pbVar11 = *pbVar7;
                            pbVar7 = pbVar6;
                        } while (pbVar8 + 3 + uVar9 != pbVar6);
                        pbVar3 = pbVar3 + uVar9 + 3;
                    } else {
                        pbVar11 = pbVar8 + 4;
                        uVar1 = uVar9 - 5 >> 2;
                        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar8;
                        pbVar8 = pbVar3 + 4;
                        pbVar7 = pbVar11;
                        do {
                            pbVar6 = pbVar8 + 4;
                            *(undefined4 *)pbVar8 = *(undefined4 *)pbVar7;
                            pbVar8 = pbVar6;
                            pbVar7 = pbVar7 + 4;
                        } while (pbVar3 + (uVar1 + 2) * 4 != pbVar6);
                        iVar10 = uVar9 + uVar1 * -4 + -5;
                        pbVar3 = pbVar3 + 4 + (uVar1 + 1) * 4;
                        if (iVar10 != 0) {
                            pbVar7 = pbVar3 + -1;
                            pbVar8 = pbVar11 + (uVar1 + 1) * 4;
                            do {
                                pbVar6 = pbVar8 + 1;
                                pbVar7 = pbVar7 + 1;
                                *pbVar7 = *pbVar8;
                                pbVar8 = pbVar6;
                            } while (pbVar6 !=
                                     pbVar11 + (uVar1 + 1) * 4 + iVar10);
                            pbVar3 = pbVar3 + iVar10;
                        }
                    }
                    pbVar8 = (byte *)(uint)(*pbVar4 >> 6);
                    if (pbVar8 != (byte *)0x0) {
                        if (pbVar8 <= pbVar2 + -(int)param_1) {
                            if (pbVar8 <= param_3 + (iVar5 - (int)pbVar3))
                                goto LAB_00021df0;
                            goto LAB_00021ed8;
                        }
                        goto LAB_00021fbc;
                    }
                    goto LAB_00021c00;
                }
                if (pbVar4 == pbVar2)
                    goto LAB_00021fbc;
                param_1 = pbVar4 + 1;
                pbVar4 = pbVar3 + ~((uint)pbVar8 & 0x1f | (uint)*pbVar4 << 5);
                if (pbVar4 < param_3 || pbVar3 <= pbVar4) {
                LAB_00021ff4:
                    *param_4 = (int)pbVar11 - (int)param_3;
                    return 0xfffffffa;
                }
                uVar9 = (uint)pbVar8 >> 5;
                if (param_3 + (iVar5 - (int)pbVar3) < (byte *)(uVar9 + 1))
                    goto LAB_00021ed8;
                *pbVar3 = *pbVar4;
                pbVar7 = pbVar3 + 1;
                *pbVar7 = pbVar4[1];
                pbVar8 = pbVar4 + 2;
                do {
                    pbVar11 = pbVar8 + 1;
                    pbVar7 = pbVar7 + 1;
                    *pbVar7 = *pbVar8;
                    pbVar8 = pbVar11;
                } while (pbVar4 + 2 + (uVar9 - 1) != pbVar11);
                pbVar3 = pbVar3 + uVar9 + 1;
                if (pbVar2 <= param_1)
                    goto LAB_00021c08;
            }
            if (pbVar4 == pbVar2)
                goto LAB_00021fbc;
            uVar9 = (uint)param_1[1];
            pbVar4 = param_1 + 2;
            if (uVar9 < 0xf8) {
                pbVar8 = (byte *)(uVar9 + 0x20);
                goto LAB_00021d08;
            }
            iVar10 = uVar9 - 0xf8;
            if (iVar10 == 0) {
                pbVar8 = (byte *)0x118;
            } else {
                pbVar8 = (byte *)0x100;
                do {
                    iVar10 = iVar10 + -1;
                    pbVar8 = (byte *)((int)pbVar8 << 1);
                } while (iVar10 != 0);
            }
            if (pbVar2 + -(int)pbVar4 < pbVar8)
                goto LAB_00021fbc;
            pbVar7 = pbVar3;
            if (param_3 + (iVar5 - (int)pbVar3) < pbVar8)
                goto LAB_00021ed8;
            do {
                pbVar8 = pbVar8 + -8;
                param_1 = pbVar4 + 8;
                pbVar3 = pbVar7 + 8;
                *(undefined4 *)pbVar7 = *(undefined4 *)pbVar4;
                *(undefined4 *)(pbVar7 + 4) = *(undefined4 *)(pbVar4 + 4);
                pbVar4 = param_1;
                pbVar7 = pbVar3;
            } while (pbVar8 != (byte *)0x0);
        LAB_00021c00:
        } while (param_1 < pbVar2);
    LAB_00021c08:
        iVar5 = (int)pbVar3 - (int)param_3;
    } else {
        iVar5 = 0;
    }
LAB_00021fe4:
    *param_4 = iVar5;
    return 0xfffffff9;
LAB_00021df0:
    pbVar11 = pbVar3 + -1;
    pbVar4 = param_1;
    do {
        pbVar7 = pbVar4 + 1;
        pbVar11 = pbVar11 + 1;
        *pbVar11 = *pbVar4;
        pbVar4 = pbVar7;
    } while (param_1 + (int)pbVar8 != pbVar7);
    pbVar3 = pbVar3 + (int)pbVar8;
    goto LAB_00021e0c;
}

char *_lzo1c_store_run(char *param_1, char *param_2, uint param_3)

{
    char *pcVar1;
    uint uVar2;
    char *pcVar3;
    char *pcVar4;
    uint uVar5;
    int iVar6;

    if (0x1ff < param_3) {
        if (0x7fff < param_3) {
            uVar2 = param_3 - 0x8000;
            uVar5 = uVar2 >> 0xf;
            pcVar1 = param_1 + 2;
            pcVar3 = param_2;
            do {
                pcVar1[-2] = '\0';
                pcVar1[-1] = -1;
                pcVar4 = pcVar1 + 0x8002;
                memcpy(pcVar1, pcVar3, 0x8000);
                pcVar1 = pcVar4;
                pcVar3 = pcVar3 + 0x8000;
            } while (pcVar4 != param_1 + uVar5 * 0x8002 + 0x8004);
            param_3 = param_3 & 0x7fff;
            param_1 = param_1 + (uVar5 + 1) * 0x8002;
            param_2 = param_2 + (uVar2 & 0xffff8000) + 0x8000;
        }
        iVar6 = 6;
        uVar5 = 0x4000;
        do {
            while (uVar5 <= param_3) {
                pcVar1 = param_1 + 2;
                *param_1 = '\0';
                param_1[1] = (char)iVar6 + -8;
                param_1 = pcVar1 + uVar5;
                param_3 = param_3 - uVar5;
                memcpy(pcVar1, param_2, uVar5);
                iVar6 = iVar6 + -1;
                param_2 = param_2 + uVar5;
                uVar5 = uVar5 >> 1;
                if (iVar6 == 0)
                    goto joined_r0x00022150;
            }
            iVar6 = iVar6 + -1;
            uVar5 = uVar5 >> 1;
        } while (iVar6 != 0);
    }
joined_r0x00022150:
    for (; 0x117 < param_3; param_3 = param_3 - 0x118) {
        *param_1 = '\0';
        param_1[1] = -8;
        memcpy(param_1 + 2, param_2, 0x118);
        param_2 = param_2 + 0x118;
        param_1 = param_1 + 0x11a;
    }
    if (param_3 < 0x20) {
        if (param_3 != 0) {
            *param_1 = (char)param_3;
            pcVar1 = param_1;
            pcVar3 = param_2;
            do {
                pcVar4 = pcVar3 + 1;
                pcVar1 = pcVar1 + 1;
                *pcVar1 = *pcVar3;
                pcVar3 = pcVar4;
            } while (pcVar4 != param_2 + param_3);
            return param_1 + param_3 + 1;
        }
    } else {
        *param_1 = '\0';
        pcVar3 = param_1 + 1;
        *pcVar3 = (char)param_3 + -0x20;
        pcVar1 = param_2;
        do {
            pcVar4 = pcVar1 + 1;
            pcVar3 = pcVar3 + 1;
            *pcVar3 = *pcVar1;
            pcVar1 = pcVar4;
        } while (pcVar4 != param_2 + param_3);
        param_1 = param_1 + param_3 + 2;
    }
    return param_1;
}

undefined4 FUN_0002220c(byte *param_1, int param_2, byte *param_3, int *param_4,
                        int param_5)

{
    int iVar1;
    char cVar2;
    byte *pbVar3;
    byte *pbVar4;
    uint uVar5;
    undefined4 *puVar6;
    uint uVar7;
    byte *pbVar8;
    byte *pbVar9;
    byte *pbVar10;
    uint uVar11;
    byte *pbVar12;
    byte *pbVar13;
    uint local_30;
    uint local_2c;

    pbVar12 = param_1 + param_2;
    pbVar3 = param_1;
    pbVar4 = param_3;
    pbVar13 = param_1 + 1;
    do {
        while (true) {
            uVar11 = (uint)pbVar13[3];
            uVar7 = ((uint)*pbVar13 ^
                     ((uint)pbVar13[1] ^ ((uint)pbVar13[2] ^ uVar11 << 6) << 5)
                         << 5) *
                        0x21 >>
                    5;
            uVar5 = uVar7 & 0x3fff;
            pbVar10 = *(byte **)(param_5 + uVar5 * 4);
            puVar6 = (undefined4 *)(param_5 + uVar5 * 4);
            if (param_1 <= pbVar10)
                break;
        LAB_000222a0:
            *puVar6 = pbVar13;
            pbVar13 = pbVar13 + 1;
            if (param_1 + param_2 + -9 <= pbVar13)
                goto LAB_000222bc;
        }
        local_30 = (int)pbVar13 - (int)pbVar10;
        local_2c = local_30 - 1;
        if (0x3ffe < local_2c)
            goto LAB_000222a0;
        if ((0x800 < local_30) && (pbVar10[3] != uVar11)) {
            uVar7 = uVar7 & 0x7ff ^ 0x201f;
            pbVar10 = *(byte **)(param_5 + uVar7 * 4);
            puVar6 = (undefined4 *)(param_5 + uVar7 * 4);
            if (param_1 <= pbVar10) {
                local_30 = (int)pbVar13 - (int)pbVar10;
                local_2c = local_30 - 1;
                if ((local_2c < 0x3fff) &&
                    ((local_30 < 0x801 || (pbVar10[3] == uVar11))))
                    goto LAB_00022440;
            }
            goto LAB_000222a0;
        }
    LAB_00022440:
        if (((uint)*pbVar10 != (uint)*pbVar13) ||
            (((uint)pbVar10[1] != (uint)pbVar13[1] ||
              ((uint)pbVar10[2] != (uint)pbVar13[2]))))
            goto LAB_000222a0;
        uVar7 = (int)pbVar13 - (int)pbVar3;
        *puVar6 = pbVar13;
        pbVar9 = pbVar3;
        if (uVar7 != 0) {
            if (param_3 < pbVar4 && uVar7 < 4) {
                pbVar4[-2] = pbVar4[-2] | (byte)uVar7;
                pbVar9 = pbVar4;
            } else {
                pbVar9 = pbVar4 + 1;
                if (uVar7 < 0x20) {
                    *pbVar4 = (byte)uVar7;
                } else {
                    *pbVar4 = 0;
                    pbVar4 = pbVar9;
                    for (uVar5 = uVar7 - 0x1f; 0xff < uVar5;
                         uVar5 = uVar5 - 0xff) {
                        *pbVar4 = 0;
                        pbVar4 = pbVar4 + 1;
                    }
                    pbVar9 = pbVar4 + 1;
                    *pbVar4 = (byte)uVar5;
                }
            }
            pbVar4 = pbVar9 + -1;
            do {
                pbVar8 = pbVar3 + 1;
                pbVar4 = pbVar4 + 1;
                *pbVar4 = *pbVar3;
                pbVar3 = pbVar8;
            } while (pbVar13 != pbVar8);
            pbVar4 = pbVar9 + uVar7;
            pbVar9 = pbVar13;
        }
        if (pbVar10[3] == pbVar13[3]) {
            pbVar8 = pbVar13 + 5;
            if ((((pbVar10[4] != pbVar13[4]) ||
                  (pbVar8 = pbVar13 + 6, pbVar10[5] != pbVar13[5])) ||
                 (pbVar8 = pbVar13 + 7, pbVar10[6] != pbVar13[6])) ||
                ((pbVar8 = pbVar13 + 8,
                  pbVar10[7] != pbVar13[7] ||
                      (pbVar8 = pbVar13 + 9, pbVar10[8] != pbVar13[8]))))
                goto LAB_00022484;
            pbVar10 = pbVar10 + 8;
            do {
                pbVar3 = pbVar8;
                if (pbVar12 <= pbVar3)
                    break;
                pbVar10 = pbVar10 + 1;
                pbVar8 = pbVar3 + 1;
            } while (*pbVar10 == *pbVar3);
            uVar7 = (int)pbVar3 - (int)pbVar9;
            pbVar10 = pbVar4 + 1;
            if (uVar7 < 0x22) {
                *pbVar4 =
                    ~((byte) ~(byte)((uVar7 - 2) * 0x8000000 >> 0x18) >> 3);
            } else {
                *pbVar4 = 0xe0;
                pbVar4 = pbVar10;
                for (uVar7 = uVar7 - 0x21; pbVar10 = pbVar4 + 1, 0xff < uVar7;
                     uVar7 = uVar7 - 0xff) {
                    *pbVar4 = 0;
                    pbVar4 = pbVar10;
                }
                *pbVar4 = (byte)uVar7;
            }
            pbVar13 = pbVar10 + 2;
            *pbVar10 = (byte)(local_30 << 2);
            pbVar10[1] = (byte)(local_30 >> 6);
        } else {
            pbVar8 = pbVar13 + 4;
        LAB_00022484:
            pbVar3 = pbVar8 + -1;
            cVar2 = (char)((int)pbVar3 - (int)pbVar9);
            if (local_30 < 0x801) {
                pbVar13 = pbVar4 + 2;
                *pbVar4 = (byte)(local_2c << 2) & 0x1c | (cVar2 + -2) * ' ';
                pbVar4[1] = (byte)(local_2c >> 3);
            } else if ((int)pbVar3 - (int)pbVar9 == 3 &&
                       (uVar7 != 0 && local_30 < 0x1001)) {
                pbVar13 = pbVar4 + 2;
                *pbVar4 = (byte)(local_2c << 2) & 0x1c;
                pbVar4[1] = (byte)(local_2c >> 3);
            } else {
                pbVar13 = pbVar4 + 3;
                pbVar4[1] = (byte)(local_30 << 2);
                pbVar4[2] = (byte)(local_30 >> 6);
                *pbVar4 = cVar2 - 2U | 0xe0;
            }
        }
        pbVar4 = pbVar13;
        pbVar13 = pbVar3;
    } while (pbVar3 < param_1 + param_2 + -9);
LAB_000222bc:
    if (pbVar12 == pbVar3)
        goto LAB_0002232c;
    uVar5 = (int)pbVar12 - (int)pbVar3;
    uVar7 = uVar5;
    if (param_3 < pbVar4 && uVar5 < 4) {
        pbVar4[-2] = pbVar4[-2] | (byte)uVar5;
        pbVar13 = pbVar4;
    } else {
        pbVar13 = pbVar4 + 1;
        if (uVar5 < 0x20) {
            *pbVar4 = (byte)uVar5;
            pbVar4 = pbVar13;
            if (uVar5 < 8)
                goto LAB_000222f8;
        } else {
            *pbVar4 = 0;
            for (uVar7 = uVar5 - 0x1f; 0xff < uVar7; uVar7 = uVar7 - 0xff) {
                *pbVar13 = 0;
                pbVar13 = pbVar13 + 1;
            }
            *pbVar13 = (byte)uVar7;
            pbVar4 = pbVar13 + 1;
        }
        uVar7 = uVar5 - 8 >> 3;
        iVar1 = (uVar7 + 1) * 8;
        pbVar10 = pbVar3 + iVar1;
        pbVar13 = pbVar3;
        pbVar12 = pbVar4;
        do {
            pbVar3 = pbVar13 + 8;
            *(undefined4 *)pbVar12 = *(undefined4 *)pbVar13;
            *(undefined4 *)(pbVar12 + 4) = *(undefined4 *)(pbVar13 + 4);
            pbVar13 = pbVar3;
            pbVar12 = pbVar12 + 8;
        } while (pbVar3 != pbVar10);
        pbVar13 = pbVar4 + iVar1;
        uVar7 = (uVar5 - 8) + uVar7 * -8;
    }
LAB_000222f8:
    pbVar10 = pbVar13;
    pbVar12 = pbVar3;
    if (3 < uVar7) {
        pbVar12 = pbVar3 + 4;
        uVar7 = uVar7 - 4;
        pbVar10 = pbVar13 + 4;
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar3;
    }
    if (uVar7 != 0) {
        pbVar10 = pbVar10 + -1;
        pbVar3 = pbVar12;
        do {
            pbVar13 = pbVar3 + 1;
            pbVar10 = pbVar10 + 1;
            *pbVar10 = *pbVar3;
            pbVar3 = pbVar13;
        } while (pbVar13 != pbVar12 + uVar7);
    }
    pbVar4 = pbVar4 + uVar5;
LAB_0002232c:
    *param_4 = (int)pbVar4 - (int)param_3;
    return 0;
}

int lzo1f_1_compress(undefined1 *param_1, uint param_2, undefined1 *param_3,
                     int *param_4)

{
    int iVar1;
    undefined1 *puVar2;
    undefined1 *puVar3;
    undefined1 *puVar4;

    if (param_2 == 0) {
        *param_4 = 0;
    } else if (param_2 < 0xb) {
        *param_3 = (char)param_2;
        puVar2 = param_3;
        puVar4 = param_1;
        do {
            puVar3 = puVar4 + 1;
            puVar2 = puVar2 + 1;
            *puVar2 = *puVar4;
            puVar4 = puVar3;
        } while (puVar3 != param_1 + param_2);
        param_3 = param_3 + param_2 + 1;
        *param_4 = param_2 + 1;
    } else {
        iVar1 = FUN_0002220c();
        if (iVar1 != 0) {
            return iVar1;
        }
        param_3 = param_3 + *param_4;
    }
    *param_3 = 0xe1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_4 = *param_4 + 3;
    return 0;
}

byte *FUN_000227e0(byte *param_1, byte *param_2, uint param_3, byte *param_4)

{
    byte *pbVar1;
    byte *pbVar3;
    byte *pbVar4;
    uint uVar5;
    byte *pbVar2;

    if (param_4 < param_1 && param_3 < 4) {
        param_1[-2] = param_1[-2] | (byte)param_3;
        pbVar4 = param_1;
    } else {
        pbVar4 = param_1 + 1;
        if (param_3 < 0x20) {
            *param_1 = (byte)param_3;
        } else {
            *param_1 = 0;
            for (uVar5 = param_3 - 0x1f; pbVar2 = pbVar4, 0xff < uVar5;
                 uVar5 = uVar5 - 0xff) {
                *pbVar2 = 0;
                pbVar4 = pbVar2 + 1;
                param_1 = pbVar2;
            }
            pbVar4 = param_1 + 2;
            *pbVar2 = (byte)uVar5;
        }
    }
    pbVar3 = pbVar4 + -1;
    pbVar2 = param_2;
    do {
        pbVar1 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
        *pbVar3 = *pbVar2;
        pbVar2 = pbVar1;
    } while (pbVar1 != param_2 + param_3);
    return pbVar4 + param_3;
}

undefined4 FUN_00022888(int param_1, int param_2, int param_3, int param_4)

{
    ushort uVar1;
    short sVar2;
    char *pcVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    uint uVar10;
    undefined2 uVar11;
    int iVar12;
    char *pcVar13;
    char cVar14;
    uint uVar15;
    char *pcVar16;
    undefined1 uVar17;
    char *pcVar18;
    undefined1 *puVar19;

    if (param_4 == 0) {
        uVar15 = *(uint *)(param_2 + 0x44);
        iVar12 = uVar15 + 1;
        iVar7 = uVar15 + 2;
        uVar11 = (undefined2)uVar15;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
    } else {
        param_3 = param_3 - param_4;
        uVar15 = *(uint *)(param_2 + 0x44);
        iVar5 = param_3;
        if (param_3 == 0) {
            uVar11 = (undefined2)uVar15;
            iVar12 = uVar15 + 1;
            iVar7 = uVar15 + 2;
        } else {
            do {
                iVar7 = *(int *)(param_2 + 0x48);
                if (*(int *)(param_2 + 0x54) == 0) {
                    iVar12 = param_2 + iVar7;
                    iVar12 = param_2 + (((uint) * (byte *)(iVar12 + 0x5e) ^
                                         ((uint) * (byte *)(iVar12 + 0x5d) ^
                                          (uint) * (byte *)(iVar12 + 0x5c) << 5)
                                             << 5) *
                                            0x13ebe000 >>
                                        0x12) *
                                           2;
                    *(short *)(iVar12 + 0x1f058) =
                        *(short *)(iVar12 + 0x1f058) + -1;
                } else {
                    *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + -1;
                }
                uVar8 = uVar15 + 1;
                iVar9 = param_2 + uVar15 * 2;
                iVar12 = param_2 +
                         (((uint) * (byte *)(param_2 + uVar15 + 0x5e) ^
                           ((uint) * (byte *)(param_2 + uVar8 + 0x5c) ^
                            (uint) * (byte *)(param_2 + uVar15 + 0x5c) << 5)
                               << 5) *
                              0x13ebe000 >>
                          0x12) *
                             2;
                sVar2 = *(short *)(iVar12 + 0x1f058);
                if (sVar2 == 0) {
                    uVar11 = 0xffff;
                } else {
                    uVar11 = *(undefined2 *)(iVar12 + 0x505c);
                }
                *(undefined2 *)(iVar9 + 0xd05c) = uVar11;
                *(short *)(iVar12 + 0x505c) = (short)uVar15;
                uVar10 = *(uint *)(param_2 + 4);
                *(short *)(iVar9 + 0x1605a) = (short)uVar10 + 1;
                *(short *)(iVar12 + 0x1f058) = sVar2 + 1;
                iVar12 = *(int *)(param_2 + 0x2c);
                uVar15 = *(uint *)(param_2 + 0x40);
                puVar19 = *(undefined1 **)(iVar12 + 0x1c);
                if (puVar19 < *(undefined1 **)(iVar12 + 0x24)) {
                    *(undefined1 **)(iVar12 + 0x1c) = puVar19 + 1;
                    uVar17 = *puVar19;
                    *(undefined1 *)(param_2 + uVar15 + 0x5c) = uVar17;
                    if (uVar15 < uVar10) {
                        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar15) =
                            uVar17;
                        uVar15 = *(uint *)(param_2 + 0x40);
                        iVar7 = *(int *)(param_2 + 0x48);
                        uVar8 = *(int *)(param_2 + 0x44) + 1;
                    }
                } else {
                    if (*(int *)(param_2 + 0x24) != 0) {
                        *(int *)(param_2 + 0x24) =
                            *(int *)(param_2 + 0x24) + -1;
                    }
                    *(undefined1 *)(param_2 + uVar15 + 0x5c) = 0;
                    if (uVar15 < uVar10) {
                        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar15) = 0;
                        uVar15 = *(uint *)(param_2 + 0x40);
                        iVar7 = *(int *)(param_2 + 0x48);
                        uVar8 = *(int *)(param_2 + 0x44) + 1;
                    }
                }
                uVar4 = *(uint *)(param_2 + 0x4c);
                *(uint *)(param_2 + 0x40) = uVar15 + 1;
                uVar10 = iVar7 + 1;
                if (uVar15 + 1 == uVar4) {
                    *(undefined4 *)(param_2 + 0x40) = 0;
                }
                if (uVar4 == uVar8) {
                    uVar6 = 0;
                    iVar7 = 2;
                    *(undefined4 *)(param_2 + 0x44) = 0;
                    iVar12 = 1;
                    uVar15 = uVar6;
                } else {
                    *(uint *)(param_2 + 0x44) = uVar8;
                    iVar12 = uVar8 + 1;
                    iVar7 = uVar8 + 2;
                    uVar6 = uVar8 & 0xffff;
                    uVar15 = uVar8;
                }
                uVar11 = (undefined2)uVar6;
                if (uVar4 == uVar10) {
                    uVar10 = 0;
                }
                iVar5 = iVar5 + -1;
                *(uint *)(param_2 + 0x48) = uVar10;
            } while (iVar5 != 0);
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1 + param_3;
    }
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 2;
    uVar10 = (uint) * (byte *)(param_2 + uVar15 + 0x5c);
    iVar5 = param_2 +
            (((uint) * (byte *)(param_2 + iVar7 + 0x5c) ^
              ((uint) * (byte *)(param_2 + iVar12 + 0x5c) ^ uVar10 << 5) << 5) *
                 0x13ebe000 >>
             0x12) *
                2;
    uVar1 = *(ushort *)(iVar5 + 0x1f058);
    uVar8 = (uint)uVar1;
    if (uVar8 == 0) {
        *(undefined2 *)(param_2 + (uVar15 + 0x682c) * 2 + 4) = 0xffff;
        uVar6 = 0xffff;
        *(undefined2 *)(iVar5 + 0x1f058) = 1;
        uVar4 = uVar8;
    } else {
        uVar6 = (uint) * (ushort *)(iVar5 + 0x505c);
        *(ushort *)(param_2 + (uVar15 + 0x682c) * 2 + 4) =
            *(ushort *)(iVar5 + 0x505c);
        *(ushort *)(iVar5 + 0x1f058) = uVar1 + 1;
        uVar4 = *(uint *)(param_2 + 0xc);
        if (uVar4 == 0 || uVar8 <= uVar4) {
            uVar4 = uVar8;
        }
    }
    *(undefined2 *)(iVar5 + 0x505c) = uVar11;
    uVar8 = *(uint *)(param_2 + 0x24);
    *(uint *)(param_2 + 0x28) = uVar10;
    if (uVar8 < 3) {
        uVar10 = *(uint *)(param_2 + 4);
        iVar5 = *(int *)(param_2 + 0x20);
        if (uVar8 == 0) {
            uVar6 = 0xffffffff;
        }
        if (uVar8 == 0) {
            *(uint *)(param_2 + 0x28) = uVar6;
        }
        uVar8 = *(uint *)(param_2 + 0x1c);
        *(short *)(param_2 + (uVar15 + 0xb02c) * 2 + 2) = (short)uVar10 + 1;
        goto LAB_00022acc;
    }
    iVar7 = param_2 + 0x5c;
    pcVar13 = (char *)(iVar7 + uVar15);
    iVar5 = uVar4 - 1;
    cVar14 = pcVar13[1];
    if (uVar4 == 0) {
        uVar8 = *(uint *)(param_2 + 0x1c);
    LAB_00022e80:
        iVar5 = *(int *)(param_2 + 0x20);
    } else {
        uVar10 = 2;
        do {
            pcVar16 = (char *)(iVar7 + uVar6);
            if ((((pcVar16[uVar10 - 1] == cVar14) &&
                  (pcVar16[uVar10] == pcVar13[uVar10])) &&
                 (*pcVar16 == *pcVar13)) &&
                (pcVar16[1] == pcVar13[1])) {
                pcVar16 = pcVar16 + 2;
                pcVar3 = pcVar13 + 3;
                do {
                    pcVar18 = pcVar3;
                    if ((char *)(iVar7 + uVar8 + uVar15) <= pcVar18)
                        break;
                    pcVar16 = pcVar16 + 1;
                    pcVar3 = pcVar18 + 1;
                } while (*pcVar18 == *pcVar16);
                uVar4 = (int)pcVar18 - (int)pcVar13;
                if (uVar10 < uVar4) {
                    *(uint *)(param_2 + 0x1c) = uVar4;
                    *(uint *)(param_2 + 0x30) = uVar6;
                    if (uVar8 == uVar4)
                        goto LAB_00022e10;
                    if ((*(uint *)(param_2 + 0x10) <= uVar4) ||
                        (*(ushort *)(param_2 + (uVar6 + 0xb02c) * 2 + 2) <
                         uVar4))
                        break;
                    cVar14 = pcVar13[uVar4 - 1];
                    uVar10 = uVar4;
                }
            }
            iVar5 = iVar5 + -1;
            uVar6 = (uint) * (ushort *)(param_2 + 0xd05c + uVar6 * 2);
        } while (iVar5 != -1);
        uVar8 = *(uint *)(param_2 + 0x1c);
        if (uVar8 < 3)
            goto LAB_00022e80;
    LAB_00022e10:
        uVar10 = *(uint *)(param_2 + 0x30);
        if (uVar10 < uVar15) {
            iVar5 = -uVar10;
        } else {
            iVar5 = *(int *)(param_2 + 0x4c) - uVar10;
        }
        iVar5 = uVar15 + iVar5;
        *(int *)(param_2 + 0x20) = iVar5;
    }
    uVar10 = *(uint *)(param_2 + 4);
    *(short *)(param_2 + (uVar15 + 0xb02c) * 2 + 2) = (short)uVar8;
LAB_00022acc:
    iVar7 = *(int *)(param_2 + 0x48);
    if (*(int *)(param_2 + 0x54) == 0) {
        iVar12 = param_2 + iVar7;
        iVar12 = param_2 + (((uint) * (byte *)(iVar12 + 0x5e) ^
                             ((uint) * (byte *)(iVar12 + 0x5d) ^
                              (uint) * (byte *)(iVar12 + 0x5c) << 5)
                                 << 5) *
                                0x13ebe000 >>
                            0x12) *
                               2;
        *(short *)(iVar12 + 0x1f058) = *(short *)(iVar12 + 0x1f058) + -1;
    } else {
        *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + -1;
    }
    iVar12 = *(int *)(param_2 + 0x2c);
    *(uint *)(param_1 + 8) = uVar8;
    *(int *)(param_1 + 0xc) = iVar5;
    puVar19 = *(undefined1 **)(iVar12 + 0x1c);
    uVar15 = *(uint *)(param_2 + 0x40);
    if (puVar19 < *(undefined1 **)(iVar12 + 0x24)) {
        *(undefined1 **)(iVar12 + 0x1c) = puVar19 + 1;
        uVar17 = *puVar19;
        *(undefined1 *)(param_2 + uVar15 + 0x5c) = uVar17;
    } else {
        uVar17 = 0;
        if (*(int *)(param_2 + 0x24) != 0) {
            *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
        *(undefined1 *)(param_2 + uVar15 + 0x5c) = 0;
    }
    if (uVar15 < uVar10) {
        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar15) = uVar17;
        uVar15 = *(uint *)(param_2 + 0x40);
        iVar7 = *(int *)(param_2 + 0x48);
    }
    iVar5 = *(int *)(param_2 + 0x4c);
    *(uint *)(param_2 + 0x40) = uVar15 + 1;
    iVar7 = iVar7 + 1;
    if (uVar15 + 1 == iVar5) {
        *(undefined4 *)(param_2 + 0x40) = 0;
    }
    iVar12 = *(int *)(param_2 + 0x44) + 1;
    if (iVar5 == iVar12) {
        iVar12 = 0;
    }
    *(int *)(param_2 + 0x44) = iVar12;
    if (iVar5 == iVar7) {
        *(undefined4 *)(param_2 + 0x48) = 0;
    }
    if (iVar5 != iVar7) {
        *(int *)(param_2 + 0x48) = iVar7;
    }
    if (*(int *)(param_2 + 0x28) < 0) {
        uVar15 = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
    } else {
        uVar15 = ~*(uint *)(param_2 + 0x24);
        *(uint *)(param_1 + 4) = *(uint *)(param_2 + 0x24) + 1;
    }
    iVar5 = *(int *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + uVar15;
    if (((iVar5 != 0) && (*(code **)(iVar5 + 8) != (code *)0x0)) &&
        (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x30))) {
        (**(code **)(iVar5 + 8))(iVar5, *(uint *)(param_1 + 0x30),
                                 *(undefined4 *)(param_1 + 0x34), 0);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x400;
    }
    return 0;
}

/* WARNING: Type propagation algorithm not settling */

int lzo1f_999_compress_callback(void *param_1, uint param_2, byte *param_3,
                                undefined4 *param_4, undefined4 *param_5,
                                int param_6, int param_7)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    byte *pbVar5;
    uint uVar6;
    byte *pbVar7;
    uint uVar8;
    void *pvVar9;
    bool bVar10;
    bool bVar11;
    void *local_94;
    undefined4 local_88;
    uint local_84;
    uint local_80;
    uint local_7c;
    undefined4 local_78;
    undefined4 local_74;
    void *local_6c;
    void *local_68;
    void *local_64;
    int local_5c;
    undefined4 local_58;
    byte *local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    int local_40;
    uint local_3c;
    uint local_38;
    int local_34;
    int local_30;
    int local_2c;

    pvVar9 = (void *)((int)param_1 + param_2);
    local_88 = 1;
    param_5[2] = 2;
    *param_5 = 0x3fff;
    param_5[0xb] = &local_88;
    param_5[7] = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_74 = 0;
    local_78 = 0;
    local_50 = 0;
    local_54 = (byte *)0x0;
    local_58 = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_40 = 0;
    param_5[8] = 0;
    param_5[5] = 0;
    param_5[6] = 0;
    param_5[1] = 0x800;
    param_5[3] = 0x800;
    param_5[4] = 0x800;
    param_5[0x13] = 0x47ff;
    param_5[0x15] = 0x3fff;
    param_5[0x14] = (int)param_5 + 0x485b;
    local_5c = param_6;
    local_6c = param_1;
    local_68 = param_1;
    local_64 = pvVar9;
    memset(param_5 + 0x7c16, 0, 0x8000);
    param_5[0x10] = 0;
    param_5[0xe] = 0;
    param_5[0xd] = 0;
    param_5[0xf] = 0;
    param_5[0x11] = 0;
    param_5[0x16] = 0;
    param_5[9] = param_2;
    if (param_2 == 0) {
        param_5[0x12] = 0x800;
    } else {
        if (0x800 < param_2) {
            param_5[9] = 0x800;
            memcpy(param_5 + 0x17, param_1, 0x800);
            param_5[0x10] = 0x800;
            param_5[0x12] = 0x800;
            local_6c = (void *)((int)param_1 + 0x800);
            goto LAB_00022fe8;
        }
        memcpy(param_5 + 0x17, param_1, param_2);
        param_5[0x10] = param_2;
        param_5[0x12] = 0x800;
        local_6c = pvVar9;
        if (2 < param_2)
            goto LAB_00022fe8;
    }
    *(undefined1 *)((int)param_5 + param_2 + 0x5e) = 0;
    *(undefined1 *)((int)param_5 + param_2 + 0x5d) = 0;
    *(undefined1 *)((int)param_5 + param_2 + 0x5c) = 0;
LAB_00022fe8:
    param_5[5] = 0;
    if (param_7 != 0) {
        param_5[3] = param_7;
    }
    iVar4 = FUN_00022888(&local_88, param_5, 0);
    if (iVar4 != 0) {
        return iVar4;
    }
    uVar1 = 0;
    pbVar7 = param_3;
    uVar8 = uVar1;
    local_94 = param_1;
    uVar2 = local_80;
    uVar3 = local_7c;
    do {
        while (true) {
            if (local_84 == 0) {
                if (uVar8 != 0) {
                    pbVar7 =
                        (byte *)FUN_000227e0(pbVar7, local_94, uVar8, param_3);
                }
                *pbVar7 = 0xe1;
                pbVar7[1] = 0;
                pbVar7[2] = 0;
                local_54 = pbVar7 + (3 - (int)param_3);
                *param_4 = local_54;
                if (local_5c == 0) {
                    return 0;
                }
                if (*(code **)(local_5c + 8) == (code *)0x0) {
                    return 0;
                }
                (**(code **)(local_5c + 8))(local_5c, local_58);
                return 0;
            }
            local_80 = uVar2;
            local_7c = uVar3;
            if (uVar8 == 0)
                break;
            if (uVar2 < 3)
                goto LAB_000230fc;
            if (uVar8 < 3) {
                iVar4 = 1;
            } else if (uVar8 == 3 || uVar8 == 0x1f) {
                iVar4 = 3;
            } else {
                iVar4 = 1;
            }
            bVar11 = 0x7ff < uVar3;
            bVar10 = uVar3 == 0x800;
            if (uVar3 < 0x801) {
                bVar11 = 7 < uVar2;
                bVar10 = uVar2 == 8;
            }
            bVar10 = !bVar11 || bVar10;
            if (uVar2 < local_84)
                goto LAB_000231d0;
            iVar4 = 1;
        LAB_00023244:
            pbVar5 = (byte *)FUN_000227e0(pbVar7, local_94, uVar8, param_3);
            local_3c = uVar8;
            local_38 = uVar2;
            uVar8 = uVar2;
            if (bVar10) {
            LAB_00023270:
                pbVar7 = pbVar5 + 2;
                *pbVar5 = (char)(uVar3 - 1) * '\x04' & 0x1cU |
                          ((char)uVar2 + -2) * ' ';
                pbVar5[1] = (byte)(uVar3 - 1 >> 3);
                local_30 = local_30 + 1;
            } else {
            LAB_0002308c:
                local_38 = uVar8;
                bVar10 = uVar3 == 0x1000;
                if (uVar3 < 0x1001) {
                    bVar10 = uVar2 == 3;
                }
                if (bVar10) {
                    if (local_3c != 0) {
                        pbVar7 = pbVar5 + 2;
                        *pbVar5 = (char)(uVar3 - 0x801) * '\x04' & 0x1c;
                        pbVar5[1] = (byte)(uVar3 - 0x801 >> 3);
                        local_34 = local_34 + 1;
                        goto LAB_000230d8;
                    }
                LAB_000230a8:
                    *pbVar5 =
                        ~((byte) ~(byte)((uVar2 - 2) * 0x8000000 >> 0x18) >> 3);
                } else {
                    if (uVar2 < 0x22)
                        goto LAB_000230a8;
                    *pbVar5 = 0xe0;
                    for (uVar8 = uVar2 - 0x21;
                         pbVar5 = pbVar5 + 1, 0xff < uVar8;
                         uVar8 = uVar8 - 0xff) {
                        *pbVar5 = 0;
                    }
                    *pbVar5 = (byte)uVar8;
                }
                pbVar7 = pbVar5 + 3;
                pbVar5[1] = (byte)(uVar3 << 2);
                pbVar5[2] = (byte)(uVar3 >> 6);
                local_2c = local_2c + 1;
            }
        LAB_000230d8:
            uVar8 = 0;
            FUN_00022888(&local_88, param_5, uVar2, iVar4);
        LAB_00023114:
            local_54 = (byte *)((int)pbVar7 - (int)param_3);
            uVar2 = local_80;
            uVar3 = local_7c;
        }
        local_94 = (void *)((int)local_6c - local_84);
        if (uVar2 < 3) {
        LAB_000230fc:
            uVar8 = uVar8 + 1;
            FUN_00022888(&local_88, param_5, 1, 0);
            goto LAB_00023114;
        }
        iVar4 = 1;
        bVar11 = 0x7ff < uVar3;
        bVar10 = uVar3 == 0x800;
        if (uVar3 < 0x801) {
            bVar11 = 7 < uVar2;
            bVar10 = uVar2 == 8;
        }
        bVar10 = !bVar11 || bVar10;
        if (local_84 <= uVar2) {
        LAB_00023078:
            pbVar5 = pbVar7;
            local_3c = uVar1;
            local_38 = 0;
            uVar8 = 0;
            if (bVar10)
                goto LAB_00023270;
            goto LAB_0002308c;
        }
    LAB_000231d0:
        FUN_00022888(&local_88, param_5, 1, 0);
        uVar6 = local_80;
        if ((bVar10) && (0x800 < local_7c)) {
            iVar4 = iVar4 + 1;
        } else if (local_80 < 9) {
            if (uVar3 < 0x801 || 0x800 < local_7c) {
                if ((uVar2 == 3 && local_80 == 3) &&
                    (uVar6 = 3, 0x800 < uVar3 && local_7c < 0x1001)) {
                    iVar4 = iVar4 + -1;
                }
            } else {
                iVar4 = iVar4 + -1;
            }
        }
        if (uVar6 < iVar4 + uVar2) {
            iVar4 = 2;
            if (uVar8 != 0)
                goto LAB_00023244;
            goto LAB_00023078;
        }
        uVar8 = uVar8 + 1;
        local_40 = local_40 + 1;
        uVar2 = local_80;
        uVar3 = local_7c;
    } while (true);
}

void lzo1f_999_compress(void)

{
    lzo1f_999_compress_callback();
    return;
}

undefined4 lzo1f_decompress(ushort *param_1, int param_2, undefined4 *param_3,
                            int *param_4)

{
    byte bVar1;
    ushort *puVar2;
    byte *pbVar3;
    undefined1 *puVar4;
    undefined4 *puVar5;
    undefined1 *puVar6;
    int iVar7;
    ushort *puVar8;
    undefined4 *puVar9;
    ushort *puVar10;
    undefined1 *puVar11;
    undefined4 *puVar12;
    uint uVar13;
    uint uVar14;
    undefined4 *puVar15;
    undefined4 *puVar16;
    bool bVar17;
    bool bVar18;

    *param_4 = 0;
    puVar8 = param_1;
    puVar15 = param_3;
LAB_000233f4:
    uVar13 = (uint)(byte)*puVar8;
    puVar2 = (ushort *)((int)puVar8 + 1);
    if (0x1f < uVar13)
        goto LAB_000234b0;
    if (uVar13 == 0) {
        iVar7 = 0;
        bVar1 = *(byte *)((int)puVar8 + 1);
        while (bVar1 == 0) {
            puVar2 = (ushort *)((int)puVar2 + 1);
            iVar7 = iVar7 + 0xff;
            bVar1 = *(byte *)puVar2;
        }
        puVar2 = (ushort *)((int)puVar2 + 1);
        uVar13 = iVar7 + bVar1 + 0x1f;
        if (uVar13 < 4)
            goto LAB_00023554;
    LAB_00023414:
        iVar7 = (uVar13 - 4 & 0xfffffffc) + 4;
        puVar12 = (undefined4 *)((int)puVar15 + iVar7);
        puVar8 = puVar2;
        do {
            puVar16 = puVar15;
            puVar15 = puVar16 + 1;
            *puVar16 = *(undefined4 *)puVar8;
            puVar8 = puVar8 + 2;
        } while (puVar15 != puVar12);
        uVar13 = uVar13 & 3;
        puVar8 = (ushort *)((int)puVar2 + iVar7);
        if (uVar13 == 0)
            goto LAB_0002346c;
        pbVar3 = (byte *)((int)puVar16 + 3);
        puVar10 = (ushort *)((int)puVar8 + uVar13);
        puVar2 = puVar8;
        do {
            puVar8 = (ushort *)((int)puVar2 + 1);
            pbVar3 = pbVar3 + 1;
            *pbVar3 = (byte)*puVar2;
            puVar2 = puVar8;
        } while (puVar8 != puVar10);
    } else {
        if (3 < uVar13)
            goto LAB_00023414;
    LAB_00023554:
        pbVar3 = (byte *)((int)puVar15 + -1);
        puVar8 = (ushort *)((int)puVar2 + uVar13);
        do {
            puVar10 = (ushort *)((int)puVar2 + 1);
            pbVar3 = pbVar3 + 1;
            *pbVar3 = (byte)*puVar2;
            puVar2 = puVar10;
        } while (puVar10 != puVar8);
    }
    puVar15 = (undefined4 *)((int)puVar15 + uVar13);
LAB_0002346c:
    bVar1 = (byte)*puVar8;
    puVar2 = (ushort *)((int)puVar8 + 1);
    do {
        uVar13 = (uint)bVar1;
        if (uVar13 < 0x20) {
            puVar8 = (ushort *)((int)puVar2 + 1);
            iVar7 = (-0x801 - (uint)(bVar1 >> 2)) + (uint)(byte)*puVar2 * -8;
            puVar16 = (undefined4 *)((int)puVar15 + 3);
            *(undefined1 *)puVar15 = *(undefined1 *)((int)puVar15 + iVar7);
            *(undefined1 *)((int)puVar15 + 1) =
                *(undefined1 *)((int)puVar15 + iVar7 + 1);
            *(undefined1 *)((int)puVar15 + 2) =
                *(undefined1 *)((int)puVar15 + iVar7 + 2);
        } else {
        LAB_000234b0:
            if (uVar13 < 0xe0) {
                uVar14 = uVar13 >> 5;
                puVar8 = (ushort *)((int)puVar2 + 1);
                puVar12 =
                    (undefined4 *)((int)puVar15 + ~((uVar13 << 0x1b) >> 0x1d) +
                                   (uint)(byte)*puVar2 * -8);
            LAB_000234e4:
                puVar16 = (undefined4 *)((int)puVar15 + 2);
                *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
                puVar11 = (undefined1 *)((int)puVar15 + 1);
                *puVar11 = *(undefined1 *)((int)puVar12 + 1);
                puVar6 = (undefined1 *)((int)puVar12 + 2);
                do {
                    puVar4 = puVar6 + 1;
                    puVar11 = puVar11 + 1;
                    *puVar11 = *puVar6;
                    puVar6 = puVar4;
                } while ((undefined1 *)((int)puVar12 + 2) + uVar14 != puVar4);
            } else {
                uVar14 = uVar13 & 0x1f;
                if (uVar14 == 0) {
                    iVar7 = 0;
                    bVar1 = (byte)*puVar2;
                    while (bVar1 == 0) {
                        puVar2 = (ushort *)((int)puVar2 + 1);
                        iVar7 = iVar7 + 0xff;
                        bVar1 = *(byte *)puVar2;
                    }
                    puVar2 = (ushort *)((int)puVar2 + 1);
                    uVar14 = iVar7 + bVar1 + 0x1f;
                }
                puVar8 = puVar2 + 1;
                uVar13 = (uint)(*puVar2 >> 2);
                puVar12 = (undefined4 *)((int)puVar15 - uVar13);
                if (puVar15 == puVar12) {
                    *param_4 = (int)puVar15 - (int)param_3;
                    if ((ushort *)((int)param_1 + param_2) == puVar8) {
                        return 0;
                    }
                    if (puVar8 < (ushort *)((int)param_1 + param_2)) {
                        return 0xfffffff8;
                    }
                    return 0xfffffffc;
                }
                bVar18 = 2 < uVar13;
                bVar17 = uVar13 == 3;
                if (3 < uVar13) {
                    bVar18 = 4 < uVar14;
                    bVar17 = uVar14 == 5;
                }
                if (!bVar18 || bVar17)
                    goto LAB_000234e4;
                puVar9 = puVar12 + 1;
                uVar13 = uVar14 - 6 >> 2;
                *puVar15 = *puVar12;
                puVar12 = puVar15 + 1;
                puVar16 = puVar9;
                do {
                    puVar5 = puVar12 + 1;
                    *puVar12 = *puVar16;
                    puVar12 = puVar5;
                    puVar16 = puVar16 + 1;
                } while (puVar5 != puVar15 + uVar13 + 2);
                uVar14 = (uVar14 + uVar13 * -4) - 6;
                puVar16 = puVar15 + 1 + uVar13 + 1;
                if (uVar14 == 0)
                    goto LAB_00023514;
                puVar6 = (undefined1 *)((int)puVar16 + -1);
                puVar15 = puVar9 + uVar13 + 1;
                do {
                    puVar12 = (undefined4 *)((int)puVar15 + 1);
                    puVar6 = puVar6 + 1;
                    *puVar6 = *(undefined1 *)puVar15;
                    puVar15 = puVar12;
                } while ((undefined4 *)((int)(puVar9 + uVar13 + 1) + uVar14) !=
                         puVar12);
            }
            puVar16 = (undefined4 *)((int)puVar16 + uVar14);
        }
    LAB_00023514:
        uVar13 = (byte)puVar8[-1] & 3;
        puVar15 = puVar16;
        if (((byte)puVar8[-1] & 3) == 0)
            goto LAB_000233f4;
        pbVar3 = (byte *)((int)puVar16 + -1);
        puVar2 = puVar8;
        do {
            puVar10 = (ushort *)((int)puVar2 + 1);
            pbVar3 = pbVar3 + 1;
            *pbVar3 = (byte)*puVar2;
            puVar2 = puVar10;
        } while (puVar10 != (ushort *)((int)puVar8 + uVar13));
        puVar15 = (undefined4 *)((int)puVar16 + uVar13);
        puVar2 = (ushort *)((int)puVar8 + uVar13 + 1);
        bVar1 = *(byte *)((int)puVar8 + uVar13);
    } while (true);
}

undefined4 lzo1f_decompress_safe(ushort *param_1, int param_2,
                                 undefined4 *param_3, int *param_4)

{
    uint uVar1;
    byte bVar2;
    ushort *puVar3;
    ushort *puVar4;
    ushort *puVar5;
    undefined1 *puVar6;
    undefined4 *puVar7;
    int iVar8;
    undefined1 *puVar9;
    uint uVar10;
    ushort *puVar11;
    undefined1 *puVar12;
    undefined4 *puVar13;
    int iVar14;
    undefined4 *puVar15;
    byte *pbVar16;
    undefined4 *puVar17;
    undefined4 *puVar18;
    bool bVar19;
    bool bVar20;

    puVar4 = (ushort *)((int)param_1 + param_2);
    iVar8 = *param_4;
    iVar14 = 0;
    *param_4 = 0;
    puVar15 = param_3;
    if (param_1 < puVar4) {
    LAB_000236c0:
        puVar9 = (undefined1 *)(uint)(byte)*param_1;
        puVar5 = (ushort *)((int)param_1 + 1);
        if ((undefined1 *)0x1f < puVar9)
            goto LAB_00023838;
        if (puVar9 == (undefined1 *)0x0) {
            if (puVar5 == puVar4)
                goto LAB_000239d4;
            iVar14 = 0;
            puVar3 = puVar5;
            while (true) {
                puVar5 = (ushort *)((int)puVar3 + 1);
                if ((byte)*puVar3 != 0)
                    break;
                iVar14 = iVar14 + 0xff;
                if ((puVar5 == (ushort *)((int)param_1 + 0x1010101)) ||
                    (puVar3 = puVar5, puVar4 == puVar5))
                    goto LAB_000239d4;
            }
            puVar9 = (undefined1 *)(iVar14 + (byte)*puVar3 + 0x1f);
        }
        if ((undefined1 *)((int)param_3 + (iVar8 - (int)puVar15)) < puVar9) {
        LAB_00023988:
            *param_4 = (int)puVar15 - (int)param_3;
            return 0xfffffffb;
        }
        if ((undefined1 *)((int)puVar4 - (int)puVar5) < puVar9 + 1) {
        LAB_000239d4:
            *param_4 = (int)puVar15 - (int)param_3;
            return 0xfffffffc;
        }
        if (puVar9 < (undefined1 *)0x4) {
            pbVar16 = (byte *)((int)puVar15 + -1);
            puVar3 = (ushort *)((int)puVar5 + (int)puVar9);
            do {
                puVar11 = (ushort *)((int)puVar5 + 1);
                pbVar16 = pbVar16 + 1;
                *pbVar16 = (byte)*puVar5;
                puVar5 = puVar11;
            } while (puVar11 != puVar3);
        LAB_00023750:
            puVar15 = (undefined4 *)((int)puVar15 + (int)puVar9);
        } else {
            iVar14 = ((uint)(puVar9 + -4) & 0xfffffffc) + 4;
            puVar13 = (undefined4 *)((int)puVar15 + iVar14);
            puVar3 = puVar5;
            do {
                puVar18 = puVar15;
                puVar15 = puVar18 + 1;
                *puVar18 = *(undefined4 *)puVar3;
                puVar3 = puVar3 + 2;
            } while (puVar13 != puVar15);
            puVar9 = (undefined1 *)((uint)puVar9 & 3);
            puVar3 = (ushort *)((int)puVar5 + iVar14);
            if (puVar9 != (undefined1 *)0x0) {
                pbVar16 = (byte *)((int)puVar18 + 3);
                puVar11 = (ushort *)((int)puVar3 + (int)puVar9);
                puVar5 = puVar3;
                do {
                    puVar3 = (ushort *)((int)puVar5 + 1);
                    pbVar16 = pbVar16 + 1;
                    *pbVar16 = (byte)*puVar5;
                    puVar5 = puVar3;
                } while (puVar11 != puVar3);
                goto LAB_00023750;
            }
        }
        puVar5 = (ushort *)((int)puVar3 + 1);
        bVar2 = (byte)*puVar3;
        if (puVar5 < puVar4) {
            do {
                puVar9 = (undefined1 *)(uint)bVar2;
                if (puVar9 < (undefined1 *)0x20) {
                    param_1 = (ushort *)((int)puVar5 + 1);
                    puVar13 = (undefined4 *)((int)puVar15 +
                                             (-0x801 - (uint)(bVar2 >> 2)) +
                                             (uint)(byte)*puVar5 * -8);
                    if (puVar13 < param_3 || puVar15 <= puVar13)
                        goto LAB_00023a60;
                    if ((undefined1 *)((int)param_3 + (iVar8 - (int)puVar15)) <
                        (undefined1 *)0x3)
                        goto LAB_00023988;
                    *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
                    *(undefined1 *)((int)puVar15 + 1) =
                        *(undefined1 *)((int)puVar13 + 1);
                    *(undefined1 *)((int)puVar15 + 2) =
                        *(undefined1 *)((int)puVar13 + 2);
                    bVar2 = *(byte *)((int)puVar5 + -1);
                    puVar15 = (undefined4 *)((int)puVar15 + 3);
                } else {
                LAB_00023838:
                    if (puVar9 < (undefined1 *)0xe0) {
                        param_1 = (ushort *)((int)puVar5 + 1);
                        uVar10 = (uint)puVar9 >> 5;
                        puVar13 =
                            (undefined4 *)((int)puVar15 +
                                           ~((uint)((int)puVar9 << 0x1b) >>
                                             0x1d) +
                                           (uint)(byte)*puVar5 * -8);
                        if (puVar13 < param_3 || puVar15 <= puVar13) {
                        LAB_00023a60:
                            *param_4 = (int)puVar15 - (int)param_3;
                            return 0xfffffffa;
                        }
                        if ((undefined1 *)((int)param_3 +
                                           (iVar8 - (int)puVar15)) <
                            (undefined1 *)(uVar10 + 2))
                            goto LAB_00023988;
                    LAB_000238a4:
                        *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
                        puVar12 = (undefined1 *)((int)puVar15 + 1);
                        *puVar12 = *(undefined1 *)((int)puVar13 + 1);
                        puVar9 = (undefined1 *)((int)puVar13 + 2);
                        do {
                            puVar6 = puVar9 + 1;
                            puVar12 = puVar12 + 1;
                            *puVar12 = *puVar9;
                            puVar9 = puVar6;
                        } while (puVar6 !=
                                 (undefined1 *)((int)puVar13 + 2) + uVar10);
                        puVar15 = (undefined4 *)((int)puVar15 + uVar10 + 2);
                    } else {
                        uVar10 = (uint)puVar9 & 0x1f;
                        if (uVar10 == 0) {
                            puVar3 = puVar5;
                            iVar14 = 0;
                            while (true) {
                                if (puVar4 == puVar3)
                                    goto LAB_000239d4;
                                puVar5 = (ushort *)((int)puVar3 + 1);
                                if ((byte)*puVar3 != 0)
                                    break;
                                bVar19 = iVar14 == -0x1ff;
                                puVar3 = puVar5;
                                iVar14 = iVar14 + 0xff;
                                if (bVar19)
                                    goto LAB_00023988;
                            }
                            uVar10 = iVar14 + (byte)*puVar3 + 0x1f;
                        }
                        if ((uint)((int)puVar4 - (int)puVar5) < 2)
                            goto LAB_000239d4;
                        param_1 = puVar5 + 1;
                        uVar1 = (uint)(*puVar5 >> 2);
                        puVar13 = (undefined4 *)((int)puVar15 - uVar1);
                        if (puVar15 == puVar13) {
                            *param_4 = (int)puVar15 - (int)param_3;
                            if (puVar4 == param_1) {
                                return 0;
                            }
                            if (puVar4 <= param_1) {
                                return 0xfffffffc;
                            }
                            return 0xfffffff8;
                        }
                        if (puVar13 < param_3 || puVar15 <= puVar13)
                            goto LAB_00023a60;
                        if ((undefined1 *)((int)param_3 +
                                           (iVar8 - (int)puVar15)) <
                            (undefined1 *)(uVar10 + 2))
                            goto LAB_00023988;
                        bVar20 = 4 < uVar10;
                        bVar19 = uVar10 == 5;
                        if (5 < uVar10) {
                            bVar20 = 2 < uVar1;
                            bVar19 = uVar1 == 3;
                        }
                        if (!bVar20 || bVar19)
                            goto LAB_000238a4;
                        puVar17 = puVar13 + 1;
                        uVar1 = uVar10 - 6 >> 2;
                        *puVar15 = *puVar13;
                        puVar13 = puVar15 + 1;
                        puVar18 = puVar17;
                        do {
                            puVar7 = puVar13 + 1;
                            *puVar13 = *puVar18;
                            puVar13 = puVar7;
                            puVar18 = puVar18 + 1;
                        } while (puVar15 + uVar1 + 2 != puVar7);
                        iVar14 = uVar10 + uVar1 * -4 + -6;
                        puVar15 = puVar15 + 1 + uVar1 + 1;
                        if (iVar14 != 0) {
                            puVar9 = (undefined1 *)((int)puVar15 + -1);
                            puVar13 = puVar17 + uVar1 + 1;
                            do {
                                puVar18 = (undefined4 *)((int)puVar13 + 1);
                                puVar9 = puVar9 + 1;
                                *puVar9 = *(undefined1 *)puVar13;
                                puVar13 = puVar18;
                            } while ((undefined4 *)((int)(puVar17 + uVar1 + 1) +
                                                    iVar14) != puVar18);
                            puVar15 = (undefined4 *)((int)puVar15 + iVar14);
                        }
                    }
                    bVar2 = (byte)param_1[-1];
                }
                if ((bVar2 & 3) == 0)
                    goto LAB_000238e0;
                puVar9 = (undefined1 *)(bVar2 & 3);
                if ((undefined1 *)((int)param_3 + (iVar8 - (int)puVar15)) <
                    puVar9)
                    goto LAB_00023988;
                if ((undefined1 *)((int)puVar4 - (int)param_1) < puVar9 + 1)
                    goto LAB_000239d4;
                pbVar16 = (byte *)((int)puVar15 + -1);
                puVar5 = param_1;
                do {
                    puVar3 = (ushort *)((int)puVar5 + 1);
                    pbVar16 = pbVar16 + 1;
                    *pbVar16 = (byte)*puVar5;
                    puVar5 = puVar3;
                } while ((ushort *)((int)param_1 + (int)puVar9) != puVar3);
                puVar15 = (undefined4 *)((int)puVar15 + (int)puVar9);
                puVar5 = (ushort *)((int)param_1 + (int)(puVar9 + 1));
                bVar2 = *(byte *)((int)param_1 + (int)puVar9);
                if (puVar4 <= puVar5)
                    break;
            } while (true);
        }
        goto LAB_00023824;
    }
LAB_00023828:
    *param_4 = iVar14;
    return 0xfffffff9;
LAB_000238e0:
    if (puVar4 <= param_1)
        goto LAB_00023824;
    goto LAB_000236c0;
LAB_00023824:
    iVar14 = (int)puVar15 - (int)param_3;
    goto LAB_00023828;
}

int FUN_00023a90(uint *param_1, int param_2, byte *param_3, int *param_4,
                 uint param_5, int param_6)

{
    byte bVar1;
    char cVar2;
    byte bVar3;
    byte bVar4;
    byte bVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    byte *pbVar9;
    uint uVar10;
    uint *puVar11;
    uint uVar12;
    uint *puVar13;
    undefined4 *puVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    uint uVar18;
    uint *puVar19;
    byte *pbVar20;
    undefined4 *puVar21;
    byte *pbVar22;
    byte *pbVar23;
    bool bVar24;
    bool bVar25;

    puVar19 = (uint *)((int)param_1 + param_2 + -0x14);
    puVar7 = param_1;
    puVar8 = param_1;
    pbVar22 = param_3;
    if (param_5 < 4) {
        puVar7 = (uint *)((int)param_1 + (4 - param_5));
    }
    do {
        puVar7 = (uint *)((int)puVar7 + ((int)puVar7 - (int)puVar8 >> 5) + 1);
        if (puVar19 <= puVar7) {
            iVar15 = -param_5;
        LAB_00023c18:
            *param_4 = (int)pbVar22 - (int)param_3;
            return (int)param_1 + (param_2 - ((int)puVar8 + iVar15));
        }
        uVar12 = *puVar7;
        iVar15 = (int)puVar7 - (int)param_1;
        while (true) {
            iVar16 = (uVar12 * 0x1824429d >> 0x12) * 2;
            uVar10 = (uint) * (ushort *)(param_6 + iVar16);
            *(short *)(param_6 + iVar16) = (short)iVar15;
            puVar11 = (uint *)((int)param_1 + uVar10);
            if (*(uint *)((int)param_1 + uVar10) != uVar12)
                break;
            puVar21 = (undefined4 *)((int)puVar8 - param_5);
            uVar12 = (int)puVar7 - (int)puVar21;
            pbVar20 = pbVar22;
            if (uVar12 != 0) {
                bVar1 = (byte)uVar12;
                if (uVar12 < 4) {
                    pbVar22[-2] = pbVar22[-2] | bVar1;
                    pbVar20 = pbVar22 + uVar12;
                    *(undefined4 *)pbVar22 = *puVar21;
                } else if (uVar12 < 0x11) {
                    *pbVar22 = bVar1 - 3;
                    *(undefined4 *)(pbVar22 + 1) = *puVar21;
                    *(undefined4 *)(pbVar22 + 5) = puVar21[1];
                    *(undefined4 *)(pbVar22 + 9) = puVar21[2];
                    *(undefined4 *)(pbVar22 + 0xd) = puVar21[3];
                    pbVar20 = pbVar22 + uVar12 + 1;
                } else {
                    pbVar9 = pbVar22 + 1;
                    if (uVar12 < 0x13) {
                        *pbVar22 = bVar1 - 3;
                    } else {
                        *pbVar22 = 0;
                        for (uVar10 = uVar12 - 0x12; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar9 = 0;
                            pbVar9 = pbVar9 + 1;
                        }
                        *pbVar9 = (byte)uVar10;
                        pbVar9 = pbVar9 + 1;
                    }
                    uVar10 = uVar12 - 0x10 >> 4;
                    iVar15 = uVar10 + 1;
                    pbVar20 = pbVar9;
                    puVar14 = puVar21;
                    do {
                        pbVar22 = pbVar20;
                        pbVar20 = pbVar22 + 0x10;
                        *(undefined4 *)pbVar22 = *puVar14;
                        *(undefined4 *)(pbVar22 + 4) = puVar14[1];
                        *(undefined4 *)(pbVar22 + 8) = puVar14[2];
                        *(undefined4 *)(pbVar22 + 0xc) = puVar14[3];
                        puVar14 = puVar14 + 4;
                    } while (pbVar20 != pbVar9 + iVar15 * 0x10);
                    iVar16 = uVar12 + uVar10 * -0x10;
                    iVar17 = iVar16 + -0x10;
                    if (iVar17 != 0) {
                        pbVar9 = pbVar22 + 0xf;
                        pbVar20 = (byte *)(puVar21 + iVar15 * 4);
                        do {
                            pbVar23 = pbVar20 + 1;
                            pbVar9 = pbVar9 + 1;
                            *pbVar9 = *pbVar20;
                            pbVar20 = pbVar23;
                        } while (
                            pbVar23 !=
                            (byte *)((int)(puVar21 + iVar15 * 4) + iVar17));
                        pbVar20 = pbVar22 + iVar16;
                    }
                }
            }
            uVar12 = puVar11[1] ^ puVar7[1];
            if (puVar7[1] == puVar11[1]) {
                puVar8 = puVar7 + 3;
                puVar6 = puVar11;
                do {
                    puVar13 = puVar6 + 2;
                    uVar12 = puVar8[-1];
                    uVar10 = (int)puVar13 - (int)puVar11;
                    uVar18 = *puVar13;
                    if (uVar12 != uVar18)
                        break;
                    uVar12 = *puVar8;
                    uVar10 = (4 - (int)puVar11) + (int)puVar13;
                    uVar18 = puVar6[3];
                    if (puVar19 <= puVar8)
                        goto LAB_00023bc4;
                    puVar8 = puVar8 + 2;
                    puVar6 = puVar13;
                } while (uVar12 == uVar18);
                uVar12 = uVar12 ^ uVar18;
            } else {
                uVar10 = 4;
            }
            bVar3 = (byte)uVar12;
            bVar4 = (byte)(uVar12 >> 8);
            bVar5 = (byte)(uVar12 >> 0x10);
            bVar1 = (byte)(uVar12 >> 0x18);
            uVar10 = uVar10 +
                     ((uint)LZCOUNT(
                          (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                << 1 |
                                            bVar3 >> 2 & 1)
                                               << 1 |
                                           bVar3 >> 3 & 1)
                                              << 1 |
                                          bVar3 >> 4 & 1)
                                             << 1 |
                                         bVar3 >> 5 & 1)
                                            << 1 |
                                        bVar3 >> 6 & 1)
                                           << 1 |
                                       bVar3 >> 7)
                              << 0x18 |
                          (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                << 1 |
                                            bVar4 >> 2 & 1)
                                               << 1 |
                                           bVar4 >> 3 & 1)
                                              << 1 |
                                          bVar4 >> 4 & 1)
                                             << 1 |
                                         bVar4 >> 5 & 1)
                                            << 1 |
                                        bVar4 >> 6 & 1)
                                           << 1 |
                                       bVar4 >> 7)
                              << 0x10 |
                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                << 1 |
                                            bVar5 >> 2 & 1)
                                               << 1 |
                                           bVar5 >> 3 & 1)
                                              << 1 |
                                          bVar5 >> 4 & 1)
                                             << 1 |
                                         bVar5 >> 5 & 1)
                                            << 1 |
                                        bVar5 >> 6 & 1)
                                           << 1 |
                                       bVar5 >> 7)
                              << 8 |
                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                << 1 |
                                            bVar1 >> 2 & 1)
                                               << 1 |
                                           bVar1 >> 3 & 1)
                                              << 1 |
                                          bVar1 >> 4 & 1)
                                             << 1 |
                                         bVar1 >> 5 & 1)
                                            << 1 |
                                        bVar1 >> 6 & 1)
                                           << 1 |
                                       bVar1 >> 7)) >>
                      3);
            puVar8 = (uint *)((int)puVar7 + uVar10);
        LAB_00023bc4:
            uVar12 = (int)puVar7 - (int)puVar11;
            bVar25 = 7 < uVar10;
            bVar24 = uVar10 == 8;
            if (uVar10 < 9) {
                bVar25 = 0x7ff < uVar12;
                bVar24 = uVar12 == 0x800;
            }
            cVar2 = (char)uVar10;
            if (!bVar25 || bVar24) {
                *pbVar20 =
                    (char)(uVar12 - 1) * '\x04' & 0x1cU | (cVar2 + -1) * ' ';
                pbVar20[1] = (byte)(uVar12 - 1 >> 3);
                pbVar22 = pbVar20;
            } else {
                pbVar22 = pbVar20 + 1;
                if (uVar12 < 0x4001) {
                    uVar12 = uVar12 - 1;
                    if (uVar10 < 0x22) {
                        *pbVar20 = cVar2 - 2U | 0x20;
                    } else {
                        *pbVar20 = 0x20;
                        for (uVar10 = uVar10 - 0x21; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar22 = 0;
                            pbVar22 = pbVar22 + 1;
                        }
                    LAB_00023d00:
                        *pbVar22 = (byte)uVar10;
                        pbVar22 = pbVar22 + 1;
                    }
                } else {
                    uVar12 = uVar12 - 0x4000;
                    bVar1 = (byte)(uVar12 >> 0xb) & 8 | 0x10;
                    if (9 < uVar10) {
                        *pbVar20 = bVar1;
                        for (uVar10 = uVar10 - 9; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar22 = 0;
                            pbVar22 = pbVar22 + 1;
                        }
                        goto LAB_00023d00;
                    }
                    *pbVar20 = bVar1 | cVar2 - 2U;
                }
                *pbVar22 = (byte)(uVar12 << 2);
                pbVar22[1] = (byte)(uVar12 >> 6);
            }
            pbVar22 = pbVar22 + 2;
            if (puVar19 <= puVar8) {
                iVar15 = 0;
                goto LAB_00023c18;
            }
            uVar12 = *puVar8;
            iVar15 = (int)puVar8 - (int)param_1;
            param_5 = 0;
            puVar7 = puVar8;
        }
    } while (true);
}

void lzo1x_1_compress(uint param_1, uint param_2, char *param_3, int *param_4,
                      void *param_5)

{
    byte bVar1;
    char *pcVar2;
    uint uVar3;
    char *pcVar4;
    char *pcVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    uint uVar10;
    uint uVar11;
    char *pcVar12;
    char *pcVar13;
    bool bVar14;

    pcVar4 = param_3;
    uVar6 = param_2;
    if (param_2 < 0x15) {
        iVar9 = 0;
    LAB_00023f08:
        uVar7 = iVar9 + uVar6;
        if (iVar9 + uVar6 == 0)
            goto LAB_00023f10;
    } else {
        uVar8 = param_2;
        if (0xbfff < param_2) {
            uVar8 = 0xc000;
        }
        uVar10 = param_1 + uVar8;
        uVar7 = param_2;
        if (uVar10 < uVar10 + (uVar8 >> 5)) {
            iVar9 = 0;
            uVar7 = param_1;
            while (true) {
                uVar11 = uVar10;
                uVar6 = uVar6 - uVar8;
                memset(param_5, 0, 0x8000);
                iVar9 =
                    FUN_00023a90(uVar7, uVar8, pcVar4, param_4, iVar9, param_5);
                pcVar4 = pcVar4 + *param_4;
                if (uVar6 < 0x15)
                    break;
                uVar8 = uVar6;
                if (0xbfff < uVar6) {
                    uVar8 = 0xc000;
                }
                uVar10 = uVar11 + uVar8;
                uVar3 = uVar10 + (uVar8 + iVar9 >> 5);
                if ((uVar3 <= uVar10) || (uVar7 = uVar11, uVar3 <= uVar10))
                    break;
            }
            goto LAB_00023f08;
        }
    }
    bVar14 = uVar7 == 0xee;
    if (uVar7 < 0xef) {
        bVar14 = param_3 == pcVar4;
    }
    pcVar12 = (char *)(param_1 + (param_2 - uVar7));
    bVar1 = (byte)uVar7;
    uVar6 = uVar7;
    if (bVar14) {
        *pcVar4 = bVar1 + 0x11;
        pcVar2 = pcVar4 + 1;
        if (uVar7 < 8) {
            pcVar5 = pcVar2;
            if (uVar7 < 4)
                goto LAB_00024024;
        LAB_00024004:
            pcVar2 = pcVar4 + 1;
            pcVar4 = pcVar2;
        LAB_00023fc4:
            pcVar13 = pcVar12 + 4;
            uVar6 = uVar6 - 4;
            pcVar5 = pcVar4 + 4;
            *(undefined4 *)pcVar4 = *(undefined4 *)pcVar12;
        } else {
        LAB_00023f7c:
            iVar9 = (uVar7 - 8 & 0xfffffff8) + 8;
            pcVar4 = pcVar12;
            pcVar13 = pcVar2;
            do {
                pcVar5 = pcVar13 + 8;
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(pcVar4 + 4);
                pcVar4 = pcVar4 + 8;
                pcVar13 = pcVar5;
            } while (pcVar2 + iVar9 != pcVar5);
            uVar6 = uVar7 & 7;
            pcVar12 = pcVar12 + iVar9;
            pcVar4 = pcVar5;
            pcVar13 = pcVar12;
            if (3 < uVar6)
                goto LAB_00023fc4;
        }
        pcVar12 = pcVar13;
        if (uVar6 != 0)
            goto LAB_00024024;
    } else {
        if (3 < uVar7) {
            pcVar2 = pcVar4 + 1;
            if (uVar7 < 0x13) {
                *pcVar4 = bVar1 - 3;
                if (uVar7 < 8)
                    goto LAB_00024004;
            } else {
                *pcVar4 = bVar14;
                for (uVar6 = uVar7 - 0x12; 0xff < uVar6; uVar6 = uVar6 - 0xff) {
                    *pcVar2 = bVar14;
                    pcVar2 = pcVar2 + 1;
                }
                *pcVar2 = (char)uVar6;
                pcVar2 = pcVar2 + 1;
            }
            goto LAB_00023f7c;
        }
        pcVar4[-2] = pcVar4[-2] | bVar1;
        pcVar2 = pcVar4;
        pcVar5 = pcVar4;
    LAB_00024024:
        pcVar5 = pcVar5 + -1;
        pcVar4 = pcVar12;
        do {
            pcVar13 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
            *pcVar5 = *pcVar4;
            pcVar4 = pcVar13;
        } while (pcVar13 != pcVar12 + uVar6);
    }
    pcVar4 = pcVar2 + uVar7;
LAB_00023f10:
    *pcVar4 = '\x11';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    *param_4 = (int)(pcVar4 + (3 - (int)param_3));
    return;
}

int FUN_0002408c(uint *param_1, int param_2, byte *param_3, int *param_4,
                 uint param_5, int param_6)

{
    byte bVar1;
    char cVar2;
    byte bVar3;
    byte bVar4;
    byte bVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    byte *pbVar9;
    uint uVar10;
    uint *puVar11;
    uint uVar12;
    uint *puVar13;
    undefined4 *puVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    uint uVar18;
    uint *puVar19;
    byte *pbVar20;
    undefined4 *puVar21;
    byte *pbVar22;
    byte *pbVar23;
    bool bVar24;
    bool bVar25;

    puVar19 = (uint *)((int)param_1 + param_2 + -0x14);
    puVar7 = param_1;
    puVar8 = param_1;
    pbVar22 = param_3;
    if (param_5 < 4) {
        puVar7 = (uint *)((int)param_1 + (4 - param_5));
    }
    do {
        puVar7 = (uint *)((int)puVar7 + ((int)puVar7 - (int)puVar8 >> 5) + 1);
        if (puVar19 <= puVar7) {
            iVar15 = -param_5;
        LAB_00024214:
            *param_4 = (int)pbVar22 - (int)param_3;
            return (int)param_1 + (param_2 - ((int)puVar8 + iVar15));
        }
        uVar12 = *puVar7;
        iVar15 = (int)puVar7 - (int)param_1;
        while (true) {
            iVar16 = (uVar12 * 0x1824429d >> 0x15) * 2;
            uVar10 = (uint) * (ushort *)(param_6 + iVar16);
            *(short *)(param_6 + iVar16) = (short)iVar15;
            puVar11 = (uint *)((int)param_1 + uVar10);
            if (*(uint *)((int)param_1 + uVar10) != uVar12)
                break;
            puVar21 = (undefined4 *)((int)puVar8 - param_5);
            uVar12 = (int)puVar7 - (int)puVar21;
            pbVar20 = pbVar22;
            if (uVar12 != 0) {
                bVar1 = (byte)uVar12;
                if (uVar12 < 4) {
                    pbVar22[-2] = pbVar22[-2] | bVar1;
                    pbVar20 = pbVar22 + uVar12;
                    *(undefined4 *)pbVar22 = *puVar21;
                } else if (uVar12 < 0x11) {
                    *pbVar22 = bVar1 - 3;
                    *(undefined4 *)(pbVar22 + 1) = *puVar21;
                    *(undefined4 *)(pbVar22 + 5) = puVar21[1];
                    *(undefined4 *)(pbVar22 + 9) = puVar21[2];
                    *(undefined4 *)(pbVar22 + 0xd) = puVar21[3];
                    pbVar20 = pbVar22 + uVar12 + 1;
                } else {
                    pbVar9 = pbVar22 + 1;
                    if (uVar12 < 0x13) {
                        *pbVar22 = bVar1 - 3;
                    } else {
                        *pbVar22 = 0;
                        for (uVar10 = uVar12 - 0x12; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar9 = 0;
                            pbVar9 = pbVar9 + 1;
                        }
                        *pbVar9 = (byte)uVar10;
                        pbVar9 = pbVar9 + 1;
                    }
                    uVar10 = uVar12 - 0x10 >> 4;
                    iVar15 = uVar10 + 1;
                    pbVar20 = pbVar9;
                    puVar14 = puVar21;
                    do {
                        pbVar22 = pbVar20;
                        pbVar20 = pbVar22 + 0x10;
                        *(undefined4 *)pbVar22 = *puVar14;
                        *(undefined4 *)(pbVar22 + 4) = puVar14[1];
                        *(undefined4 *)(pbVar22 + 8) = puVar14[2];
                        *(undefined4 *)(pbVar22 + 0xc) = puVar14[3];
                        puVar14 = puVar14 + 4;
                    } while (pbVar20 != pbVar9 + iVar15 * 0x10);
                    iVar16 = uVar12 + uVar10 * -0x10;
                    iVar17 = iVar16 + -0x10;
                    if (iVar17 != 0) {
                        pbVar9 = pbVar22 + 0xf;
                        pbVar20 = (byte *)(puVar21 + iVar15 * 4);
                        do {
                            pbVar23 = pbVar20 + 1;
                            pbVar9 = pbVar9 + 1;
                            *pbVar9 = *pbVar20;
                            pbVar20 = pbVar23;
                        } while (
                            pbVar23 !=
                            (byte *)((int)(puVar21 + iVar15 * 4) + iVar17));
                        pbVar20 = pbVar22 + iVar16;
                    }
                }
            }
            uVar12 = puVar11[1] ^ puVar7[1];
            if (puVar7[1] == puVar11[1]) {
                puVar8 = puVar7 + 3;
                puVar6 = puVar11;
                do {
                    puVar13 = puVar6 + 2;
                    uVar12 = puVar8[-1];
                    uVar10 = (int)puVar13 - (int)puVar11;
                    uVar18 = *puVar13;
                    if (uVar12 != uVar18)
                        break;
                    uVar12 = *puVar8;
                    uVar10 = (4 - (int)puVar11) + (int)puVar13;
                    uVar18 = puVar6[3];
                    if (puVar19 <= puVar8)
                        goto LAB_000241c0;
                    puVar8 = puVar8 + 2;
                    puVar6 = puVar13;
                } while (uVar12 == uVar18);
                uVar12 = uVar12 ^ uVar18;
            } else {
                uVar10 = 4;
            }
            bVar3 = (byte)uVar12;
            bVar4 = (byte)(uVar12 >> 8);
            bVar5 = (byte)(uVar12 >> 0x10);
            bVar1 = (byte)(uVar12 >> 0x18);
            uVar10 = uVar10 +
                     ((uint)LZCOUNT(
                          (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                << 1 |
                                            bVar3 >> 2 & 1)
                                               << 1 |
                                           bVar3 >> 3 & 1)
                                              << 1 |
                                          bVar3 >> 4 & 1)
                                             << 1 |
                                         bVar3 >> 5 & 1)
                                            << 1 |
                                        bVar3 >> 6 & 1)
                                           << 1 |
                                       bVar3 >> 7)
                              << 0x18 |
                          (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                << 1 |
                                            bVar4 >> 2 & 1)
                                               << 1 |
                                           bVar4 >> 3 & 1)
                                              << 1 |
                                          bVar4 >> 4 & 1)
                                             << 1 |
                                         bVar4 >> 5 & 1)
                                            << 1 |
                                        bVar4 >> 6 & 1)
                                           << 1 |
                                       bVar4 >> 7)
                              << 0x10 |
                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                << 1 |
                                            bVar5 >> 2 & 1)
                                               << 1 |
                                           bVar5 >> 3 & 1)
                                              << 1 |
                                          bVar5 >> 4 & 1)
                                             << 1 |
                                         bVar5 >> 5 & 1)
                                            << 1 |
                                        bVar5 >> 6 & 1)
                                           << 1 |
                                       bVar5 >> 7)
                              << 8 |
                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                << 1 |
                                            bVar1 >> 2 & 1)
                                               << 1 |
                                           bVar1 >> 3 & 1)
                                              << 1 |
                                          bVar1 >> 4 & 1)
                                             << 1 |
                                         bVar1 >> 5 & 1)
                                            << 1 |
                                        bVar1 >> 6 & 1)
                                           << 1 |
                                       bVar1 >> 7)) >>
                      3);
            puVar8 = (uint *)((int)puVar7 + uVar10);
        LAB_000241c0:
            uVar12 = (int)puVar7 - (int)puVar11;
            bVar25 = 7 < uVar10;
            bVar24 = uVar10 == 8;
            if (uVar10 < 9) {
                bVar25 = 0x7ff < uVar12;
                bVar24 = uVar12 == 0x800;
            }
            cVar2 = (char)uVar10;
            if (!bVar25 || bVar24) {
                *pbVar20 =
                    (char)(uVar12 - 1) * '\x04' & 0x1cU | (cVar2 + -1) * ' ';
                pbVar20[1] = (byte)(uVar12 - 1 >> 3);
                pbVar22 = pbVar20;
            } else {
                pbVar22 = pbVar20 + 1;
                if (uVar12 < 0x4001) {
                    uVar12 = uVar12 - 1;
                    if (uVar10 < 0x22) {
                        *pbVar20 = cVar2 - 2U | 0x20;
                    } else {
                        *pbVar20 = 0x20;
                        for (uVar10 = uVar10 - 0x21; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar22 = 0;
                            pbVar22 = pbVar22 + 1;
                        }
                    LAB_000242fc:
                        *pbVar22 = (byte)uVar10;
                        pbVar22 = pbVar22 + 1;
                    }
                } else {
                    uVar12 = uVar12 - 0x4000;
                    bVar1 = (byte)(uVar12 >> 0xb) & 8 | 0x10;
                    if (9 < uVar10) {
                        *pbVar20 = bVar1;
                        for (uVar10 = uVar10 - 9; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar22 = 0;
                            pbVar22 = pbVar22 + 1;
                        }
                        goto LAB_000242fc;
                    }
                    *pbVar20 = bVar1 | cVar2 - 2U;
                }
                *pbVar22 = (byte)(uVar12 << 2);
                pbVar22[1] = (byte)(uVar12 >> 6);
            }
            pbVar22 = pbVar22 + 2;
            if (puVar19 <= puVar8) {
                iVar15 = 0;
                goto LAB_00024214;
            }
            uVar12 = *puVar8;
            iVar15 = (int)puVar8 - (int)param_1;
            param_5 = 0;
            puVar7 = puVar8;
        }
    } while (true);
}

void lzo1x_1_11_compress(uint param_1, uint param_2, char *param_3,
                         int *param_4, void *param_5)

{
    byte bVar1;
    char *pcVar2;
    uint uVar3;
    char *pcVar4;
    char *pcVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    uint uVar10;
    uint uVar11;
    char *pcVar12;
    char *pcVar13;
    bool bVar14;

    pcVar4 = param_3;
    uVar6 = param_2;
    if (param_2 < 0x15) {
        iVar9 = 0;
    LAB_00024504:
        uVar7 = iVar9 + uVar6;
        if (iVar9 + uVar6 == 0)
            goto LAB_0002450c;
    } else {
        uVar8 = param_2;
        if (0xbfff < param_2) {
            uVar8 = 0xc000;
        }
        uVar10 = param_1 + uVar8;
        uVar7 = param_2;
        if (uVar10 < uVar10 + (uVar8 >> 5)) {
            iVar9 = 0;
            uVar7 = param_1;
            while (true) {
                uVar11 = uVar10;
                uVar6 = uVar6 - uVar8;
                memset(param_5, 0, 0x1000);
                iVar9 =
                    FUN_0002408c(uVar7, uVar8, pcVar4, param_4, iVar9, param_5);
                pcVar4 = pcVar4 + *param_4;
                if (uVar6 < 0x15)
                    break;
                uVar8 = uVar6;
                if (0xbfff < uVar6) {
                    uVar8 = 0xc000;
                }
                uVar10 = uVar11 + uVar8;
                uVar3 = uVar10 + (uVar8 + iVar9 >> 5);
                if ((uVar3 <= uVar10) || (uVar7 = uVar11, uVar3 <= uVar10))
                    break;
            }
            goto LAB_00024504;
        }
    }
    bVar14 = uVar7 == 0xee;
    if (uVar7 < 0xef) {
        bVar14 = param_3 == pcVar4;
    }
    pcVar12 = (char *)(param_1 + (param_2 - uVar7));
    bVar1 = (byte)uVar7;
    uVar6 = uVar7;
    if (bVar14) {
        *pcVar4 = bVar1 + 0x11;
        pcVar2 = pcVar4 + 1;
        if (uVar7 < 8) {
            pcVar5 = pcVar2;
            if (uVar7 < 4)
                goto LAB_00024620;
        LAB_00024600:
            pcVar2 = pcVar4 + 1;
            pcVar4 = pcVar2;
        LAB_000245c0:
            pcVar13 = pcVar12 + 4;
            uVar6 = uVar6 - 4;
            pcVar5 = pcVar4 + 4;
            *(undefined4 *)pcVar4 = *(undefined4 *)pcVar12;
        } else {
        LAB_00024578:
            iVar9 = (uVar7 - 8 & 0xfffffff8) + 8;
            pcVar4 = pcVar12;
            pcVar13 = pcVar2;
            do {
                pcVar5 = pcVar13 + 8;
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(pcVar4 + 4);
                pcVar4 = pcVar4 + 8;
                pcVar13 = pcVar5;
            } while (pcVar2 + iVar9 != pcVar5);
            uVar6 = uVar7 & 7;
            pcVar12 = pcVar12 + iVar9;
            pcVar4 = pcVar5;
            pcVar13 = pcVar12;
            if (3 < uVar6)
                goto LAB_000245c0;
        }
        pcVar12 = pcVar13;
        if (uVar6 != 0)
            goto LAB_00024620;
    } else {
        if (3 < uVar7) {
            pcVar2 = pcVar4 + 1;
            if (uVar7 < 0x13) {
                *pcVar4 = bVar1 - 3;
                if (uVar7 < 8)
                    goto LAB_00024600;
            } else {
                *pcVar4 = bVar14;
                for (uVar6 = uVar7 - 0x12; 0xff < uVar6; uVar6 = uVar6 - 0xff) {
                    *pcVar2 = bVar14;
                    pcVar2 = pcVar2 + 1;
                }
                *pcVar2 = (char)uVar6;
                pcVar2 = pcVar2 + 1;
            }
            goto LAB_00024578;
        }
        pcVar4[-2] = pcVar4[-2] | bVar1;
        pcVar2 = pcVar4;
        pcVar5 = pcVar4;
    LAB_00024620:
        pcVar5 = pcVar5 + -1;
        pcVar4 = pcVar12;
        do {
            pcVar13 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
            *pcVar5 = *pcVar4;
            pcVar4 = pcVar13;
        } while (pcVar13 != pcVar12 + uVar6);
    }
    pcVar4 = pcVar2 + uVar7;
LAB_0002450c:
    *pcVar4 = '\x11';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    *param_4 = (int)(pcVar4 + (3 - (int)param_3));
    return;
}

int FUN_00024688(uint *param_1, int param_2, byte *param_3, int *param_4,
                 uint param_5, int param_6)

{
    byte bVar1;
    char cVar2;
    byte bVar3;
    byte bVar4;
    byte bVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    byte *pbVar9;
    uint uVar10;
    uint *puVar11;
    uint uVar12;
    uint *puVar13;
    undefined4 *puVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    uint uVar18;
    uint *puVar19;
    byte *pbVar20;
    undefined4 *puVar21;
    byte *pbVar22;
    byte *pbVar23;
    bool bVar24;
    bool bVar25;

    puVar19 = (uint *)((int)param_1 + param_2 + -0x14);
    puVar7 = param_1;
    puVar8 = param_1;
    pbVar22 = param_3;
    if (param_5 < 4) {
        puVar7 = (uint *)((int)param_1 + (4 - param_5));
    }
    do {
        puVar7 = (uint *)((int)puVar7 + ((int)puVar7 - (int)puVar8 >> 5) + 1);
        if (puVar19 <= puVar7) {
            iVar15 = -param_5;
        LAB_00024810:
            *param_4 = (int)pbVar22 - (int)param_3;
            return (int)param_1 + (param_2 - ((int)puVar8 + iVar15));
        }
        uVar12 = *puVar7;
        iVar15 = (int)puVar7 - (int)param_1;
        while (true) {
            iVar16 = (uVar12 * 0x1824429d >> 0x14) * 2;
            uVar10 = (uint) * (ushort *)(param_6 + iVar16);
            *(short *)(param_6 + iVar16) = (short)iVar15;
            puVar11 = (uint *)((int)param_1 + uVar10);
            if (*(uint *)((int)param_1 + uVar10) != uVar12)
                break;
            puVar21 = (undefined4 *)((int)puVar8 - param_5);
            uVar12 = (int)puVar7 - (int)puVar21;
            pbVar20 = pbVar22;
            if (uVar12 != 0) {
                bVar1 = (byte)uVar12;
                if (uVar12 < 4) {
                    pbVar22[-2] = pbVar22[-2] | bVar1;
                    pbVar20 = pbVar22 + uVar12;
                    *(undefined4 *)pbVar22 = *puVar21;
                } else if (uVar12 < 0x11) {
                    *pbVar22 = bVar1 - 3;
                    *(undefined4 *)(pbVar22 + 1) = *puVar21;
                    *(undefined4 *)(pbVar22 + 5) = puVar21[1];
                    *(undefined4 *)(pbVar22 + 9) = puVar21[2];
                    *(undefined4 *)(pbVar22 + 0xd) = puVar21[3];
                    pbVar20 = pbVar22 + uVar12 + 1;
                } else {
                    pbVar9 = pbVar22 + 1;
                    if (uVar12 < 0x13) {
                        *pbVar22 = bVar1 - 3;
                    } else {
                        *pbVar22 = 0;
                        for (uVar10 = uVar12 - 0x12; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar9 = 0;
                            pbVar9 = pbVar9 + 1;
                        }
                        *pbVar9 = (byte)uVar10;
                        pbVar9 = pbVar9 + 1;
                    }
                    uVar10 = uVar12 - 0x10 >> 4;
                    iVar15 = uVar10 + 1;
                    pbVar20 = pbVar9;
                    puVar14 = puVar21;
                    do {
                        pbVar22 = pbVar20;
                        pbVar20 = pbVar22 + 0x10;
                        *(undefined4 *)pbVar22 = *puVar14;
                        *(undefined4 *)(pbVar22 + 4) = puVar14[1];
                        *(undefined4 *)(pbVar22 + 8) = puVar14[2];
                        *(undefined4 *)(pbVar22 + 0xc) = puVar14[3];
                        puVar14 = puVar14 + 4;
                    } while (pbVar20 != pbVar9 + iVar15 * 0x10);
                    iVar16 = uVar12 + uVar10 * -0x10;
                    iVar17 = iVar16 + -0x10;
                    if (iVar17 != 0) {
                        pbVar9 = pbVar22 + 0xf;
                        pbVar20 = (byte *)(puVar21 + iVar15 * 4);
                        do {
                            pbVar23 = pbVar20 + 1;
                            pbVar9 = pbVar9 + 1;
                            *pbVar9 = *pbVar20;
                            pbVar20 = pbVar23;
                        } while (
                            pbVar23 !=
                            (byte *)((int)(puVar21 + iVar15 * 4) + iVar17));
                        pbVar20 = pbVar22 + iVar16;
                    }
                }
            }
            uVar12 = puVar11[1] ^ puVar7[1];
            if (puVar7[1] == puVar11[1]) {
                puVar8 = puVar7 + 3;
                puVar6 = puVar11;
                do {
                    puVar13 = puVar6 + 2;
                    uVar12 = puVar8[-1];
                    uVar10 = (int)puVar13 - (int)puVar11;
                    uVar18 = *puVar13;
                    if (uVar12 != uVar18)
                        break;
                    uVar12 = *puVar8;
                    uVar10 = (4 - (int)puVar11) + (int)puVar13;
                    uVar18 = puVar6[3];
                    if (puVar19 <= puVar8)
                        goto LAB_000247bc;
                    puVar8 = puVar8 + 2;
                    puVar6 = puVar13;
                } while (uVar12 == uVar18);
                uVar12 = uVar12 ^ uVar18;
            } else {
                uVar10 = 4;
            }
            bVar3 = (byte)uVar12;
            bVar4 = (byte)(uVar12 >> 8);
            bVar5 = (byte)(uVar12 >> 0x10);
            bVar1 = (byte)(uVar12 >> 0x18);
            uVar10 = uVar10 +
                     ((uint)LZCOUNT(
                          (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                << 1 |
                                            bVar3 >> 2 & 1)
                                               << 1 |
                                           bVar3 >> 3 & 1)
                                              << 1 |
                                          bVar3 >> 4 & 1)
                                             << 1 |
                                         bVar3 >> 5 & 1)
                                            << 1 |
                                        bVar3 >> 6 & 1)
                                           << 1 |
                                       bVar3 >> 7)
                              << 0x18 |
                          (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                << 1 |
                                            bVar4 >> 2 & 1)
                                               << 1 |
                                           bVar4 >> 3 & 1)
                                              << 1 |
                                          bVar4 >> 4 & 1)
                                             << 1 |
                                         bVar4 >> 5 & 1)
                                            << 1 |
                                        bVar4 >> 6 & 1)
                                           << 1 |
                                       bVar4 >> 7)
                              << 0x10 |
                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                << 1 |
                                            bVar5 >> 2 & 1)
                                               << 1 |
                                           bVar5 >> 3 & 1)
                                              << 1 |
                                          bVar5 >> 4 & 1)
                                             << 1 |
                                         bVar5 >> 5 & 1)
                                            << 1 |
                                        bVar5 >> 6 & 1)
                                           << 1 |
                                       bVar5 >> 7)
                              << 8 |
                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                << 1 |
                                            bVar1 >> 2 & 1)
                                               << 1 |
                                           bVar1 >> 3 & 1)
                                              << 1 |
                                          bVar1 >> 4 & 1)
                                             << 1 |
                                         bVar1 >> 5 & 1)
                                            << 1 |
                                        bVar1 >> 6 & 1)
                                           << 1 |
                                       bVar1 >> 7)) >>
                      3);
            puVar8 = (uint *)((int)puVar7 + uVar10);
        LAB_000247bc:
            uVar12 = (int)puVar7 - (int)puVar11;
            bVar25 = 7 < uVar10;
            bVar24 = uVar10 == 8;
            if (uVar10 < 9) {
                bVar25 = 0x7ff < uVar12;
                bVar24 = uVar12 == 0x800;
            }
            cVar2 = (char)uVar10;
            if (!bVar25 || bVar24) {
                *pbVar20 =
                    (char)(uVar12 - 1) * '\x04' & 0x1cU | (cVar2 + -1) * ' ';
                pbVar20[1] = (byte)(uVar12 - 1 >> 3);
                pbVar22 = pbVar20;
            } else {
                pbVar22 = pbVar20 + 1;
                if (uVar12 < 0x4001) {
                    uVar12 = uVar12 - 1;
                    if (uVar10 < 0x22) {
                        *pbVar20 = cVar2 - 2U | 0x20;
                    } else {
                        *pbVar20 = 0x20;
                        for (uVar10 = uVar10 - 0x21; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar22 = 0;
                            pbVar22 = pbVar22 + 1;
                        }
                    LAB_000248f8:
                        *pbVar22 = (byte)uVar10;
                        pbVar22 = pbVar22 + 1;
                    }
                } else {
                    uVar12 = uVar12 - 0x4000;
                    bVar1 = (byte)(uVar12 >> 0xb) & 8 | 0x10;
                    if (9 < uVar10) {
                        *pbVar20 = bVar1;
                        for (uVar10 = uVar10 - 9; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar22 = 0;
                            pbVar22 = pbVar22 + 1;
                        }
                        goto LAB_000248f8;
                    }
                    *pbVar20 = bVar1 | cVar2 - 2U;
                }
                *pbVar22 = (byte)(uVar12 << 2);
                pbVar22[1] = (byte)(uVar12 >> 6);
            }
            pbVar22 = pbVar22 + 2;
            if (puVar19 <= puVar8) {
                iVar15 = 0;
                goto LAB_00024810;
            }
            uVar12 = *puVar8;
            iVar15 = (int)puVar8 - (int)param_1;
            param_5 = 0;
            puVar7 = puVar8;
        }
    } while (true);
}

void lzo1x_1_12_compress(uint param_1, uint param_2, char *param_3,
                         int *param_4, void *param_5)

{
    byte bVar1;
    char *pcVar2;
    uint uVar3;
    char *pcVar4;
    char *pcVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    uint uVar10;
    uint uVar11;
    char *pcVar12;
    char *pcVar13;
    bool bVar14;

    pcVar4 = param_3;
    uVar6 = param_2;
    if (param_2 < 0x15) {
        iVar9 = 0;
    LAB_00024b00:
        uVar7 = iVar9 + uVar6;
        if (iVar9 + uVar6 == 0)
            goto LAB_00024b08;
    } else {
        uVar8 = param_2;
        if (0xbfff < param_2) {
            uVar8 = 0xc000;
        }
        uVar10 = param_1 + uVar8;
        uVar7 = param_2;
        if (uVar10 < uVar10 + (uVar8 >> 5)) {
            iVar9 = 0;
            uVar7 = param_1;
            while (true) {
                uVar11 = uVar10;
                uVar6 = uVar6 - uVar8;
                memset(param_5, 0, 0x2000);
                iVar9 =
                    FUN_00024688(uVar7, uVar8, pcVar4, param_4, iVar9, param_5);
                pcVar4 = pcVar4 + *param_4;
                if (uVar6 < 0x15)
                    break;
                uVar8 = uVar6;
                if (0xbfff < uVar6) {
                    uVar8 = 0xc000;
                }
                uVar10 = uVar11 + uVar8;
                uVar3 = uVar10 + (uVar8 + iVar9 >> 5);
                if ((uVar3 <= uVar10) || (uVar7 = uVar11, uVar3 <= uVar10))
                    break;
            }
            goto LAB_00024b00;
        }
    }
    bVar14 = uVar7 == 0xee;
    if (uVar7 < 0xef) {
        bVar14 = param_3 == pcVar4;
    }
    pcVar12 = (char *)(param_1 + (param_2 - uVar7));
    bVar1 = (byte)uVar7;
    uVar6 = uVar7;
    if (bVar14) {
        *pcVar4 = bVar1 + 0x11;
        pcVar2 = pcVar4 + 1;
        if (uVar7 < 8) {
            pcVar5 = pcVar2;
            if (uVar7 < 4)
                goto LAB_00024c1c;
        LAB_00024bfc:
            pcVar2 = pcVar4 + 1;
            pcVar4 = pcVar2;
        LAB_00024bbc:
            pcVar13 = pcVar12 + 4;
            uVar6 = uVar6 - 4;
            pcVar5 = pcVar4 + 4;
            *(undefined4 *)pcVar4 = *(undefined4 *)pcVar12;
        } else {
        LAB_00024b74:
            iVar9 = (uVar7 - 8 & 0xfffffff8) + 8;
            pcVar4 = pcVar12;
            pcVar13 = pcVar2;
            do {
                pcVar5 = pcVar13 + 8;
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(pcVar4 + 4);
                pcVar4 = pcVar4 + 8;
                pcVar13 = pcVar5;
            } while (pcVar2 + iVar9 != pcVar5);
            uVar6 = uVar7 & 7;
            pcVar12 = pcVar12 + iVar9;
            pcVar4 = pcVar5;
            pcVar13 = pcVar12;
            if (3 < uVar6)
                goto LAB_00024bbc;
        }
        pcVar12 = pcVar13;
        if (uVar6 != 0)
            goto LAB_00024c1c;
    } else {
        if (3 < uVar7) {
            pcVar2 = pcVar4 + 1;
            if (uVar7 < 0x13) {
                *pcVar4 = bVar1 - 3;
                if (uVar7 < 8)
                    goto LAB_00024bfc;
            } else {
                *pcVar4 = bVar14;
                for (uVar6 = uVar7 - 0x12; 0xff < uVar6; uVar6 = uVar6 - 0xff) {
                    *pcVar2 = bVar14;
                    pcVar2 = pcVar2 + 1;
                }
                *pcVar2 = (char)uVar6;
                pcVar2 = pcVar2 + 1;
            }
            goto LAB_00024b74;
        }
        pcVar4[-2] = pcVar4[-2] | bVar1;
        pcVar2 = pcVar4;
        pcVar5 = pcVar4;
    LAB_00024c1c:
        pcVar5 = pcVar5 + -1;
        pcVar4 = pcVar12;
        do {
            pcVar13 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
            *pcVar5 = *pcVar4;
            pcVar4 = pcVar13;
        } while (pcVar13 != pcVar12 + uVar6);
    }
    pcVar4 = pcVar2 + uVar7;
LAB_00024b08:
    *pcVar4 = '\x11';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    *param_4 = (int)(pcVar4 + (3 - (int)param_3));
    return;
}

int FUN_00024c84(uint *param_1, int param_2, byte *param_3, int *param_4,
                 uint param_5, int param_6)

{
    byte bVar1;
    char cVar2;
    byte bVar3;
    byte bVar4;
    byte bVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    byte *pbVar9;
    uint uVar10;
    uint *puVar11;
    uint uVar12;
    uint *puVar13;
    undefined4 *puVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    uint uVar18;
    uint *puVar19;
    byte *pbVar20;
    undefined4 *puVar21;
    byte *pbVar22;
    byte *pbVar23;
    bool bVar24;
    bool bVar25;

    puVar19 = (uint *)((int)param_1 + param_2 + -0x14);
    puVar7 = param_1;
    puVar8 = param_1;
    pbVar22 = param_3;
    if (param_5 < 4) {
        puVar7 = (uint *)((int)param_1 + (4 - param_5));
    }
    do {
        puVar7 = (uint *)((int)puVar7 + ((int)puVar7 - (int)puVar8 >> 5) + 1);
        if (puVar19 <= puVar7) {
            iVar15 = -param_5;
        LAB_00024e0c:
            *param_4 = (int)pbVar22 - (int)param_3;
            return (int)param_1 + (param_2 - ((int)puVar8 + iVar15));
        }
        uVar12 = *puVar7;
        iVar15 = (int)puVar7 - (int)param_1;
        while (true) {
            iVar16 = (uVar12 * 0x1824429d >> 0x13) * 2;
            uVar10 = (uint) * (ushort *)(param_6 + iVar16);
            *(short *)(param_6 + iVar16) = (short)iVar15;
            puVar11 = (uint *)((int)param_1 + uVar10);
            if (*(uint *)((int)param_1 + uVar10) != uVar12)
                break;
            puVar21 = (undefined4 *)((int)puVar8 - param_5);
            uVar12 = (int)puVar7 - (int)puVar21;
            pbVar20 = pbVar22;
            if (uVar12 != 0) {
                bVar1 = (byte)uVar12;
                if (uVar12 < 4) {
                    pbVar22[-2] = pbVar22[-2] | bVar1;
                    pbVar20 = pbVar22 + uVar12;
                    *(undefined4 *)pbVar22 = *puVar21;
                } else if (uVar12 < 0x11) {
                    *pbVar22 = bVar1 - 3;
                    *(undefined4 *)(pbVar22 + 1) = *puVar21;
                    *(undefined4 *)(pbVar22 + 5) = puVar21[1];
                    *(undefined4 *)(pbVar22 + 9) = puVar21[2];
                    *(undefined4 *)(pbVar22 + 0xd) = puVar21[3];
                    pbVar20 = pbVar22 + uVar12 + 1;
                } else {
                    pbVar9 = pbVar22 + 1;
                    if (uVar12 < 0x13) {
                        *pbVar22 = bVar1 - 3;
                    } else {
                        *pbVar22 = 0;
                        for (uVar10 = uVar12 - 0x12; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar9 = 0;
                            pbVar9 = pbVar9 + 1;
                        }
                        *pbVar9 = (byte)uVar10;
                        pbVar9 = pbVar9 + 1;
                    }
                    uVar10 = uVar12 - 0x10 >> 4;
                    iVar15 = uVar10 + 1;
                    pbVar20 = pbVar9;
                    puVar14 = puVar21;
                    do {
                        pbVar22 = pbVar20;
                        pbVar20 = pbVar22 + 0x10;
                        *(undefined4 *)pbVar22 = *puVar14;
                        *(undefined4 *)(pbVar22 + 4) = puVar14[1];
                        *(undefined4 *)(pbVar22 + 8) = puVar14[2];
                        *(undefined4 *)(pbVar22 + 0xc) = puVar14[3];
                        puVar14 = puVar14 + 4;
                    } while (pbVar20 != pbVar9 + iVar15 * 0x10);
                    iVar16 = uVar12 + uVar10 * -0x10;
                    iVar17 = iVar16 + -0x10;
                    if (iVar17 != 0) {
                        pbVar9 = pbVar22 + 0xf;
                        pbVar20 = (byte *)(puVar21 + iVar15 * 4);
                        do {
                            pbVar23 = pbVar20 + 1;
                            pbVar9 = pbVar9 + 1;
                            *pbVar9 = *pbVar20;
                            pbVar20 = pbVar23;
                        } while (
                            pbVar23 !=
                            (byte *)((int)(puVar21 + iVar15 * 4) + iVar17));
                        pbVar20 = pbVar22 + iVar16;
                    }
                }
            }
            uVar12 = puVar11[1] ^ puVar7[1];
            if (puVar7[1] == puVar11[1]) {
                puVar8 = puVar7 + 3;
                puVar6 = puVar11;
                do {
                    puVar13 = puVar6 + 2;
                    uVar12 = puVar8[-1];
                    uVar10 = (int)puVar13 - (int)puVar11;
                    uVar18 = *puVar13;
                    if (uVar12 != uVar18)
                        break;
                    uVar12 = *puVar8;
                    uVar10 = (4 - (int)puVar11) + (int)puVar13;
                    uVar18 = puVar6[3];
                    if (puVar19 <= puVar8)
                        goto LAB_00024db8;
                    puVar8 = puVar8 + 2;
                    puVar6 = puVar13;
                } while (uVar12 == uVar18);
                uVar12 = uVar12 ^ uVar18;
            } else {
                uVar10 = 4;
            }
            bVar3 = (byte)uVar12;
            bVar4 = (byte)(uVar12 >> 8);
            bVar5 = (byte)(uVar12 >> 0x10);
            bVar1 = (byte)(uVar12 >> 0x18);
            uVar10 = uVar10 +
                     ((uint)LZCOUNT(
                          (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                << 1 |
                                            bVar3 >> 2 & 1)
                                               << 1 |
                                           bVar3 >> 3 & 1)
                                              << 1 |
                                          bVar3 >> 4 & 1)
                                             << 1 |
                                         bVar3 >> 5 & 1)
                                            << 1 |
                                        bVar3 >> 6 & 1)
                                           << 1 |
                                       bVar3 >> 7)
                              << 0x18 |
                          (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                << 1 |
                                            bVar4 >> 2 & 1)
                                               << 1 |
                                           bVar4 >> 3 & 1)
                                              << 1 |
                                          bVar4 >> 4 & 1)
                                             << 1 |
                                         bVar4 >> 5 & 1)
                                            << 1 |
                                        bVar4 >> 6 & 1)
                                           << 1 |
                                       bVar4 >> 7)
                              << 0x10 |
                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                << 1 |
                                            bVar5 >> 2 & 1)
                                               << 1 |
                                           bVar5 >> 3 & 1)
                                              << 1 |
                                          bVar5 >> 4 & 1)
                                             << 1 |
                                         bVar5 >> 5 & 1)
                                            << 1 |
                                        bVar5 >> 6 & 1)
                                           << 1 |
                                       bVar5 >> 7)
                              << 8 |
                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                << 1 |
                                            bVar1 >> 2 & 1)
                                               << 1 |
                                           bVar1 >> 3 & 1)
                                              << 1 |
                                          bVar1 >> 4 & 1)
                                             << 1 |
                                         bVar1 >> 5 & 1)
                                            << 1 |
                                        bVar1 >> 6 & 1)
                                           << 1 |
                                       bVar1 >> 7)) >>
                      3);
            puVar8 = (uint *)((int)puVar7 + uVar10);
        LAB_00024db8:
            uVar12 = (int)puVar7 - (int)puVar11;
            bVar25 = 7 < uVar10;
            bVar24 = uVar10 == 8;
            if (uVar10 < 9) {
                bVar25 = 0x7ff < uVar12;
                bVar24 = uVar12 == 0x800;
            }
            cVar2 = (char)uVar10;
            if (!bVar25 || bVar24) {
                *pbVar20 =
                    (char)(uVar12 - 1) * '\x04' & 0x1cU | (cVar2 + -1) * ' ';
                pbVar20[1] = (byte)(uVar12 - 1 >> 3);
                pbVar22 = pbVar20;
            } else {
                pbVar22 = pbVar20 + 1;
                if (uVar12 < 0x4001) {
                    uVar12 = uVar12 - 1;
                    if (uVar10 < 0x22) {
                        *pbVar20 = cVar2 - 2U | 0x20;
                    } else {
                        *pbVar20 = 0x20;
                        for (uVar10 = uVar10 - 0x21; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar22 = 0;
                            pbVar22 = pbVar22 + 1;
                        }
                    LAB_00024ef4:
                        *pbVar22 = (byte)uVar10;
                        pbVar22 = pbVar22 + 1;
                    }
                } else {
                    uVar12 = uVar12 - 0x4000;
                    bVar1 = (byte)(uVar12 >> 0xb) & 8 | 0x10;
                    if (9 < uVar10) {
                        *pbVar20 = bVar1;
                        for (uVar10 = uVar10 - 9; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar22 = 0;
                            pbVar22 = pbVar22 + 1;
                        }
                        goto LAB_00024ef4;
                    }
                    *pbVar20 = bVar1 | cVar2 - 2U;
                }
                *pbVar22 = (byte)(uVar12 << 2);
                pbVar22[1] = (byte)(uVar12 >> 6);
            }
            pbVar22 = pbVar22 + 2;
            if (puVar19 <= puVar8) {
                iVar15 = 0;
                goto LAB_00024e0c;
            }
            uVar12 = *puVar8;
            iVar15 = (int)puVar8 - (int)param_1;
            param_5 = 0;
            puVar7 = puVar8;
        }
    } while (true);
}

void lzo1x_1_15_compress(uint param_1, uint param_2, char *param_3,
                         int *param_4, void *param_5)

{
    byte bVar1;
    char *pcVar2;
    uint uVar3;
    char *pcVar4;
    char *pcVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    uint uVar10;
    uint uVar11;
    char *pcVar12;
    char *pcVar13;
    bool bVar14;

    pcVar4 = param_3;
    uVar6 = param_2;
    if (param_2 < 0x15) {
        iVar9 = 0;
    LAB_000250fc:
        uVar7 = iVar9 + uVar6;
        if (iVar9 + uVar6 == 0)
            goto LAB_00025104;
    } else {
        uVar8 = param_2;
        if (0xbfff < param_2) {
            uVar8 = 0xc000;
        }
        uVar10 = param_1 + uVar8;
        uVar7 = param_2;
        if (uVar10 < uVar10 + (uVar8 >> 5)) {
            iVar9 = 0;
            uVar7 = param_1;
            while (true) {
                uVar11 = uVar10;
                uVar6 = uVar6 - uVar8;
                memset(param_5, 0, 0x4000);
                iVar9 =
                    FUN_00024c84(uVar7, uVar8, pcVar4, param_4, iVar9, param_5);
                pcVar4 = pcVar4 + *param_4;
                if (uVar6 < 0x15)
                    break;
                uVar8 = uVar6;
                if (0xbfff < uVar6) {
                    uVar8 = 0xc000;
                }
                uVar10 = uVar11 + uVar8;
                uVar3 = uVar10 + (uVar8 + iVar9 >> 5);
                if ((uVar3 <= uVar10) || (uVar7 = uVar11, uVar3 <= uVar10))
                    break;
            }
            goto LAB_000250fc;
        }
    }
    bVar14 = uVar7 == 0xee;
    if (uVar7 < 0xef) {
        bVar14 = param_3 == pcVar4;
    }
    pcVar12 = (char *)(param_1 + (param_2 - uVar7));
    bVar1 = (byte)uVar7;
    uVar6 = uVar7;
    if (bVar14) {
        *pcVar4 = bVar1 + 0x11;
        pcVar2 = pcVar4 + 1;
        if (uVar7 < 8) {
            pcVar5 = pcVar2;
            if (uVar7 < 4)
                goto LAB_00025218;
        LAB_000251f8:
            pcVar2 = pcVar4 + 1;
            pcVar4 = pcVar2;
        LAB_000251b8:
            pcVar13 = pcVar12 + 4;
            uVar6 = uVar6 - 4;
            pcVar5 = pcVar4 + 4;
            *(undefined4 *)pcVar4 = *(undefined4 *)pcVar12;
        } else {
        LAB_00025170:
            iVar9 = (uVar7 - 8 & 0xfffffff8) + 8;
            pcVar4 = pcVar12;
            pcVar13 = pcVar2;
            do {
                pcVar5 = pcVar13 + 8;
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(pcVar4 + 4);
                pcVar4 = pcVar4 + 8;
                pcVar13 = pcVar5;
            } while (pcVar2 + iVar9 != pcVar5);
            uVar6 = uVar7 & 7;
            pcVar12 = pcVar12 + iVar9;
            pcVar4 = pcVar5;
            pcVar13 = pcVar12;
            if (3 < uVar6)
                goto LAB_000251b8;
        }
        pcVar12 = pcVar13;
        if (uVar6 != 0)
            goto LAB_00025218;
    } else {
        if (3 < uVar7) {
            pcVar2 = pcVar4 + 1;
            if (uVar7 < 0x13) {
                *pcVar4 = bVar1 - 3;
                if (uVar7 < 8)
                    goto LAB_000251f8;
            } else {
                *pcVar4 = bVar14;
                for (uVar6 = uVar7 - 0x12; 0xff < uVar6; uVar6 = uVar6 - 0xff) {
                    *pcVar2 = bVar14;
                    pcVar2 = pcVar2 + 1;
                }
                *pcVar2 = (char)uVar6;
                pcVar2 = pcVar2 + 1;
            }
            goto LAB_00025170;
        }
        pcVar4[-2] = pcVar4[-2] | bVar1;
        pcVar2 = pcVar4;
        pcVar5 = pcVar4;
    LAB_00025218:
        pcVar5 = pcVar5 + -1;
        pcVar4 = pcVar12;
        do {
            pcVar13 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
            *pcVar5 = *pcVar4;
            pcVar4 = pcVar13;
        } while (pcVar13 != pcVar12 + uVar6);
    }
    pcVar4 = pcVar2 + uVar7;
LAB_00025104:
    *pcVar4 = '\x11';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    *param_4 = (int)(pcVar4 + (3 - (int)param_3));
    return;
}

byte *FUN_00025280(int param_1, byte *param_2, uint param_3, uint param_4)

{
    byte bVar1;
    char cVar2;
    byte *pbVar3;
    uint uVar4;
    byte *pbVar5;
    uint uVar6;
    byte *pbVar7;
    bool bVar8;
    bool bVar9;

    *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_3;
    if (param_3 == 2) {
        pbVar3 = param_2 + 2;
        *param_2 = (char)(param_4 - 1) * '\x04' & 0xc;
        param_2[1] = (byte)(param_4 - 1 >> 2);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        goto LAB_00025340;
    }
    bVar9 = 7 < param_3;
    bVar8 = param_3 == 8;
    if (param_3 < 9) {
        bVar9 = 0x7ff < param_4;
        bVar8 = param_4 == 0x800;
    }
    cVar2 = (char)param_3;
    if (!bVar9 || bVar8) {
        pbVar3 = param_2 + 2;
        *param_2 = (char)(param_4 - 1) * '\x04' & 0x1cU | (cVar2 + -1) * ' ';
        param_2[1] = (byte)(param_4 - 1 >> 3);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        goto LAB_00025340;
    }
    bVar8 = param_4 == 0xc00;
    if (param_4 < 0xc01) {
        bVar8 = param_3 == 3;
    }
    if (bVar8) {
        if (3 < *(uint *)(param_1 + 0x4c)) {
            pbVar3 = param_2 + 2;
            *param_2 = (char)(param_4 - 0x801) * '\x04' & 0xc;
            param_2[1] = (byte)(param_4 - 0x801 >> 2);
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
            goto LAB_00025340;
        }
    LAB_00025388:
        pbVar5 = param_2 + 1;
        *param_2 = cVar2 - 2U | 0x20;
    } else {
        pbVar7 = param_2 + 1;
        if (0x4000 < param_4) {
            uVar6 = param_4 - 0x4000;
            bVar1 = (byte)(uVar6 >> 0xb) & 8;
            if (param_3 < 10) {
                *param_2 = bVar1 | cVar2 - 2U | 0x10;
            } else {
                *param_2 = bVar1 | 0x10;
                for (uVar4 = param_3 - 9; 0xff < uVar4; uVar4 = uVar4 - 0xff) {
                    *pbVar7 = 0;
                    pbVar7 = pbVar7 + 1;
                }
                *pbVar7 = (byte)uVar4;
                pbVar7 = pbVar7 + 1;
            }
            pbVar3 = pbVar7 + 2;
            *pbVar7 = (char)uVar6 * '\x04';
            pbVar7[1] = (byte)(uVar6 >> 6);
            *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
            goto LAB_00025340;
        }
        if (param_3 < 0x22)
            goto LAB_00025388;
        *param_2 = 0x20;
        for (uVar6 = param_3 - 0x21; 0xff < uVar6; uVar6 = uVar6 - 0xff) {
            *pbVar7 = 0;
            pbVar7 = pbVar7 + 1;
        }
        pbVar5 = pbVar7 + 1;
        *pbVar7 = (byte)uVar6;
    }
    pbVar3 = pbVar5 + 2;
    *pbVar5 = (char)(param_4 - 1) * '\x04';
    pbVar5[1] = (byte)(param_4 - 1 >> 6);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
LAB_00025340:
    *(uint *)(param_1 + 0x10) = param_3;
    *(uint *)(param_1 + 0x14) = param_4;
    return pbVar3;
}

char *FUN_0002545c(int param_1, char *param_2, char *param_3, uint param_4)

{
    byte bVar1;
    char *pcVar2;
    char *pcVar4;
    uint uVar5;
    char *pcVar6;
    char *pcVar3;

    *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_4;
    bVar1 = (byte)param_4;
    if (*(char **)(param_1 + 0x28) == param_2) {
        if (param_4 < 0xef) {
            pcVar6 = param_2 + 1;
            *param_2 = bVar1 + 0x11;
            goto LAB_00025498;
        }
    } else {
        if (param_4 < 4) {
            param_2[-2] = param_2[-2] | bVar1;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            pcVar6 = param_2;
            goto LAB_00025498;
        }
        pcVar6 = param_2 + 1;
        if (param_4 < 0x13) {
            *param_2 = bVar1 - 3;
            *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
            goto LAB_00025498;
        }
    }
    *param_2 = '\0';
    pcVar6 = param_2 + 1;
    for (uVar5 = param_4 - 0x12; 0xff < uVar5; uVar5 = uVar5 - 0xff) {
        *pcVar6 = '\0';
        pcVar6 = pcVar6 + 1;
    }
    *pcVar6 = (char)uVar5;
    pcVar6 = pcVar6 + 1;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
LAB_00025498:
    pcVar4 = pcVar6 + -1;
    pcVar3 = param_3;
    do {
        pcVar2 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
        *pcVar4 = *pcVar3;
        pcVar3 = pcVar2;
    } while (pcVar2 != param_3 + param_4);
    return pcVar6 + param_4;
}

void FUN_00025538(int param_1, uint *param_2, uint *param_3)

{
    uint uVar1;

    uVar1 = *param_2;
    if (uVar1 < 4) {
        return;
    }
    if (*param_3 < 0x801) {
        return;
    }
    if (uVar1 < 10) {
        param_1 = param_1 + uVar1 * 4;
        if (0x7ff < *(int *)(param_1 + 0x28) - 1U) {
            return;
        }
    } else {
        if (*param_3 < 0x4001) {
            return;
        }
        if (uVar1 == 10) {
            if (*(int *)(param_1 + 0x4c) - 1U < 0x800) {
                *param_2 = 8;
                *param_3 = *(uint *)(param_1 + 0x4c);
                return;
            }
        } else if (0x22 < uVar1) {
            return;
        }
        param_1 = param_1 + uVar1 * 4;
        if (0x3fff < *(int *)(param_1 + 0x28) - 1U) {
            return;
        }
    }
    *param_2 = uVar1 - 1;
    *param_3 = *(uint *)(param_1 + 0x28);
    return;
}

int FUN_000255d8(uint param_1, uint param_2, uint param_3)

{
    int iVar1;
    bool bVar2;
    bool bVar3;

    if (param_1 < 2) {
        return 0;
    }
    if (param_1 == 2) {
        param_3 = param_3 - 1;
        bVar3 = 1 < param_3;
        bVar2 = param_3 == 2;
        if (param_3 < 3) {
            bVar3 = 0x3ff < param_2;
            bVar2 = param_2 == 0x400;
        }
        if (bVar3 && !bVar2) {
            iVar1 = 0;
        } else {
            iVar1 = 2;
        }
        return iVar1;
    }
    bVar3 = 7 < param_1;
    bVar2 = param_1 == 8;
    if (param_1 < 9) {
        bVar3 = 0x7ff < param_2;
        bVar2 = param_2 == 0x800;
    }
    if (!bVar3 || bVar2) {
        return 2;
    }
    bVar2 = param_2 == 0xc00;
    if (param_2 < 0xc01) {
        bVar2 = param_1 == 3;
    }
    if (!bVar2) {
        if (param_2 < 0x4001) {
            if (0x21 < param_1) {
                param_1 = param_1 - 0x21;
                iVar1 = 4;
                if (param_1 < 0x100) {
                    return 4;
                }
                do {
                    param_1 = param_1 - 0xff;
                    iVar1 = iVar1 + 1;
                } while (0xff < param_1);
                return iVar1;
            }
        } else {
            if (0xbfff < param_2) {
                return 0;
            }
            if (9 < param_1) {
                param_1 = param_1 - 9;
                iVar1 = 4;
                if (param_1 < 0x100) {
                    return 4;
                }
                do {
                    param_1 = param_1 - 0xff;
                    iVar1 = iVar1 + 1;
                } while (0xff < param_1);
                return iVar1;
            }
        }
        return 3;
    }
    if (param_3 < 4) {
        iVar1 = 3;
    } else {
        iVar1 = 2;
    }
    return iVar1;
}

undefined4 FUN_000256a8(int param_1, int param_2, int param_3, int param_4)

{
    ushort uVar1;
    short sVar2;
    char *pcVar3;
    undefined1 uVar4;
    ushort *puVar5;
    uint uVar6;
    int *piVar7;
    char *pcVar9;
    undefined2 uVar10;
    uint uVar11;
    int iVar13;
    int iVar14;
    uint uVar15;
    short *psVar16;
    uint uVar17;
    ushort *puVar18;
    undefined1 *puVar19;
    int iVar20;
    int iVar21;
    ushort *puVar22;
    char cVar23;
    uint uVar24;
    uint uVar25;
    uint uVar26;
    undefined1 *puVar27;
    char *pcVar28;
    bool bVar29;
    undefined2 local_48;
    int *piVar8;
    uint uVar12;

    puVar18 = (ushort *)(param_2 + 0x16c);
    if (param_4 == 0) {
        uVar17 = *(uint *)(param_2 + 0x154);
        iVar20 = uVar17 + 1;
        iVar21 = uVar17 + 2;
        local_48 = (undefined2)uVar17;
        puVar22 = (ushort *)((int)puVar18 + uVar17);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
    } else {
        param_3 = param_3 - param_4;
        uVar17 = *(uint *)(param_2 + 0x154);
        uVar24 = uVar17;
        iVar14 = param_3;
        if (param_3 == 0) {
            local_48 = (undefined2)uVar17;
            iVar20 = uVar17 + 1;
            iVar21 = uVar17 + 2;
            puVar22 = (ushort *)((int)puVar18 + uVar17);
        } else {
            do {
                uVar26 = *(uint *)(param_2 + 0x158);
                if (*(int *)(param_2 + 0x164) == 0) {
                    iVar20 = param_2 + uVar26;
                    psVar16 =
                        (short *)(param_2 +
                                  (((uint) * (byte *)(iVar20 + 0x16e) ^
                                    ((uint) * (byte *)(iVar20 + 0x16d) ^
                                     (uint) * (byte *)(iVar20 + 0x16c) << 5)
                                        << 5) *
                                       0x13ebe000 >>
                                   0x12) *
                                      2 +
                                  0x47168);
                    *psVar16 = *psVar16 + -1;
                    puVar22 =
                        (ushort *)(param_2 +
                                   (uint) * (ushort *)((int)puVar18 + uVar26) *
                                       2 +
                                   0x4f168);
                    if (uVar26 == *puVar22) {
                        *puVar22 = 0xffff;
                    }
                } else {
                    *(int *)(param_2 + 0x164) = *(int *)(param_2 + 0x164) + -1;
                }
                uVar17 = uVar24 + 1;
                iVar20 = param_2 +
                         (((uint) * (byte *)(param_2 + uVar24 + 0x16e) ^
                           ((uint) * (byte *)(param_2 + uVar17 + 0x16c) ^
                            (uint) * (byte *)(param_2 + uVar24 + 0x16c) << 5)
                               << 5) *
                              0x13ebe000 >>
                          0x12) *
                             2;
                sVar2 = *(short *)(iVar20 + 0x47168);
                if (sVar2 == 0) {
                    uVar10 = 0xffff;
                } else {
                    uVar10 = *(undefined2 *)(iVar20 + 0xd16c);
                }
                iVar21 = param_2 + uVar24 * 2;
                *(undefined2 *)(iVar21 + 0x1516c) = uVar10;
                *(short *)(iVar20 + 0xd16c) = (short)uVar24;
                uVar15 = *(uint *)(param_2 + 4);
                *(short *)(iVar21 + 0x2e16a) = (short)uVar15 + 1;
                *(short *)(iVar20 + 0x47168) = sVar2 + 1;
                iVar20 = *(int *)(param_2 + 0xb4);
                uVar11 = *(uint *)(param_2 + 0x150);
                puVar27 = *(undefined1 **)(iVar20 + 0x1c);
                puVar19 = *(undefined1 **)(iVar20 + 0x24);
                *(short *)(param_2 +
                           (*(ushort *)((int)puVar18 + uVar24) + 0x278b4) * 2) =
                    (short)uVar24;
                if (puVar27 < puVar19) {
                    *(undefined1 **)(iVar20 + 0x1c) = puVar27 + 1;
                    uVar4 = *puVar27;
                    *(undefined1 *)(param_2 + uVar11 + 0x16c) = uVar4;
                    if (uVar11 < uVar15) {
                        *(undefined1 *)(*(int *)(param_2 + 0x160) + uVar11) =
                            uVar4;
                        uVar11 = *(uint *)(param_2 + 0x150);
                        uVar26 = *(uint *)(param_2 + 0x158);
                        uVar17 = *(int *)(param_2 + 0x154) + 1;
                    }
                } else {
                    if (*(int *)(param_2 + 0x24) != 0) {
                        *(int *)(param_2 + 0x24) =
                            *(int *)(param_2 + 0x24) + -1;
                    }
                    *(undefined1 *)(param_2 + uVar11 + 0x16c) = 0;
                    if (uVar11 < uVar15) {
                        *(undefined1 *)(*(int *)(param_2 + 0x160) + uVar11) = 0;
                        uVar11 = *(uint *)(param_2 + 0x150);
                        uVar26 = *(uint *)(param_2 + 0x158);
                        uVar17 = *(int *)(param_2 + 0x154) + 1;
                    }
                }
                uVar24 = *(uint *)(param_2 + 0x15c);
                *(uint *)(param_2 + 0x150) = uVar11 + 1;
                if (uVar11 + 1 == uVar24) {
                    *(undefined4 *)(param_2 + 0x150) = 0;
                }
                if (uVar24 == uVar17) {
                    local_48 = 0;
                    uVar17 = 0;
                    iVar21 = 2;
                    iVar20 = 1;
                    *(undefined4 *)(param_2 + 0x154) = 0;
                    puVar22 = puVar18;
                } else {
                    local_48 = (undefined2)uVar17;
                    iVar20 = uVar17 + 1;
                    iVar21 = uVar17 + 2;
                    *(uint *)(param_2 + 0x154) = uVar17;
                    puVar22 = (ushort *)((int)puVar18 + uVar17);
                }
                uVar26 = uVar26 + 1;
                if (uVar24 == uVar26) {
                    uVar26 = 0;
                }
                iVar14 = iVar14 + -1;
                *(uint *)(param_2 + 0x158) = uVar26;
                uVar24 = uVar17;
            } while (iVar14 != 0);
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1 + param_3;
    }
    iVar14 = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 1;
    if (iVar14 != 0) {
        memset((void *)(param_2 + 0xbc), 0, 0x88);
    }
    uVar26 = (uint) * (byte *)(param_2 + uVar17 + 0x16c);
    iVar21 =
        param_2 +
        (((uint) * (byte *)(param_2 + iVar21 + 0x16c) ^
          ((uint) * (byte *)(param_2 + iVar20 + 0x16c) ^ uVar26 << 5) << 5) *
             0x13ebe000 >>
         0x12) *
            2;
    puVar5 = (ushort *)(iVar21 + 0x47168);
    uVar1 = *puVar5;
    uVar24 = (uint)uVar1;
    if (uVar24 == 0) {
        *(undefined2 *)(param_2 + (uVar17 + 0xa8b4) * 2 + 4) = 0xffff;
        uVar15 = 0xffff;
        *puVar5 = 1;
        uVar11 = uVar24;
    } else {
        uVar15 = (uint) * (ushort *)(iVar21 + 0xd16c);
        *(ushort *)(param_2 + (uVar17 + 0xa8b4) * 2 + 4) =
            *(ushort *)(iVar21 + 0xd16c);
        *puVar5 = uVar1 + 1;
        uVar11 = *(uint *)(param_2 + 0xc);
        if (uVar11 == 0 || uVar24 <= uVar11) {
            uVar11 = uVar24;
        }
    }
    *(undefined2 *)(iVar21 + 0xd16c) = local_48;
    uVar24 = *(uint *)(param_2 + 0x24);
    *(uint *)(param_2 + 0x28) = uVar26;
    if (uVar24 < 2) {
        uVar26 = *(uint *)(param_2 + 4);
        if (uVar24 == 0) {
            uVar15 = 0xffffffff;
        }
        iVar21 = *(int *)(param_2 + 0x20);
        if (uVar24 == 0) {
            *(uint *)(param_2 + 0x28) = uVar15;
        }
        uVar25 = *(uint *)(param_2 + 0x1c);
        *(short *)(param_2 + (uVar17 + 0x170b4) * 2 + 2) = (short)uVar26 + 1;
        goto LAB_000257d0;
    }
    uVar26 = (uint) * (ushort *)(param_2 + (*puVar22 + 0x278b4) * 2);
    if (uVar26 == 0xffff) {
        uVar25 = *(uint *)(param_2 + 0x1c);
        iVar21 = *(int *)(param_2 + 0x20);
        uVar10 = (undefined2)uVar25;
    } else {
        *(uint *)(param_2 + 0xb8) = uVar26;
        if (*(int *)(param_2 + 0xc4) == 0) {
            *(uint *)(param_2 + 0xc4) = uVar26 + 1;
        }
        uVar6 = 2;
        *(undefined4 *)(param_2 + 0x1c) = 2;
        uVar12 = uVar24;
        uVar25 = uVar24;
        if (uVar24 != 2) {
            iVar21 = uVar11 - 1;
            cVar23 = *(char *)((int)puVar22 + 1);
            uVar12 = uVar6;
            uVar25 = uVar6;
            if (uVar11 != 0) {
                uVar26 = uVar15;
                do {
                    pcVar9 = (char *)((int)puVar18 + uVar26);
                    if ((((pcVar9[uVar6 - 1] == cVar23) &&
                          (pcVar9[uVar6] == *(char *)((int)puVar22 + uVar6))) &&
                         (*pcVar9 == (char)*puVar22)) &&
                        (pcVar9[1] == *(char *)((int)puVar22 + 1))) {
                        pcVar9 = pcVar9 + 2;
                        pcVar3 = (char *)((int)puVar22 + 3);
                        do {
                            pcVar28 = pcVar3;
                            if ((char *)((int)puVar18 + uVar24 + uVar17) <=
                                pcVar28)
                                break;
                            pcVar9 = pcVar9 + 1;
                            pcVar3 = pcVar28 + 1;
                        } while (*pcVar28 == *pcVar9);
                        uVar11 = (int)pcVar28 - (int)puVar22;
                        if ((uVar11 < 0x22) && (iVar13 = param_2 + uVar11 * 4,
                                                *(int *)(iVar13 + 0xbc) == 0)) {
                            *(uint *)(iVar13 + 0xbc) = uVar26 + 1;
                        }
                        if (uVar6 < uVar11) {
                            *(uint *)(param_2 + 0x1c) = uVar11;
                            *(uint *)(param_2 + 0xb8) = uVar26;
                            if (uVar24 == uVar11) {
                                uVar12 = uVar24 & 0xffff;
                                uVar25 = uVar24;
                                goto LAB_00025980;
                            }
                            if ((*(uint *)(param_2 + 0x10) <= uVar11) ||
                                (*(ushort *)(param_2 + (uVar26 + 0x170b4) * 2 +
                                             2) < uVar11))
                                break;
                            cVar23 = *(char *)((int)puVar22 + (uVar11 - 1));
                            uVar6 = uVar11;
                        }
                    }
                    iVar21 = iVar21 + -1;
                    uVar26 =
                        (uint) * (ushort *)(param_2 + 0x1516c + uVar26 * 2);
                } while (iVar21 != -1);
                uVar25 = *(uint *)(param_2 + 0x1c);
                uVar10 = (undefined2)uVar25;
                if (uVar25 < 2) {
                    iVar21 = *(int *)(param_2 + 0x20);
                    goto LAB_00025998;
                }
                uVar26 = *(uint *)(param_2 + 0xb8);
                uVar12 = uVar25 & 0xffff;
            }
        }
    LAB_00025980:
        uVar10 = (undefined2)uVar12;
        if (uVar26 < uVar17) {
            iVar21 = uVar17 - uVar26;
        } else {
            iVar21 = (uVar17 + *(int *)(param_2 + 0x15c)) - uVar26;
        }
        *(int *)(param_2 + 0x20) = iVar21;
    }
LAB_00025998:
    uVar26 = *(uint *)(param_2 + 4);
    *(undefined2 *)(param_2 + (uVar17 + 0x170b4) * 2 + 2) = uVar10;
    if (iVar14 != 0) {
        piVar7 = (int *)(param_2 + 0xc0);
        do {
            piVar8 = piVar7 + 1;
            iVar14 = *piVar8;
            if (iVar14 == 0) {
                piVar7[-0x23] = 0;
            } else {
                iVar13 = iVar20 - iVar14;
                if (uVar17 <= iVar14 - 1U) {
                    iVar13 = (*(int *)(param_2 + 0x15c) - iVar14) + 1 + uVar17;
                }
                piVar7[-0x23] = iVar13;
            }
            piVar7 = piVar8;
        } while ((int *)(param_2 + 0x140) != piVar8);
    }
LAB_000257d0:
    uVar24 = *(uint *)(param_2 + 0x158);
    if (*(int *)(param_2 + 0x164) == 0) {
        iVar14 = param_2 + uVar24;
        psVar16 = (short *)(param_2 +
                            (((uint) * (byte *)(iVar14 + 0x16e) ^
                              ((uint) * (byte *)(iVar14 + 0x16d) ^
                               (uint) * (byte *)(iVar14 + 0x16c) << 5)
                                  << 5) *
                                 0x13ebe000 >>
                             0x12) *
                                2 +
                            0x47168);
        *psVar16 = *psVar16 + -1;
        puVar18 = (ushort *)(param_2 +
                             (uint) * (ushort *)((int)puVar18 + uVar24) * 2 +
                             0x4f168);
        if (uVar24 == *puVar18) {
            *puVar18 = 0xffff;
        }
    } else {
        *(int *)(param_2 + 0x164) = *(int *)(param_2 + 0x164) + -1;
    }
    iVar14 = *(int *)(param_2 + 0xb4);
    puVar19 = *(undefined1 **)(iVar14 + 0x24);
    puVar27 = *(undefined1 **)(iVar14 + 0x1c);
    *(undefined2 *)(param_2 + (*puVar22 + 0x278b4) * 2) = local_48;
    *(uint *)(param_1 + 8) = uVar25;
    *(int *)(param_1 + 0xc) = iVar21;
    uVar11 = *(uint *)(param_2 + 0x150);
    if (puVar27 < puVar19) {
        *(undefined1 **)(iVar14 + 0x1c) = puVar27 + 1;
        uVar4 = *puVar27;
        *(undefined1 *)(param_2 + uVar11 + 0x16c) = uVar4;
    } else {
        uVar4 = 0;
        if (*(int *)(param_2 + 0x24) != 0) {
            *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
        *(undefined1 *)(param_2 + uVar11 + 0x16c) = 0;
    }
    if (uVar11 < uVar26) {
        *(undefined1 *)(*(int *)(param_2 + 0x160) + uVar11) = uVar4;
        uVar11 = *(uint *)(param_2 + 0x150);
        uVar17 = *(uint *)(param_2 + 0x154);
        uVar24 = *(uint *)(param_2 + 0x158);
    }
    uVar26 = *(uint *)(param_2 + 0x15c);
    *(uint *)(param_2 + 0x150) = uVar11 + 1;
    uVar24 = uVar24 + 1;
    iVar14 = *(int *)(param_1 + 0x2c);
    if (uVar11 + 1 == uVar26) {
        *(undefined4 *)(param_2 + 0x150) = 0;
    }
    if (uVar26 == uVar17 + 1) {
        *(undefined4 *)(param_2 + 0x154) = 0;
    } else {
        *(uint *)(param_2 + 0x154) = uVar17 + 1;
    }
    if (uVar26 == uVar24) {
        *(undefined4 *)(param_2 + 0x158) = 0;
    } else {
        *(uint *)(param_2 + 0x158) = uVar24;
    }
    bVar29 = -1 < *(int *)(param_2 + 0x28);
    if (bVar29) {
        uVar24 = *(uint *)(param_2 + 0x24);
    } else {
        uVar26 = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
    }
    if (bVar29) {
        uVar26 = ~uVar24;
        *(uint *)(param_1 + 4) = uVar24 + 1;
    }
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + uVar26;
    if (((iVar14 != 0) && (*(code **)(iVar14 + 8) != (code *)0x0)) &&
        (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x30))) {
        (**(code **)(iVar14 + 8))(iVar14, *(uint *)(param_1 + 0x30),
                                  *(undefined4 *)(param_1 + 0x34), 0);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x400;
    }
    return 0;
}

/* WARNING: Type propagation algorithm not settling */

int lzo1x_999_compress_internal(undefined1 *param_1, size_t param_2,
                                undefined1 *param_3, undefined4 *param_4,
                                int *param_5, void *param_6, uint param_7,
                                int param_8, uint param_9, uint param_10,
                                uint param_11, int param_12, uint param_13,
                                uint param_14)

{
    short sVar1;
    uint *puVar2;
    int iVar3;
    int iVar4;
    ushort *puVar5;
    ushort *puVar6;
    ushort *puVar7;
    uint extraout_r2;
    uint uVar8;
    int iVar9;
    uint uVar10;
    int *piVar11;
    uint extraout_r3;
    undefined1 *puVar12;
    uint uVar13;
    uint uVar14;
    int iVar15;
    uint uVar16;
    ushort *puVar17;
    size_t __n;
    undefined2 *puVar18;
    uint uVar19;
    undefined2 uVar20;
    uint uVar21;
    uint uVar22;
    int *piVar23;
    bool bVar24;
    bool bVar25;
    undefined1 *local_cc;
    undefined1 *local_b4;
    uint local_a4;
    uint local_a0[3];
    uint local_94;
    uint local_90[3];
    undefined1 *local_84;
    undefined1 *local_80;
    undefined1 *local_7c;
    undefined1 *local_78;
    undefined1 *local_74;
    int local_70;
    undefined4 local_6c;
    undefined1 *local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    int local_54;
    uint local_50;
    uint local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;

    if ((int)param_9 < 0) {
        param_9 = 1;
    }
    local_78 = param_1 + param_2;
    if (param_10 == 0) {
        param_10 = 0x20;
    }
    puVar2 = local_a0 + 1;
    local_a0[1] = 1;
    local_70 = param_8;
    if (param_11 == 0) {
        param_11 = 0x20;
    }
    param_5[0x2d] = (int)puVar2;
    local_38 = 0;
    if (param_13 == 0) {
        param_13 = 0x800;
    }
    local_3c = 0;
    piVar23 = param_5 + 0x2e;
    local_40 = 0;
    piVar11 = param_5 + 10;
    local_44 = 0;
    local_48 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_4c = 0;
    local_50 = 0;
    local_90[2] = 0;
    local_90[1] = 0;
    local_64 = 0;
    local_68 = (undefined1 *)0x0;
    local_6c = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_54 = 0;
    param_5[7] = 0;
    param_5[8] = 0;
    do {
        piVar23 = piVar23 + 1;
        *piVar23 = 0;
        piVar11 = piVar11 + 1;
        *piVar11 = 0;
    } while (param_5 + 0x2c != piVar11);
    param_5[0x58] = (int)param_5 + 0xc96b;
    param_5[2] = 1;
    param_5[0x57] = 0xc7ff;
    param_5[5] = 0;
    param_5[6] = 0;
    *param_5 = 0xbfff;
    param_5[0x59] = 0xbfff;
    param_5[1] = 0x800;
    param_5[3] = 0x800;
    param_5[4] = 0x800;
    local_80 = param_1;
    local_7c = param_1;
    local_74 = param_3;
    memset(param_5 + 0x11c5a, 0, 0x8000);
    memset(param_5 + 0x13c5a, 0xff, 0x20000);
    param_5[0x54] = 0;
    param_5[0x52] = 0;
    param_5[0x51] = 0;
    param_5[0x53] = 0;
    if (param_7 == 0 || param_6 == (void *)0x0) {
        param_5[0x55] = 0;
        param_5[0x5a] = 0;
        param_5[9] = param_2;
        if (param_2 != 0) {
            __n = 0;
            goto LAB_0002607c;
        }
        param_5[0x56] = 0x800;
    } else {
        __n = param_7;
        if (0xbfff < param_7) {
            __n = 0xbfff;
            param_6 = (void *)((int)param_6 + (param_7 - 0xbfff));
        }
        param_5[0x52] = (int)param_6 + __n;
        param_5[0x51] = (int)param_6;
        param_5[0x53] = __n;
        memcpy(param_5 + 0x5b, param_6, __n);
        bVar24 = param_2 == 0;
        param_5[0x54] = __n;
        puVar12 = (undefined1 *)extraout_r3;
        if (bVar24) {
            puVar12 = (undefined1 *)0xc7ff;
        }
        param_5[0x55] = __n;
        param_5[0x5a] = __n;
        uVar8 = extraout_r2;
        if (bVar24) {
            uVar8 = 0xbfff;
        }
        param_5[9] = param_2;
        local_cc = puVar12;
        if (!bVar24) {
        LAB_0002607c:
            if (0x800 < param_2) {
                param_2 = 0x800;
                param_5[9] = 0x800;
            }
            memcpy((void *)((int)param_5 + __n + 0x16c), param_1, param_2);
            param_2 = param_5[9];
            local_cc = (undefined1 *)param_5[0x57];
            puVar12 = (undefined1 *)(param_2 + param_5[0x54]);
            *(size_t *)(param_5[0x2d] + 0x1c) =
                *(int *)(param_5[0x2d] + 0x1c) + param_2;
            param_5[0x54] = (int)puVar12;
            if (puVar12 == local_cc) {
                puVar12 = (undefined1 *)0x0;
                param_5[0x54] = 0;
            }
            if ((param_2 < 2) || (iVar9 = param_5[0x53], iVar9 == 0)) {
                __n = param_5[0x5a];
                uVar8 = param_5[0x59];
            } else {
                iVar3 = param_5[1];
                puVar5 = (ushort *)(param_5 + 0x5b);
                uVar8 = *param_5 - iVar9;
                param_5[0x59] = uVar8;
                puVar18 = (undefined2 *)((int)param_5 + 0x1516a);
                piVar23 = param_5 + 0xb85a;
                param_5[0x5a] = 0;
                puVar6 = puVar5;
                puVar17 = puVar5;
                do {
                    uVar20 = 0xffff;
                    puVar7 = (ushort *)((int)puVar6 + 1);
                    uVar16 =
                        ((uint)(byte)puVar6[1] ^
                         ((uint) * (byte *)puVar7 ^ (uint)(byte)*puVar6 << 5)
                             << 5) *
                            0x13ebe000 >>
                        0x12;
                    sVar1 = *(short *)((int)param_5 + uVar16 * 2 + 0x47168);
                    if (sVar1 != 0) {
                        uVar20 =
                            *(undefined2 *)((int)param_5 + uVar16 * 2 + 0xd16c);
                    }
                    puVar12 =
                        (undefined1 *)((int)puVar17 - (int)puVar5 & 0xffff);
                    puVar18 = puVar18 + 1;
                    *puVar18 = uVar20;
                    uVar20 = (undefined2)((int)puVar17 - (int)puVar5);
                    *(undefined2 *)((int)param_5 + uVar16 * 2 + 0xd16c) =
                        uVar20;
                    piVar23 = (int *)((int)piVar23 + 2);
                    *(short *)piVar23 = (short)iVar3 + 1;
                    *(short *)((int)param_5 + uVar16 * 2 + 0x47168) = sVar1 + 1;
                    *(undefined2 *)((int)param_5 + (*puVar17 + 0x278b4) * 2) =
                        uVar20;
                    puVar6 = puVar7;
                    puVar17 = (ushort *)((int)puVar17 + 1);
                } while ((ushort *)((int)param_5 + iVar9 + 0x16c) != puVar7);
                __n = 0;
            }
        }
        param_5[0x56] = __n;
        if (__n < uVar8) {
            puVar12 = local_cc;
        }
        iVar9 = __n - uVar8;
        if (__n < uVar8) {
            iVar9 = iVar9 + (int)puVar12;
        }
        param_5[0x56] = iVar9;
        if (2 < param_2)
            goto LAB_00026110;
    }
    iVar9 = param_2 + param_5[0x55];
    *(undefined1 *)((int)param_5 + iVar9 + 0x16e) = 0;
    *(undefined1 *)((int)param_5 + iVar9 + 0x16d) = 0;
    *(undefined1 *)((int)param_5 + iVar9 + 0x16c) = 0;
LAB_00026110:
    param_5[5] = param_14 & 1;
    param_5[3] = param_13;
    if (param_12 != 0) {
        param_5[4] = param_12;
    }
    iVar9 = FUN_000256a8(puVar2, param_5, 0);
    if (iVar9 == 0) {
        uVar8 = 0;
        local_cc = param_3;
        local_b4 = param_1;
    LAB_00026168:
        if (local_a0[2] != 0) {
            local_68 = local_cc + -(int)param_3;
            puVar12 = local_68;
            if (uVar8 == 0) {
                puVar12 = local_84;
            }
            local_a4 = local_94;
            local_a0[0] = local_90[0];
            if (uVar8 == 0) {
                local_b4 = puVar12;
            }
            if (local_94 < 2) {
            LAB_00026544:
                uVar8 = uVar8 + 1;
                param_5[3] = param_13;
                local_a4 = 0;
                FUN_000256a8(puVar2, param_5);
            } else {
                if (local_94 == 2) {
                    bVar25 = 0x3ff < local_90[0];
                    bVar24 = local_90[0] == 0x400;
                    if (local_90[0] < 0x401) {
                        bVar25 = 1 < uVar8 - 1;
                        bVar24 = uVar8 - 1 == 2;
                    }
                    if ((!bVar25 || bVar24) && (local_cc != param_3))
                        goto LAB_000261cc;
                    goto LAB_00026544;
                }
                if (uVar8 == 0 && local_cc == param_3)
                    goto LAB_00026544;
                if (local_94 == 3) {
                    bVar25 = 0xbff < local_90[0];
                    bVar24 = local_90[0] == 0xc00;
                    if (0xc00 < local_90[0]) {
                        bVar25 = 2 < uVar8;
                        bVar24 = uVar8 == 3;
                    }
                    if (bVar25 && !bVar24)
                        goto LAB_00026544;
                }
            LAB_000261cc:
                if (param_5[5] != 0) {
                    FUN_00025538(param_5, &local_a4, local_a0);
                }
                uVar16 = local_a4;
                if ((param_9 == 0) || (param_11 <= local_a4)) {
                LAB_0002656c:
                    iVar15 = 1;
                } else {
                    iVar3 = FUN_000255d8(local_a4, local_a0[0], uVar8);
                    uVar13 = iVar3 - 1U;
                    if (param_9 <= iVar3 - 1U) {
                        uVar13 = param_9;
                    }
                    if ((uVar13 == 0) || (local_a0[2] <= uVar16))
                        goto LAB_0002656c;
                    uVar21 = 0;
                    do {
                        uVar19 = uVar21 + 1;
                        uVar14 = param_13;
                        if (param_10 <= uVar16) {
                            uVar14 = param_13 >> 2;
                        }
                        param_5[3] = uVar14;
                        FUN_000256a8(puVar2, param_5, 1, 0);
                        uVar16 = local_a4;
                        if (local_a4 <= local_94) {
                            if (local_94 == local_a4) {
                                if (local_a0[0] <= local_90[0])
                                    goto LAB_000262cc;
                                iVar15 = param_5[5];
                            } else {
                                iVar15 = param_5[5];
                            }
                            if (iVar15 != 0) {
                                FUN_00025538(param_5, &local_94, local_90);
                            }
                            uVar14 = local_94;
                            uVar16 = local_a4;
                            uVar22 = uVar8 + uVar19;
                            iVar15 =
                                FUN_000255d8(local_94, local_90[0], uVar22);
                            if (iVar15 != 0) {
                                if (local_cc == param_3) {
                                    iVar4 = 0;
                                } else {
                                    iVar4 = FUN_000255d8(uVar19, local_a0[0],
                                                         uVar8);
                                }
                                uVar10 = uVar19;
                                if (uVar8 < 4) {
                                    if (3 < uVar22) {
                                        uVar10 = uVar21 + 3;
                                    }
                                } else if ((uVar8 < 0x13) && (0x12 < uVar22)) {
                                    uVar10 = uVar21 + 2;
                                }
                                iVar15 = uVar10 + (iVar15 - iVar3) * 2;
                                if (iVar4 != 0) {
                                    iVar15 = iVar15 + (uVar19 - iVar4) * -2;
                                }
                                uVar10 = uVar16;
                                if (-1 < iVar15) {
                                    uVar10 = iVar15 + uVar16;
                                }
                                if (uVar10 <= uVar14) {
                                    if (iVar4 == 0) {
                                        uVar8 = uVar22;
                                    }
                                    local_54 = local_54 + 1;
                                    if (iVar4 != 0) {
                                        uVar16 = uVar8;
                                        if (uVar8 != 0) {
                                            local_cc =
                                                (undefined1 *)FUN_0002545c(
                                                    puVar2, local_cc, local_b4,
                                                    uVar8);
                                            uVar16 = uVar19;
                                        }
                                        local_4c = uVar16;
                                        local_50 = uVar8;
                                        local_cc = (undefined1 *)FUN_00025280(
                                            puVar2, local_cc, uVar19,
                                            local_a0[0]);
                                        uVar8 = 0;
                                    }
                                    goto LAB_00026168;
                                }
                            }
                        }
                    LAB_000262cc:
                        iVar15 = uVar21 + 2;
                    } while ((uVar13 != uVar19) &&
                             (uVar21 = uVar19, uVar16 < local_a0[2]));
                }
                uVar13 = uVar16;
                uVar21 = uVar8;
                if (uVar8 != 0) {
                    local_cc = (undefined1 *)FUN_0002545c(puVar2, local_cc,
                                                          local_b4, uVar8);
                    uVar13 = local_a4;
                    uVar21 = uVar16;
                }
                local_4c = uVar21;
                local_50 = uVar8;
                local_cc = (undefined1 *)FUN_00025280(puVar2, local_cc, uVar13,
                                                      local_a0[0]);
                uVar8 = 0;
                param_5[3] = param_13;
                FUN_000256a8(puVar2, param_5, local_a4, iVar15);
            }
            goto LAB_00026168;
        }
        if (uVar8 != 0) {
            local_cc =
                (undefined1 *)FUN_0002545c(puVar2, local_cc, local_b4, uVar8);
        }
        *local_cc = 0x11;
        local_cc[1] = 0;
        local_68 = local_cc + (3 - (int)param_3);
        local_cc[2] = 0;
        *param_4 = local_68;
        if ((local_70 != 0) && (*(code **)(local_70 + 8) != (code *)0x0)) {
            (**(code **)(local_70 + 8))(local_70, local_6c);
        }
    }
    return iVar9;
}

undefined4 lzo1x_999_compress_level(void)

{
    undefined4 uVar1;
    int in_stack_00000010;

    if (in_stack_00000010 - 1U < 9) {
        uVar1 = lzo1x_999_compress_internal();
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

void lzo1x_999_compress_dict(void)

{
    lzo1x_999_compress_level();
    return;
}

void lzo1x_999_compress(void)

{
    lzo1x_999_compress_level();
    return;
}

undefined4 lzo1x_decompress(ushort *param_1, int param_2, byte *param_3,
                            int *param_4)

{
    byte *pbVar1;
    ushort *puVar2;
    byte bVar3;
    byte *pbVar4;
    undefined4 uVar5;
    ushort *puVar6;
    uint uVar7;
    byte *pbVar8;
    byte *pbVar9;
    ushort *unaff_r9;
    uint uVar10;
    int iVar11;
    ushort *puVar12;
    ushort *puVar13;
    byte *pbVar14;
    int iVar15;

    *param_4 = 0;
    puVar12 = (ushort *)((int)param_1 + 1);
    uVar10 = (uint)(byte)*param_1;
    puVar13 = puVar12;
    puVar2 = param_1;
    pbVar8 = param_3;
    if (uVar10 < 0x12)
        goto joined_r0x000268b4;
    uVar7 = uVar10 - 0x11;
    bVar3 = *(byte *)((int)param_1 + 1);
    if ((int)uVar7 < 4) {
        unaff_r9 = param_1 + 1;
    }
    pbVar9 = param_3;
    if (uVar7 == 3 || (int)(uVar10 - 0x14) < 0 != SBORROW4(uVar7, 3))
        goto LAB_000269a0;
    pbVar8 = param_3 + -1;
    while (true) {
        pbVar8 = pbVar8 + 1;
        *pbVar8 = bVar3;
        if (puVar13 == (ushort *)((int)param_1 + (uVar10 - 0x11)))
            break;
        puVar13 = (ushort *)((int)puVar13 + 1);
        bVar3 = *(byte *)puVar13;
    }
    puVar2 = (ushort *)((int)puVar12 + uVar7);
    pbVar1 = param_3 + uVar7;
    puVar13 = (ushort *)((int)puVar2 + 1);
    do {
        uVar10 = (uint)(byte)*puVar2;
        pbVar8 = pbVar1;
        if (0xf < uVar10)
            goto LAB_0002684c;
        puVar12 = puVar2 + 1;
        pbVar9 = pbVar1 + 3;
        iVar11 = (-0x801 - (uint)(byte)((byte)*puVar2 >> 2)) +
                 (uint) * (byte *)((int)puVar2 + 1) * -4;
        *pbVar1 = pbVar1[iVar11];
        pbVar1[1] = pbVar1[iVar11 + 1];
        pbVar1[2] = pbVar1[iVar11 + 2];
    LAB_0002682c:
        while (true) {
            unaff_r9 = (ushort *)((int)puVar12 + 1);
            bVar3 = (byte)*puVar12;
            uVar10 = (uint)bVar3;
            uVar7 = (byte)puVar12[-1] & 3;
            puVar13 = unaff_r9;
            puVar2 = puVar12;
            pbVar8 = pbVar9;
            if (((byte)puVar12[-1] & 3) == 0)
                break;
        LAB_000269a0:
            *pbVar9 = bVar3;
            if (uVar7 == 1) {
                pbVar8 = pbVar9 + 1;
            } else {
                if (uVar7 != 3) {
                    unaff_r9 = puVar12 + 1;
                    pbVar8 = pbVar9 + 2;
                } else {
                    unaff_r9 = (ushort *)((int)puVar12 + 3);
                    pbVar8 = pbVar9 + 3;
                }
                pbVar9[1] = *(byte *)((int)puVar12 + 1);
                if (uVar7 == 3) {
                    pbVar9[2] = (byte)puVar12[1];
                }
            }
            uVar10 = (uint)(byte)*unaff_r9;
            puVar13 = (ushort *)((int)unaff_r9 + 1);
            if (0x3f < uVar10)
                goto LAB_00026854;
        LAB_000269e4:
            if (uVar10 < 0x20) {
                if (0xf < uVar10) {
                    uVar7 = uVar10 & 7;
                    if (uVar7 == 0) {
                        iVar11 = 0;
                        bVar3 = (byte)*puVar13;
                        while (bVar3 == 0) {
                            puVar13 = (ushort *)((int)puVar13 + 1);
                            iVar11 = iVar11 + 0xff;
                            bVar3 = *(byte *)puVar13;
                        }
                        puVar13 = (ushort *)((int)puVar13 + 1);
                        uVar7 = iVar11 + bVar3 + 7;
                    }
                    puVar12 = puVar13 + 1;
                    if (pbVar8 == pbVar8 + -((uVar10 & 8) * 0x800 +
                                             (uint)(*puVar13 >> 2))) {
                        *param_4 = (int)pbVar8 - (int)param_3;
                        if ((ushort *)((int)param_1 + param_2) == puVar12) {
                            return 0;
                        }
                        if ((ushort *)((int)param_1 + param_2) <= puVar12) {
                            return 0xfffffffc;
                        }
                        return 0xfffffff8;
                    }
                    pbVar9 = pbVar8 +
                             -((uVar10 & 8) * 0x800 + (uint)(*puVar13 >> 2)) +
                             -0x4000;
                    goto LAB_00026a2c;
                }
                puVar12 = (ushort *)((int)puVar13 + 1);
                iVar11 = ~(uVar10 >> 2) + (uint)(byte)*puVar13 * -4;
                pbVar9 = pbVar8 + 2;
                *pbVar8 = pbVar8[iVar11];
                pbVar8[1] = pbVar8[iVar11 + 1];
            } else {
                uVar7 = uVar10 & 0x1f;
                if (uVar7 == 0) {
                    iVar11 = 0;
                    bVar3 = (byte)*puVar13;
                    while (bVar3 == 0) {
                        puVar13 = (ushort *)((int)puVar13 + 1);
                        iVar11 = iVar11 + 0xff;
                        bVar3 = *(byte *)puVar13;
                    }
                    puVar13 = (ushort *)((int)puVar13 + 1);
                    uVar7 = iVar11 + bVar3 + 0x1f;
                }
                puVar12 = puVar13 + 1;
                pbVar9 = pbVar8 + ~(uint)(*puVar13 >> 2);
            LAB_00026a2c:
                if ((uVar7 < 6) || ((int)pbVar8 - (int)pbVar9 < 4))
                    goto LAB_00026874;
                pbVar4 = pbVar9 + 4;
                uVar10 = uVar7 - 6 >> 2;
                *(undefined4 *)pbVar8 = *(undefined4 *)pbVar9;
                pbVar9 = pbVar4;
                pbVar1 = pbVar8 + 4;
                do {
                    pbVar14 = pbVar1 + 4;
                    *(undefined4 *)pbVar1 = *(undefined4 *)pbVar9;
                    pbVar9 = pbVar9 + 4;
                    pbVar1 = pbVar14;
                } while (pbVar8 + (uVar10 + 2) * 4 != pbVar14);
                iVar11 = (uVar10 + 1) * 4;
                iVar15 = uVar7 + uVar10 * -4 + -6;
                pbVar9 = pbVar8 + 4 + iVar11;
                if (iVar15 != 0) {
                    pbVar1 = pbVar9 + -1;
                    pbVar8 = pbVar4 + iVar11;
                    do {
                        pbVar14 = pbVar8 + 1;
                        pbVar1 = pbVar1 + 1;
                        *pbVar1 = *pbVar8;
                        pbVar8 = pbVar14;
                    } while (pbVar14 != pbVar4 + iVar11 + iVar15);
                    pbVar9 = pbVar9 + iVar15;
                }
            }
        }
    joined_r0x000268b4:
        if (0xf < uVar10) {
        LAB_0002684c:
            if (uVar10 < 0x40)
                goto LAB_000269e4;
        LAB_00026854:
            puVar12 = (ushort *)((int)puVar13 + 1);
            uVar7 = (uVar10 >> 5) - 1;
            pbVar9 = pbVar8 + ~((uVar10 << 0x1b) >> 0x1d) +
                     (uint)(byte)*puVar13 * -8;
        LAB_00026874:
            *pbVar8 = *pbVar9;
            pbVar4 = pbVar8 + 1;
            *pbVar4 = pbVar9[1];
            pbVar1 = pbVar9 + 2;
            do {
                pbVar14 = pbVar1 + 1;
                pbVar4 = pbVar4 + 1;
                *pbVar4 = *pbVar1;
                pbVar1 = pbVar14;
            } while (pbVar14 != pbVar9 + 2 + uVar7);
            pbVar9 = pbVar8 + uVar7 + 2;
            goto LAB_0002682c;
        }
        if (uVar10 == 0) {
            iVar11 = 0;
            bVar3 = *(byte *)((int)puVar2 + 1);
            while (bVar3 == 0) {
                puVar13 = (ushort *)((int)puVar13 + 1);
                iVar11 = iVar11 + 0xff;
                bVar3 = *(byte *)puVar13;
            }
            puVar13 = (ushort *)((int)puVar13 + 1);
            uVar10 = iVar11 + bVar3 + 0xf;
        }
        uVar7 = uVar10 - 1;
        puVar2 = puVar13 + 2;
        uVar5 = *(undefined4 *)puVar13;
        if (uVar7 == 0) {
            puVar13 = (ushort *)((int)puVar13 + 5);
        }
        pbVar1 = pbVar8 + 4;
        *(undefined4 *)pbVar8 = uVar5;
        if (uVar7 != 0) {
            if (uVar7 < 4) {
                pbVar8 = pbVar8 + 3;
                puVar12 = puVar2;
                do {
                    puVar6 = (ushort *)((int)puVar12 + 1);
                    pbVar8 = pbVar8 + 1;
                    *pbVar8 = (byte)*puVar12;
                    puVar12 = puVar6;
                } while (puVar6 != (ushort *)((int)puVar13 + uVar10 + 3));
                puVar13 = (ushort *)((int)puVar2 + uVar10);
                pbVar1 = pbVar1 + uVar7;
                puVar2 = (ushort *)((int)puVar2 + uVar7);
            } else {
                uVar10 = uVar10 - 5 >> 2;
                puVar13 = puVar2;
                pbVar9 = pbVar1;
                do {
                    pbVar4 = pbVar9 + 4;
                    *(undefined4 *)pbVar9 = *(undefined4 *)puVar13;
                    puVar13 = puVar13 + 2;
                    pbVar9 = pbVar4;
                } while (pbVar4 != pbVar8 + (uVar10 + 2) * 4);
                iVar11 = uVar7 + uVar10 * -4 + -4;
                puVar2 = puVar2 + (uVar10 + 1) * 2;
                pbVar1 = pbVar1 + (uVar10 + 1) * 4;
                if (iVar11 == 0) {
                    puVar13 = (ushort *)((int)puVar2 + 1);
                } else {
                    puVar12 = (ushort *)((int)puVar2 + iVar11);
                    *pbVar1 = (byte)*puVar2;
                    puVar13 = puVar2;
                    pbVar8 = pbVar1;
                    while (puVar2 = (ushort *)((int)puVar13 + 1),
                           puVar2 != puVar12) {
                        pbVar8 = pbVar8 + 1;
                        *pbVar8 = *(byte *)puVar2;
                        puVar13 = puVar2;
                    }
                    pbVar1 = pbVar1 + iVar11;
                    puVar13 = puVar13 + 1;
                }
            }
        }
    } while (true);
}

undefined4 lzo1x_decompress_safe(ushort *param_1, int param_2, byte *param_3,
                                 int *param_4)

{
    ushort uVar1;
    ushort *puVar2;
    byte *pbVar3;
    ushort *puVar4;
    ushort *puVar5;
    byte *pbVar6;
    ushort *puVar7;
    uint uVar8;
    int iVar9;
    byte *pbVar10;
    byte *pbVar11;
    uint uVar12;
    ushort *puVar13;
    byte *pbVar14;
    int iVar15;
    byte *pbVar16;

    puVar5 = (ushort *)((int)param_1 + param_2);
    pbVar11 = (byte *)*param_4;
    iVar15 = 0;
    *param_4 = 0;
    if (puVar5 != param_1) {
        uVar12 = (uint)(byte)*param_1;
        pbVar6 = param_3;
        if (uVar12 < 0x12)
            goto LAB_00026d90;
        pbVar10 = (byte *)(uVar12 - 0x11);
        puVar7 = (ushort *)((int)param_1 + 1);
        if ((int)pbVar10 < 4)
            goto LAB_00026c9c;
        if (pbVar11 < pbVar10) {
        LAB_000270c4:
            *param_4 = iVar15;
            return 0xfffffffb;
        }
        if (uVar12 - 0xe <= param_2 - 1U) {
            pbVar6 = param_3 + -1;
            puVar13 = puVar7;
            do {
                puVar2 = (ushort *)((int)puVar13 + 1);
                pbVar6 = pbVar6 + 1;
                *pbVar6 = (byte)*puVar13;
                puVar13 = puVar2;
            } while (puVar2 != (ushort *)((int)param_1 + (uVar12 - 0x10)));
            puVar7 = (ushort *)((int)puVar7 + (int)pbVar10);
            pbVar16 = param_3 + (int)pbVar10;
            do {
                uVar12 = (uint)(byte)*puVar7;
                if (0xf < uVar12) {
                    puVar13 = (ushort *)((int)puVar7 + 1);
                    goto LAB_00026dac;
                }
                param_1 = puVar7 + 1;
                pbVar10 = pbVar16 +
                          (-0x801 - (uint)(byte)((byte)*puVar7 >> 2)) +
                          (uint) * (byte *)((int)puVar7 + 1) * -4;
                if (pbVar10 < param_3 || pbVar16 <= pbVar10) {
                LAB_000270d0:
                    *param_4 = (int)pbVar16 - (int)param_3;
                    return 0xfffffffa;
                }
                pbVar6 = pbVar16;
                if (param_3 + ((int)pbVar11 - (int)pbVar16) < (byte *)0x3) {
                LAB_000270c0:
                    iVar15 = (int)pbVar6 - (int)param_3;
                    goto LAB_000270c4;
                }
                pbVar6 = pbVar16 + 3;
                *pbVar16 = *pbVar10;
                pbVar16[1] = pbVar10[1];
                pbVar16[2] = pbVar10[2];
            LAB_00026c84:
                while (pbVar10 = (byte *)((byte)param_1[-1] & 3),
                       puVar7 = param_1, ((byte)param_1[-1] & 3) != 0) {
                LAB_00026c9c:
                    if (param_3 + ((int)pbVar11 - (int)pbVar6) < pbVar10) {
                        iVar15 = (int)pbVar6 - (int)param_3;
                        goto LAB_000270c4;
                    }
                    pbVar16 = pbVar10 + 3;
                    if ((byte *)((int)puVar5 - (int)puVar7) < pbVar16) {
                        iVar15 = (int)pbVar6 - (int)param_3;
                        goto LAB_00026fb0;
                    }
                    uVar1 = *puVar7;
                    if (pbVar10 == (byte *)0x1) {
                        puVar7 = (ushort *)((int)puVar7 + 1);
                        pbVar16 = pbVar6 + 1;
                    }
                    *pbVar6 = (byte)uVar1;
                    if (pbVar10 != (byte *)0x1) {
                        pbVar14 = (byte *)((int)puVar7 + 1);
                        if (pbVar10 != (byte *)0x3) {
                            puVar7 = puVar7 + 1;
                            pbVar16 = pbVar6 + 2;
                        } else {
                            pbVar16 = pbVar6 + 3;
                        }
                        pbVar6[1] = *pbVar14;
                        if (pbVar10 == (byte *)0x3) {
                            puVar13 = puVar7 + 1;
                            puVar7 = (ushort *)((int)puVar7 + 3);
                            pbVar6[2] = (byte)*puVar13;
                        }
                    }
                    uVar12 = (uint)(byte)*puVar7;
                    puVar13 = (ushort *)((int)puVar7 + 1);
                    if (0x3f < uVar12)
                        goto LAB_00026d0c;
                LAB_00026db4:
                    pbVar6 = pbVar16;
                    if (uVar12 < 0x20) {
                        if (0xf < uVar12) {
                            uVar8 = uVar12 & 7;
                            puVar7 = puVar13;
                            if (uVar8 == 0) {
                                while (true) {
                                    puVar13 = (ushort *)((int)puVar7 + 1);
                                    if ((byte)*puVar7 != 0)
                                        break;
                                    if (uVar8 == 0xfffffe01)
                                        goto LAB_000270c0;
                                    uVar8 = uVar8 + 0xff;
                                    puVar7 = puVar13;
                                    if (puVar5 == puVar13)
                                        goto LAB_00026fac;
                                }
                                uVar8 = uVar8 + (byte)*puVar7 + 7;
                                if ((uint)((int)puVar5 - (int)puVar13) < 2)
                                    goto LAB_00026fac;
                            }
                            param_1 = puVar13 + 1;
                            if (pbVar16 == pbVar16 + -((uVar12 & 8) * 0x800 +
                                                       (uint)(*puVar13 >> 2))) {
                                *param_4 = (int)pbVar16 - (int)param_3;
                                if (puVar5 == param_1) {
                                    return 0;
                                }
                                if (puVar5 <= param_1) {
                                    return 0xfffffffc;
                                }
                                return 0xfffffff8;
                            }
                            pbVar10 = pbVar16 +
                                      -((uVar12 & 8) * 0x800 +
                                        (uint)(*puVar13 >> 2)) +
                                      -0x4000;
                            goto LAB_00026dd4;
                        }
                        param_1 = (ushort *)((int)puVar13 + 1);
                        pbVar10 = pbVar16 + ~(uVar12 >> 2) +
                                  (uint)(byte)*puVar13 * -4;
                        if (pbVar10 < param_3 || pbVar16 <= pbVar10)
                            goto LAB_000270d0;
                        if (param_3 + ((int)pbVar11 - (int)pbVar16) <
                            (byte *)0x2)
                            goto LAB_000270c0;
                        pbVar6 = pbVar16 + 2;
                        *pbVar16 = *pbVar10;
                        pbVar16[1] = pbVar10[1];
                    } else {
                        uVar8 = uVar12 & 0x1f;
                        puVar7 = puVar13;
                        if (uVar8 == 0) {
                            while (true) {
                                puVar13 = (ushort *)((int)puVar7 + 1);
                                if ((byte)*puVar7 != 0)
                                    break;
                                if (uVar8 == 0xfffffe01)
                                    goto LAB_000270c0;
                                uVar8 = uVar8 + 0xff;
                                puVar7 = puVar13;
                                if (puVar5 == puVar13)
                                    goto LAB_00026fac;
                            }
                            uVar8 = uVar8 + (byte)*puVar7 + 0x1f;
                            if ((uint)((int)puVar5 - (int)puVar13) < 2)
                                goto LAB_00026fac;
                        }
                        param_1 = puVar13 + 1;
                        pbVar10 = pbVar16 + ~(uint)(*puVar13 >> 2);
                    LAB_00026dd4:
                        if (pbVar10 < param_3 || pbVar16 <= pbVar10)
                            goto LAB_000270d0;
                        if (param_3 + ((int)pbVar11 - (int)pbVar16) <
                            (byte *)(uVar8 + 2))
                            goto LAB_000270c0;
                        if ((uVar8 < 6) || ((int)pbVar16 - (int)pbVar10 < 4))
                            goto LAB_00026d58;
                        pbVar14 = pbVar10 + 4;
                        uVar12 = uVar8 - 6 >> 2;
                        *(undefined4 *)pbVar16 = *(undefined4 *)pbVar10;
                        pbVar6 = pbVar16 + 4;
                        pbVar10 = pbVar14;
                        do {
                            pbVar3 = pbVar6 + 4;
                            *(undefined4 *)pbVar6 = *(undefined4 *)pbVar10;
                            pbVar6 = pbVar3;
                            pbVar10 = pbVar10 + 4;
                        } while (pbVar3 != pbVar16 + (uVar12 + 2) * 4);
                        iVar15 = (uVar12 + 1) * 4;
                        iVar9 = uVar8 + uVar12 * -4 + -6;
                        pbVar6 = pbVar16 + 4 + iVar15;
                        if (iVar9 != 0) {
                            pbVar16 = pbVar6 + -1;
                            pbVar10 = pbVar14 + iVar15;
                            do {
                                pbVar3 = pbVar10 + 1;
                                pbVar16 = pbVar16 + 1;
                                *pbVar16 = *pbVar10;
                                pbVar10 = pbVar3;
                            } while (pbVar3 != pbVar14 + iVar15 + iVar9);
                            pbVar6 = pbVar6 + iVar9;
                        }
                    }
                }
            LAB_00026d90:
                pbVar16 = pbVar6;
                if ((uint)((int)puVar5 - (int)param_1) < 3)
                    goto LAB_00026fac;
                uVar12 = (uint)(byte)*param_1;
                puVar13 = (ushort *)((int)param_1 + 1);
                if (0xf < uVar12) {
                LAB_00026dac:
                    if (uVar12 < 0x40)
                        goto LAB_00026db4;
                LAB_00026d0c:
                    param_1 = (ushort *)((int)puVar13 + 1);
                    uVar8 = (uVar12 >> 5) - 1;
                    pbVar10 = pbVar16 + ~((uVar12 << 0x1b) >> 0x1d) +
                              (uint)(byte)*puVar13 * -8;
                    if (pbVar10 < param_3 || pbVar16 <= pbVar10)
                        goto LAB_000270d0;
                    pbVar6 = pbVar16;
                    if (param_3 + ((int)pbVar11 - (int)pbVar16) <
                        (byte *)((uVar12 >> 5) + 1))
                        goto LAB_000270c0;
                LAB_00026d58:
                    *pbVar16 = *pbVar10;
                    pbVar14 = pbVar16 + 1;
                    *pbVar14 = pbVar10[1];
                    pbVar6 = pbVar10 + 2;
                    do {
                        pbVar3 = pbVar6 + 1;
                        pbVar14 = pbVar14 + 1;
                        *pbVar14 = *pbVar6;
                        pbVar6 = pbVar3;
                    } while (pbVar3 != pbVar10 + 2 + uVar8);
                    pbVar6 = pbVar16 + uVar8 + 2;
                    goto LAB_00026c84;
                }
                if (uVar12 == 0) {
                    iVar15 = 0;
                    puVar7 = puVar13;
                    while (true) {
                        puVar13 = (ushort *)((int)puVar7 + 1);
                        if ((byte)*puVar7 != 0)
                            break;
                        iVar15 = iVar15 + 0xff;
                        if (((ushort *)((int)param_1 + 0x1010101) == puVar13) ||
                            (puVar7 = puVar13, puVar5 == puVar13))
                            goto LAB_00026fac;
                    }
                    uVar12 = iVar15 + (byte)*puVar7 + 0xf;
                }
                if (param_3 + ((int)pbVar11 - (int)pbVar6) <
                    (byte *)(uVar12 + 3))
                    goto LAB_000270c0;
                if ((uint)((int)puVar5 - (int)puVar13) < uVar12 + 6) {
                LAB_00026fac:
                    iVar15 = (int)pbVar16 - (int)param_3;
                    break;
                }
                uVar8 = uVar12 - 1;
                puVar7 = puVar13 + 2;
                pbVar16 = pbVar6 + 4;
                *(undefined4 *)pbVar6 = *(undefined4 *)puVar13;
                if (uVar8 != 0) {
                    if (uVar8 < 4) {
                        pbVar6 = pbVar6 + 3;
                        puVar2 = puVar7;
                        do {
                            puVar4 = (ushort *)((int)puVar2 + 1);
                            pbVar6 = pbVar6 + 1;
                            *pbVar6 = (byte)*puVar2;
                            puVar2 = puVar4;
                        } while ((ushort *)((int)puVar13 + (int)(uVar12 + 3)) !=
                                 puVar4);
                        pbVar16 = pbVar16 + uVar8;
                        puVar7 = (ushort *)((int)puVar7 + uVar8);
                    } else {
                        uVar12 = uVar12 - 5 >> 2;
                        puVar13 = puVar7;
                        pbVar10 = pbVar16;
                        do {
                            pbVar14 = pbVar10 + 4;
                            *(undefined4 *)pbVar10 = *(undefined4 *)puVar13;
                            puVar13 = puVar13 + 2;
                            pbVar10 = pbVar14;
                        } while (pbVar6 + (uVar12 + 2) * 4 != pbVar14);
                        iVar15 = uVar8 + uVar12 * -4 + -4;
                        pbVar16 = pbVar16 + (uVar12 + 1) * 4;
                        puVar7 = puVar7 + (uVar12 + 1) * 2;
                        if (iVar15 != 0) {
                            pbVar6 = pbVar16 + -1;
                            puVar2 = (ushort *)((int)puVar7 + iVar15);
                            puVar13 = puVar7;
                            do {
                                puVar7 = (ushort *)((int)puVar13 + 1);
                                pbVar6 = pbVar6 + 1;
                                *pbVar6 = (byte)*puVar13;
                                puVar13 = puVar7;
                            } while (puVar7 != puVar2);
                            pbVar16 = pbVar16 + iVar15;
                        }
                    }
                }
            } while (true);
        }
    }
LAB_00026fb0:
    *param_4 = iVar15;
    return 0xfffffffc;
}

undefined4 lzo1x_decompress_dict_safe(byte *param_1, int param_2, byte *param_3,
                                      undefined4 *param_4, undefined4 param_5,
                                      byte *param_6, byte *param_7)

{
    byte bVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    int iVar7;
    byte *pbVar8;
    byte *pbVar9;
    byte *pbVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    int iVar14;
    byte *pbVar15;

    pbVar10 = param_1 + param_2;
    pbVar15 = (byte *)*param_4;
    if (param_6 == (byte *)0x0) {
        param_7 = param_6;
        param_6 = (byte *)0x0;
    } else {
        if ((byte *)0xbfff < param_7) {
            pbVar5 = param_7 + -0xbfff;
            param_7 = (byte *)0xbfff;
            param_6 = param_6 + (int)pbVar5;
        }
        param_6 = param_6 + (int)param_7;
    }
    pbVar5 = (byte *)0x0;
    *param_4 = 0;
    if (pbVar10 != param_1) {
        uVar12 = (uint)*param_1;
        pbVar6 = param_1;
        pbVar2 = param_3;
        if (uVar12 < 0x12)
            goto LAB_0002726c;
        pbVar9 = (byte *)(uVar12 - 0x11);
        pbVar6 = param_1 + 1;
        if ((int)pbVar9 < 4)
            goto LAB_000273e4;
        if (pbVar15 < pbVar9) {
        LAB_000276a4:
            *param_4 = pbVar5;
            return 0xfffffffb;
        }
        if (uVar12 - 0xe <= param_2 - 1U) {
            pbVar2 = param_3 + -1;
            pbVar5 = pbVar6;
            do {
                pbVar3 = pbVar5 + 1;
                pbVar2 = pbVar2 + 1;
                *pbVar2 = *pbVar5;
                pbVar5 = pbVar3;
            } while (pbVar3 != param_1 + (uVar12 - 0x10));
            pbVar6 = pbVar6 + (int)pbVar9;
            pbVar9 = param_3 + (int)pbVar9;
        LAB_000271b0:
            uVar12 = (uint)*pbVar6;
            uVar13 = (uint)pbVar6[1];
            pbVar5 = pbVar9 + -(int)param_3;
            if (0xf < uVar12) {
                pbVar3 = pbVar6 + 1;
                goto LAB_00027378;
            }
            iVar7 = uVar13 * 4 + (uint)(*pbVar6 >> 2);
            pbVar6 = pbVar6 + 2;
            if ((byte *)0x2 < param_3 + ((int)pbVar15 - (int)pbVar9)) {
                if (pbVar5 < (byte *)(iVar7 + 0x801)) {
                    pbVar2 = (byte *)(iVar7 + 0x801) + -(int)pbVar5;
                    if (param_7 < pbVar2) {
                    LAB_00027720:
                        *param_4 = pbVar5;
                        return 0xfffffffa;
                    }
                    pbVar5 = param_6 + -(int)pbVar2;
                    if (pbVar2 < (byte *)0x3) {
                        memcpy(pbVar9, pbVar5, (size_t)pbVar2);
                        pbVar3 = pbVar9 + (int)(pbVar2 + -1);
                        pbVar5 = param_3;
                        do {
                            pbVar8 = pbVar5 + 1;
                            pbVar3 = pbVar3 + 1;
                            *pbVar3 = *pbVar5;
                            pbVar5 = pbVar8;
                        } while (pbVar8 != param_3 + (3 - (int)pbVar2));
                    } else {
                        bVar1 = pbVar5[2];
                        *(undefined2 *)pbVar9 = *(undefined2 *)pbVar5;
                        pbVar9[2] = bVar1;
                    }
                    pbVar2 = pbVar9 + 3;
                } else {
                    pbVar2 = pbVar9 + 3;
                    bVar1 = pbVar9[-0x7ff - iVar7];
                    *(undefined2 *)pbVar9 =
                        *(undefined2 *)(pbVar9 + (-0x801 - iVar7));
                    pbVar9[2] = bVar1;
                }
            LAB_0002724c:
                pbVar9 = (byte *)(pbVar6[-2] & 3);
                param_1 = pbVar6;
                if ((pbVar6[-2] & 3) == 0) {
                LAB_0002726c:
                    if ((uint)((int)pbVar10 - (int)pbVar6) < 3)
                        goto LAB_000274ec;
                    uVar12 = (uint)*pbVar6;
                    pbVar3 = pbVar6 + 1;
                    if (uVar12 < 0x10)
                        goto code_r0x00027288;
                    uVar13 = (uint)pbVar6[1];
                    pbVar5 = pbVar2 + -(int)param_3;
                    pbVar9 = pbVar2;
                LAB_00027378:
                    if (uVar12 < 0x40)
                        goto LAB_00027458;
                LAB_00027380:
                    pbVar2 =
                        (byte *)(((uVar12 << 0x1b) >> 0x1d) + 1 + uVar13 * 8);
                    pbVar6 = pbVar3 + 1;
                    uVar11 = (uVar12 >> 5) - 1;
                } else {
                LAB_000273e4:
                    if (param_3 + ((int)pbVar15 - (int)pbVar2) < pbVar9)
                        goto LAB_000276a0;
                    if (pbVar10 + -(int)pbVar6 < pbVar9 + 3)
                        goto LAB_000274ec;
                    if (pbVar9 == (byte *)0x1) {
                        param_1 = pbVar6 + 1;
                    }
                    *pbVar2 = *pbVar6;
                    if (pbVar9 == (byte *)0x1) {
                        pbVar9 = pbVar2 + 1;
                    } else {
                        if (pbVar9 != (byte *)0x3) {
                            param_1 = pbVar6 + 2;
                        } else {
                            param_1 = pbVar6 + 3;
                        }
                        pbVar2[1] = pbVar6[1];
                        if (pbVar9 != (byte *)0x3) {
                            pbVar9 = pbVar2 + 2;
                        } else {
                            pbVar2[2] = pbVar6[2];
                            pbVar9 = pbVar2 + 3;
                        }
                    }
                    uVar12 = (uint)*param_1;
                    pbVar3 = param_1 + 1;
                    uVar13 = (uint)param_1[1];
                    pbVar5 = pbVar9 + -(int)param_3;
                    if (0x3f < uVar12)
                        goto LAB_00027380;
                LAB_00027458:
                    if (uVar12 < 0x20) {
                        if (uVar12 < 0x10) {
                            uVar12 = uVar13 * 4 + (uVar12 >> 2);
                            pbVar6 = pbVar3 + 1;
                            pbVar3 = (byte *)(uVar12 + 1);
                            if (param_3 + ((int)pbVar15 - (int)pbVar9) <
                                (byte *)0x2)
                                goto LAB_000276a4;
                            if (pbVar5 < pbVar3) {
                                pbVar3 = pbVar3 + -(int)pbVar5;
                                if (param_7 < pbVar3)
                                    goto LAB_00027720;
                                pbVar5 = param_6 + -(int)pbVar3;
                                if (pbVar3 < (byte *)0x2) {
                                    memcpy(pbVar9, pbVar5, (size_t)pbVar3);
                                    pbVar9 = pbVar9 + (int)pbVar3;
                                    pbVar2 = pbVar9 + 1;
                                    *pbVar9 = *param_3;
                                    if (pbVar3 == (byte *)0x0) {
                                        pbVar2 = pbVar9 + 2;
                                        pbVar9[1] = param_3[1];
                                    }
                                    goto LAB_0002724c;
                                }
                            } else {
                                uVar12 = ~uVar12;
                                pbVar5 = pbVar9 + uVar12;
                                if (pbVar3 == (byte *)0x1) {
                                    pbVar2 = pbVar9 + 2;
                                    *pbVar9 = pbVar9[uVar12];
                                    pbVar9[1] = pbVar5[1];
                                    goto LAB_0002724c;
                                }
                            }
                            pbVar2 = pbVar9 + 2;
                            *(undefined2 *)pbVar9 = *(undefined2 *)pbVar5;
                            goto LAB_0002724c;
                        }
                        uVar11 = uVar12 & 7;
                        pbVar6 = pbVar3;
                        if (uVar11 == 0) {
                            while (pbVar3 = pbVar6 + 1, uVar13 == 0) {
                                if (uVar11 == 0xfffffe01)
                                    goto LAB_000276a4;
                                if (pbVar3 == pbVar10)
                                    goto LAB_000274f0;
                                pbVar6 = pbVar3;
                                uVar11 = uVar11 + 0xff;
                                uVar13 = (uint)*pbVar3;
                            }
                            uVar11 = uVar11 + uVar13 + 7;
                            if ((uint)((int)pbVar10 - (int)pbVar3) < 2)
                                goto LAB_000274f0;
                            uVar13 = (uint)pbVar6[1];
                        }
                        pbVar6 = pbVar3 + 2;
                        iVar7 = (uVar13 >> 2) + (uint)pbVar3[1] * 0x40 +
                                (uVar12 & 8) * 0x800;
                        if (iVar7 == 0) {
                            *param_4 = pbVar5;
                            if (pbVar10 == pbVar6) {
                                return 0;
                            }
                            if (pbVar10 <= pbVar6) {
                                return 0xfffffffc;
                            }
                            return 0xfffffff8;
                        }
                        pbVar2 = (byte *)(iVar7 + 0x4000);
                    } else {
                        uVar11 = uVar12 & 0x1f;
                        pbVar6 = pbVar3;
                        if (uVar11 == 0) {
                            while (pbVar3 = pbVar6 + 1, uVar13 == 0) {
                                if (uVar11 == 0xfffffe01)
                                    goto LAB_000276a4;
                                if (pbVar3 == pbVar10)
                                    goto LAB_000274f0;
                                pbVar6 = pbVar3;
                                uVar11 = uVar11 + 0xff;
                                uVar13 = (uint)*pbVar3;
                            }
                            uVar11 = uVar11 + uVar13 + 0x1f;
                            if ((uint)((int)pbVar10 - (int)pbVar3) < 2)
                                goto LAB_000274f0;
                            uVar13 = (uint)pbVar6[1];
                        }
                        pbVar6 = pbVar3 + 2;
                        pbVar2 = (byte *)((uVar13 >> 2) + 1 +
                                          (uint)pbVar3[1] * 0x40);
                    }
                }
                pbVar3 = (byte *)(uVar11 + 2);
                if (param_3 + ((int)pbVar15 - (int)pbVar9) < pbVar3)
                    goto LAB_000276a4;
                if (pbVar5 < pbVar2) {
                    pbVar2 = pbVar2 + -(int)pbVar5;
                    if (param_7 < pbVar2)
                        goto LAB_00027720;
                    if (pbVar2 < pbVar3) {
                        memcpy(pbVar9, param_6 + -(int)pbVar2, (size_t)pbVar2);
                        pbVar8 = pbVar9 + (int)(pbVar2 + -1);
                        pbVar5 = param_3;
                        do {
                            pbVar4 = pbVar5 + 1;
                            pbVar8 = pbVar8 + 1;
                            *pbVar8 = *pbVar5;
                            pbVar5 = pbVar4;
                        } while (pbVar4 !=
                                 param_3 + ((int)pbVar3 - (int)pbVar2));
                        goto LAB_000273d4;
                    }
                    memcpy(pbVar9, param_6 + -(int)pbVar2, (size_t)pbVar3);
                    pbVar2 = pbVar9 + (int)pbVar3;
                } else {
                    pbVar5 = pbVar9 + -(int)pbVar2;
                    if (pbVar2 < pbVar3) {
                        pbVar8 = pbVar9 + -1;
                        pbVar2 = pbVar5;
                        do {
                            pbVar4 = pbVar2 + 1;
                            pbVar8 = pbVar8 + 1;
                            *pbVar8 = *pbVar2;
                            pbVar2 = pbVar4;
                        } while (pbVar4 != pbVar5 + (int)pbVar3);
                    LAB_000273d4:
                        pbVar2 = pbVar9 + (int)pbVar3;
                    } else {
                        pbVar2 = pbVar9 + (int)pbVar3;
                        memcpy(pbVar9, pbVar5, (size_t)pbVar3);
                    }
                }
                goto LAB_0002724c;
            }
            goto LAB_000276a4;
        }
    }
LAB_000274f0:
    *param_4 = pbVar5;
    return 0xfffffffc;
code_r0x00027288:
    if (uVar12 == 0) {
        iVar7 = 0;
        pbVar5 = pbVar3;
        while (true) {
            pbVar3 = pbVar5 + 1;
            if (*pbVar5 != 0)
                break;
            iVar7 = iVar7 + 0xff;
            if ((pbVar6 + 0x1010101 == pbVar3) ||
                (pbVar5 = pbVar3, pbVar10 == pbVar3))
                goto LAB_000274ec;
        }
        uVar12 = iVar7 + *pbVar5 + 0xf;
    }
    if (param_3 + ((int)pbVar15 - (int)pbVar2) < (byte *)(uVar12 + 3)) {
    LAB_000276a0:
        pbVar5 = pbVar2 + -(int)param_3;
        goto LAB_000276a4;
    }
    if ((uint)((int)pbVar10 - (int)pbVar3) < uVar12 + 6) {
    LAB_000274ec:
        pbVar5 = pbVar2 + -(int)param_3;
        goto LAB_000274f0;
    }
    uVar13 = uVar12 - 1;
    pbVar6 = pbVar3 + 4;
    pbVar9 = pbVar2 + 4;
    *(undefined4 *)pbVar2 = *(undefined4 *)pbVar3;
    if (uVar13 != 0) {
        if (uVar13 < 4) {
            pbVar2 = pbVar2 + 3;
            pbVar5 = pbVar6;
            do {
                pbVar8 = pbVar5 + 1;
                pbVar2 = pbVar2 + 1;
                *pbVar2 = *pbVar5;
                pbVar5 = pbVar8;
            } while (pbVar8 != pbVar3 + (int)(uVar12 + 3));
            pbVar9 = pbVar9 + uVar13;
            pbVar6 = pbVar6 + uVar13;
        } else {
            uVar12 = uVar12 - 5 >> 2;
            pbVar5 = pbVar9;
            pbVar3 = pbVar6;
            do {
                pbVar8 = pbVar5 + 4;
                *(undefined4 *)pbVar5 = *(undefined4 *)pbVar3;
                pbVar5 = pbVar8;
                pbVar3 = pbVar3 + 4;
            } while (pbVar8 != pbVar2 + (uVar12 + 2) * 4);
            iVar7 = (uVar12 + 1) * 4;
            iVar14 = uVar13 + uVar12 * -4 + -4;
            pbVar9 = pbVar9 + iVar7;
            pbVar6 = pbVar6 + iVar7;
            if (iVar14 != 0) {
                pbVar3 = pbVar9 + -1;
                pbVar2 = pbVar6 + iVar14;
                pbVar5 = pbVar6;
                do {
                    pbVar6 = pbVar5 + 1;
                    pbVar3 = pbVar3 + 1;
                    *pbVar3 = *pbVar5;
                    pbVar5 = pbVar6;
                } while (pbVar6 != pbVar2);
                pbVar9 = pbVar9 + iVar14;
            }
        }
    }
    goto LAB_000271b0;
}

uint lzo1x_optimize(byte *param_1, int param_2, byte *param_3, int *param_4)

{
    int iVar1;
    byte *pbVar2;
    byte *pbVar3;
    uint uVar4;
    byte *pbVar5;
    byte *pbVar6;
    size_t __n;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    byte *pbVar10;
    byte *pbVar11;
    byte *pbVar12;
    int iVar13;
    byte *pbVar14;
    byte *pbVar15;
    byte bVar16;
    bool bVar17;
    byte *local_40;

    iVar13 = *param_4;
    *param_4 = 0;
    pbVar15 = param_1 + param_2;
    uVar7 = (uint)*param_1;
    pbVar14 = param_3 + iVar13;
    pbVar2 = param_3;
    if (0x11 < uVar7) {
        uVar9 = uVar7 - 0x11;
        pbVar10 = param_1 + 1;
        __n = 0;
        if (3 < (int)uVar9) {
            param_1 = (byte *)0x0;
        }
        pbVar12 = param_3;
        if (uVar9 != 3 && (int)(uVar7 - 0x14) < 0 == SBORROW4(uVar9, 3))
            goto LAB_000279c8;
        local_40 = (byte *)0x0;
        goto LAB_00027890;
    }
    bVar17 = pbVar14 <= param_3;
    if (param_3 <= pbVar14) {
        bVar17 = pbVar15 <= param_1;
    }
    __n = 0;
    local_40 = (byte *)0x0;
LAB_00027778:
    pbVar3 = pbVar2;
    if (bVar17) {
    LAB_00027bf8:
        *param_4 = (int)pbVar3 - (int)param_3;
        return 0xfffffff9;
    }
    uVar8 = (uint)*param_1;
    pbVar12 = param_1 + 1;
    uVar7 = (uint)param_1[1];
    pbVar6 = pbVar12;
    if (uVar8 < 0x10) {
        if (uVar8 == 0) {
            iVar13 = 0xf;
            while (uVar7 == 0) {
                pbVar12 = pbVar12 + 1;
                iVar13 = iVar13 + 0xff;
                uVar7 = (uint)*pbVar12;
            }
            uVar8 = uVar7 + iVar13;
            pbVar12 = pbVar12 + 1;
            uVar7 = (uint)*pbVar12;
        }
        __n = uVar8 + 3;
        goto LAB_000279ac;
    }
LAB_00027794:
    do {
        if (uVar8 < 0x40) {
            if (uVar8 < 0x20) {
                uVar9 = uVar8 & 7;
                if (uVar9 == 0) {
                    iVar13 = 7;
                    while (uVar7 == 0) {
                        pbVar6 = pbVar6 + 1;
                        iVar13 = iVar13 + 0xff;
                        uVar7 = (uint)*pbVar6;
                    }
                    uVar9 = uVar7 + iVar13;
                    pbVar6 = pbVar6 + 1;
                    uVar7 = (uint)*pbVar6;
                }
                uVar4 = (uint)pbVar6[1];
                pbVar11 = pbVar6 + 2;
                if (pbVar3 == pbVar3 + -((uVar8 & 8) * 0x800 + (uVar7 >> 2) +
                                         uVar4 * 0x40)) {
                    if (pbVar15 == pbVar11) {
                        uVar4 = 0;
                    }
                    *param_4 = (int)pbVar3 - (int)param_3;
                    if (pbVar15 == pbVar11) {
                        return uVar4;
                    }
                    if (pbVar15 <= pbVar11) {
                        return 0xfffffffc;
                    }
                    return 0xfffffff8;
                }
                pbVar10 = pbVar3 +
                          -((uVar8 & 8) * 0x800 + (uVar7 >> 2) + uVar4 * 0x40) +
                          -0x4000;
            } else {
                uVar9 = uVar8 & 0x1f;
                if (uVar9 == 0) {
                    iVar13 = 0x1f;
                    while (uVar7 == 0) {
                        pbVar6 = pbVar6 + 1;
                        iVar13 = iVar13 + 0xff;
                        uVar7 = (uint)*pbVar6;
                    }
                    uVar9 = uVar7 + iVar13;
                    pbVar6 = pbVar6 + 1;
                    uVar7 = (uint)*pbVar6;
                }
                pbVar11 = pbVar6 + 2;
                pbVar10 = pbVar3 + ~(uVar7 >> 2) + (uint)pbVar6[1] * -0x40;
            }
            if (local_40 == (byte *)0x0) {
            LAB_00027b90:
                bVar16 = *pbVar10;
                pbVar12 = (byte *)0xffffffff;
            } else {
                bVar16 = pbVar11[-2];
                pbVar12 = (byte *)(bVar16 & 3);
                if (__n == 0 && uVar9 == 1) {
                    if ((bVar16 & 3) != 0) {
                        bVar16 = *pbVar10;
                        pbVar12 = (byte *)0xffffffff;
                        __n = 0;
                        uVar9 = 1;
                        goto LAB_00027b18;
                    }
                    uVar8 = (uint)*pbVar11;
                    if (0xf < uVar8) {
                        iVar13 = (int)pbVar3 - (int)pbVar10;
                        *local_40 = *local_40 & 0xfc | 3;
                        pbVar11[-3] = *pbVar10;
                        if (iVar13 == 1) {
                            bVar16 = *pbVar10;
                            __n = 3;
                            pbVar11[-2] = bVar16;
                            pbVar11[-1] = bVar16;
                            bVar16 = *pbVar10;
                            uVar9 = 1;
                        } else {
                            uVar9 = 1;
                            pbVar11[-2] = pbVar10[1];
                            __n = 3;
                            pbVar2 = local_40;
                            if (iVar13 == 2) {
                                pbVar2 = (byte *)(uint)*pbVar10;
                            }
                            bVar16 = (byte)pbVar2;
                            if (iVar13 != 2) {
                                bVar16 = pbVar10[2];
                            }
                            pbVar11[-1] = bVar16;
                            bVar16 = *pbVar10;
                        }
                        goto LAB_00027b18;
                    }
                LAB_00027c5c:
                    if ((uVar8 - 1 < 0xf) &&
                        (iVar13 = uVar8 + __n, iVar13 + 3U < 0x10)) {
                        pbVar12 = pbVar11 + 1;
                        *local_40 = *local_40 & 0xfc;
                        pbVar11[-2] = *pbVar10;
                        if ((int)pbVar3 - (int)pbVar10 == 1) {
                            bVar16 = *pbVar10;
                            pbVar11[-1] = bVar16;
                            *pbVar11 = bVar16;
                        } else {
                            pbVar11[-1] = pbVar10[1];
                            if ((int)pbVar3 - (int)pbVar10 == 2) {
                                bVar16 = *pbVar10;
                            } else {
                                bVar16 = pbVar10[2];
                            }
                            *pbVar11 = bVar16;
                        }
                        param_1 = local_40 + 2;
                        if (__n != 0) {
                            memmove(local_40 + 3, param_1, __n);
                        }
                        __n = iVar13 + 6;
                        local_40[2] = (char)iVar13 + 3;
                        pbVar2 = pbVar3 + 3;
                        *pbVar3 = *pbVar10;
                        pbVar3[1] = pbVar10[1];
                        pbVar3[2] = pbVar10[2];
                        uVar7 = (uint)pbVar11[1];
                        goto LAB_000279ac;
                    }
                } else {
                    if (3 < __n || uVar9 != 1)
                        goto LAB_00027b90;
                    if ((bVar16 & 3) == 0) {
                        uVar8 = (uint)*pbVar11;
                        goto LAB_00027c5c;
                    }
                }
                bVar16 = *pbVar10;
                pbVar12 = (byte *)0xffffffff;
                uVar9 = 1;
            }
        LAB_00027b18:
            *pbVar3 = bVar16;
            pbVar6 = pbVar3 + 1;
            *pbVar6 = pbVar10[1];
            pbVar2 = pbVar10 + 2;
            do {
                pbVar5 = pbVar2 + 1;
                pbVar6 = pbVar6 + 1;
                *pbVar6 = *pbVar2;
                pbVar2 = pbVar5;
            } while (pbVar5 != pbVar10 + 2 + uVar9);
            pbVar2 = pbVar3 + uVar9 + 2;
            goto LAB_00027b44;
        }
        iVar13 = ~((uVar8 << 0x1b) >> 0x1d) + uVar7 * -8;
        pbVar11 = pbVar6 + 1;
        uVar9 = (uVar8 >> 5) - 1;
        pbVar10 = pbVar3 + iVar13;
        bVar16 = pbVar3[iVar13];
        if ((local_40 == (byte *)0x0) || (__n < 4 || uVar9 != 1)) {
            pbVar12 = (byte *)0xffffffff;
            goto LAB_00027b18;
        }
        if ((((pbVar6[-1] & 3) != 0) ||
             (uVar8 = (uint)pbVar6[1], 0xe < uVar8 - 1)) ||
            (iVar1 = uVar8 + __n, 0xf < iVar1 + 3U)) {
            pbVar12 = (byte *)0xffffffff;
            uVar9 = 1;
            goto LAB_00027b18;
        }
        pbVar6[-1] = bVar16;
        pbVar12 = pbVar6 + 2;
        if (iVar13 == -1) {
            bVar16 = *pbVar10;
            *pbVar6 = bVar16;
            pbVar6[1] = bVar16;
        } else {
            *pbVar6 = pbVar10[1];
            if (iVar13 == -2) {
                bVar16 = *pbVar10;
            } else {
                bVar16 = pbVar10[2];
            }
            pbVar6[1] = bVar16;
        }
        __n = iVar1 + 6;
        *local_40 = (char)iVar1 + 3;
        pbVar2 = pbVar3 + 3;
        *pbVar3 = *pbVar10;
        pbVar3[1] = pbVar10[1];
        pbVar3[2] = pbVar10[2];
        uVar7 = (uint)pbVar6[2];
        param_1 = local_40;
    LAB_000279ac:
        while (true) {
            *pbVar2 = (byte)uVar7;
            pbVar10 = pbVar12 + 3;
            pbVar2[1] = pbVar12[1];
            pbVar2[2] = pbVar12[2];
            uVar9 = uVar8;
            pbVar12 = pbVar2 + 3;
        LAB_000279c8:
            pbVar3 = pbVar12 + -1;
            pbVar2 = pbVar10;
            do {
                pbVar6 = pbVar2 + 1;
                pbVar3 = pbVar3 + 1;
                *pbVar3 = *pbVar2;
                pbVar2 = pbVar6;
            } while (pbVar6 != pbVar10 + uVar9);
            pbVar3 = pbVar12 + uVar9;
            uVar8 = (uint)pbVar10[uVar9];
            uVar7 = (uint)pbVar10[uVar9 + 1];
            if (0xf < uVar8)
                break;
            pbVar11 = pbVar10 + uVar9 + 2;
            pbVar2 = pbVar12 + uVar9 + 3;
            pbVar10 = pbVar12 + ((uVar9 - 0x801) -
                                 (uVar7 * 4 + (uint)(pbVar10[uVar9] >> 2)));
            pbVar12[uVar9] = *pbVar10;
            pbVar12[uVar9 + 1] = pbVar10[1];
            pbVar12[uVar9 + 2] = pbVar10[2];
        LAB_00027a3c:
            local_40 = pbVar11 + -2;
            __n = *local_40 & 3;
            uVar9 = __n;
            pbVar10 = pbVar11;
            if ((*local_40 & 3) == 0)
                goto LAB_00027a54;
        LAB_00027890:
            pbVar3 = pbVar2 + -1;
            pbVar12 = pbVar10;
            do {
                pbVar6 = pbVar12 + 1;
                pbVar3 = pbVar3 + 1;
                *pbVar3 = *pbVar12;
                pbVar12 = pbVar6;
            } while (pbVar6 != pbVar10 + uVar9);
            pbVar5 = pbVar2 + (uVar9 - 1);
            pbVar6 = pbVar10 + uVar9 + 1;
            pbVar3 = pbVar2 + uVar9;
            bVar17 = pbVar14 == pbVar3;
            if (pbVar14 >= pbVar3) {
                bVar17 = pbVar15 == pbVar6;
            }
            if ((pbVar14 < pbVar3 || pbVar15 < pbVar6) || bVar17)
                goto LAB_00027bf8;
            bVar16 = pbVar10[uVar9];
            uVar8 = (uint)bVar16;
            uVar7 = (uint)pbVar10[uVar9 + 1];
            if (0xf < uVar8)
                goto LAB_00027794;
            pbVar11 = pbVar10 + uVar9 + 2;
            iVar13 = (uint)(bVar16 >> 2) + uVar7 * 4;
            pbVar3 = (byte *)-iVar13;
            pbVar6 = pbVar5 + (int)pbVar3;
            if (local_40 == (byte *)0x0) {
            LAB_00027b50:
                pbVar12 = (byte *)0xffffffff;
                goto LAB_00027b54;
            }
            if (__n != 1 || (bVar16 & 3) != 0) {
                if ((bVar16 & 3) == 0) {
                    uVar8 = (uint)pbVar10[uVar9 + 2];
                    goto LAB_00027ca8;
                }
                goto LAB_00027b50;
            }
            uVar8 = (uint)pbVar10[uVar9 + 2];
            if (0xf < uVar8) {
                bVar17 = iVar13 == 0;
                *local_40 = *local_40 & 0xfc | 3;
                pbVar12 = local_40;
                if (bVar17) {
                    pbVar12 = pbVar3;
                }
                if (!bVar17) {
                    pbVar12 = (byte *)0x0;
                }
                pbVar10[uVar9] = pbVar5[(int)pbVar3];
                if (bVar17) {
                    bVar16 = *pbVar5;
                } else {
                    bVar16 = pbVar6[1];
                }
                __n = 3;
                pbVar10[uVar9 + 1] = bVar16;
            LAB_00027b54:
                pbVar2 = pbVar5 + 3;
                pbVar5[1] = pbVar5[(int)pbVar3];
                pbVar5[2] = pbVar6[1];
            LAB_00027b44:
                if (pbVar12 != (byte *)0xffffffff) {
                LAB_00027a54:
                    bVar17 = pbVar14 <= pbVar2;
                    param_1 = pbVar11;
                    if (pbVar2 <= pbVar14) {
                        bVar17 = pbVar15 <= pbVar11;
                    }
                    goto LAB_00027778;
                }
                goto LAB_00027a3c;
            }
        LAB_00027ca8:
            if ((0xe < uVar8 - 1) || (iVar1 = uVar8 + __n, 0xf < iVar1 + 2U))
                goto LAB_00027b50;
            pbVar12 = pbVar10 + uVar9 + 3;
            *local_40 = *local_40 & 0xfc;
            pbVar10[uVar9 + 1] = pbVar5[(int)pbVar3];
            if (iVar13 == 0) {
                bVar16 = *pbVar5;
            } else {
                bVar16 = pbVar6[1];
            }
            pbVar10[uVar9 + 2] = bVar16;
            param_1 = local_40 + 2;
            if (__n != 0) {
                memmove(local_40 + 3, param_1, __n);
            }
            __n = iVar1 + 5;
            local_40[2] = (char)iVar1 + 2;
            pbVar2 = pbVar5 + 3;
            pbVar5[1] = pbVar5[(int)pbVar3];
            pbVar5[2] = pbVar6[1];
            uVar7 = (uint)pbVar10[uVar9 + 3];
        }
        pbVar6 = pbVar10 + uVar9 + 1;
        local_40 = param_1;
    } while (true);
}

int FUN_00027e5c(uint *param_1, int param_2, byte *param_3, int *param_4,
                 uint param_5, int param_6)

{
    byte bVar1;
    char cVar2;
    byte bVar3;
    byte bVar4;
    byte bVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    byte *pbVar9;
    uint uVar10;
    uint *puVar11;
    uint uVar12;
    uint *puVar13;
    undefined4 *puVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    uint uVar18;
    uint *puVar19;
    byte *pbVar20;
    undefined4 *puVar21;
    byte *pbVar22;
    byte *pbVar23;
    bool bVar24;
    bool bVar25;

    puVar19 = (uint *)((int)param_1 + param_2 + -0x14);
    puVar7 = param_1;
    puVar8 = param_1;
    pbVar22 = param_3;
    if (param_5 < 4) {
        puVar7 = (uint *)((int)param_1 + (4 - param_5));
    }
    do {
        puVar7 = (uint *)((int)puVar7 + ((int)puVar7 - (int)puVar8 >> 5) + 1);
        if (puVar19 <= puVar7) {
            iVar15 = -param_5;
        LAB_00027fe4:
            *param_4 = (int)pbVar22 - (int)param_3;
            return (int)param_1 + (param_2 - ((int)puVar8 + iVar15));
        }
        uVar12 = *puVar7;
        iVar15 = (int)puVar7 - (int)param_1;
        while (true) {
            iVar16 = (uVar12 * 0x1824429d >> 0x12) * 2;
            uVar10 = (uint) * (ushort *)(param_6 + iVar16);
            *(short *)(param_6 + iVar16) = (short)iVar15;
            puVar11 = (uint *)((int)param_1 + uVar10);
            if (*(uint *)((int)param_1 + uVar10) != uVar12)
                break;
            puVar21 = (undefined4 *)((int)puVar8 - param_5);
            uVar12 = (int)puVar7 - (int)puVar21;
            pbVar20 = pbVar22;
            if (uVar12 != 0) {
                bVar1 = (byte)uVar12;
                if (uVar12 < 4) {
                    pbVar22[-2] = pbVar22[-2] | bVar1;
                    pbVar20 = pbVar22 + uVar12;
                    *(undefined4 *)pbVar22 = *puVar21;
                } else if (uVar12 < 0x11) {
                    *pbVar22 = bVar1 - 3;
                    *(undefined4 *)(pbVar22 + 1) = *puVar21;
                    *(undefined4 *)(pbVar22 + 5) = puVar21[1];
                    *(undefined4 *)(pbVar22 + 9) = puVar21[2];
                    *(undefined4 *)(pbVar22 + 0xd) = puVar21[3];
                    pbVar20 = pbVar22 + uVar12 + 1;
                } else {
                    pbVar9 = pbVar22 + 1;
                    if (uVar12 < 0x13) {
                        *pbVar22 = bVar1 - 3;
                    } else {
                        *pbVar22 = 0;
                        for (uVar10 = uVar12 - 0x12; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar9 = 0;
                            pbVar9 = pbVar9 + 1;
                        }
                        *pbVar9 = (byte)uVar10;
                        pbVar9 = pbVar9 + 1;
                    }
                    uVar10 = uVar12 - 0x10 >> 4;
                    iVar15 = uVar10 + 1;
                    pbVar20 = pbVar9;
                    puVar14 = puVar21;
                    do {
                        pbVar22 = pbVar20;
                        pbVar20 = pbVar22 + 0x10;
                        *(undefined4 *)pbVar22 = *puVar14;
                        *(undefined4 *)(pbVar22 + 4) = puVar14[1];
                        *(undefined4 *)(pbVar22 + 8) = puVar14[2];
                        *(undefined4 *)(pbVar22 + 0xc) = puVar14[3];
                        puVar14 = puVar14 + 4;
                    } while (pbVar20 != pbVar9 + iVar15 * 0x10);
                    iVar16 = uVar12 + uVar10 * -0x10;
                    iVar17 = iVar16 + -0x10;
                    if (iVar17 != 0) {
                        pbVar9 = pbVar22 + 0xf;
                        pbVar20 = (byte *)(puVar21 + iVar15 * 4);
                        do {
                            pbVar23 = pbVar20 + 1;
                            pbVar9 = pbVar9 + 1;
                            *pbVar9 = *pbVar20;
                            pbVar20 = pbVar23;
                        } while (
                            pbVar23 !=
                            (byte *)((int)(puVar21 + iVar15 * 4) + iVar17));
                        pbVar20 = pbVar22 + iVar16;
                    }
                }
            }
            uVar12 = puVar11[1] ^ puVar7[1];
            if (puVar7[1] == puVar11[1]) {
                puVar8 = puVar7 + 3;
                puVar6 = puVar11;
                do {
                    puVar13 = puVar6 + 2;
                    uVar12 = puVar8[-1];
                    uVar10 = (int)puVar13 - (int)puVar11;
                    uVar18 = *puVar13;
                    if (uVar12 != uVar18)
                        break;
                    uVar12 = *puVar8;
                    uVar10 = (4 - (int)puVar11) + (int)puVar13;
                    uVar18 = puVar6[3];
                    if (puVar19 <= puVar8)
                        goto LAB_00027f90;
                    puVar8 = puVar8 + 2;
                    puVar6 = puVar13;
                } while (uVar12 == uVar18);
                uVar12 = uVar12 ^ uVar18;
            } else {
                uVar10 = 4;
            }
            bVar3 = (byte)uVar12;
            bVar4 = (byte)(uVar12 >> 8);
            bVar5 = (byte)(uVar12 >> 0x10);
            bVar1 = (byte)(uVar12 >> 0x18);
            uVar10 = uVar10 +
                     ((uint)LZCOUNT(
                          (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                << 1 |
                                            bVar3 >> 2 & 1)
                                               << 1 |
                                           bVar3 >> 3 & 1)
                                              << 1 |
                                          bVar3 >> 4 & 1)
                                             << 1 |
                                         bVar3 >> 5 & 1)
                                            << 1 |
                                        bVar3 >> 6 & 1)
                                           << 1 |
                                       bVar3 >> 7)
                              << 0x18 |
                          (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                << 1 |
                                            bVar4 >> 2 & 1)
                                               << 1 |
                                           bVar4 >> 3 & 1)
                                              << 1 |
                                          bVar4 >> 4 & 1)
                                             << 1 |
                                         bVar4 >> 5 & 1)
                                            << 1 |
                                        bVar4 >> 6 & 1)
                                           << 1 |
                                       bVar4 >> 7)
                              << 0x10 |
                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                << 1 |
                                            bVar5 >> 2 & 1)
                                               << 1 |
                                           bVar5 >> 3 & 1)
                                              << 1 |
                                          bVar5 >> 4 & 1)
                                             << 1 |
                                         bVar5 >> 5 & 1)
                                            << 1 |
                                        bVar5 >> 6 & 1)
                                           << 1 |
                                       bVar5 >> 7)
                              << 8 |
                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                << 1 |
                                            bVar1 >> 2 & 1)
                                               << 1 |
                                           bVar1 >> 3 & 1)
                                              << 1 |
                                          bVar1 >> 4 & 1)
                                             << 1 |
                                         bVar1 >> 5 & 1)
                                            << 1 |
                                        bVar1 >> 6 & 1)
                                           << 1 |
                                       bVar1 >> 7)) >>
                      3);
            puVar8 = (uint *)((int)puVar7 + uVar10);
        LAB_00027f90:
            uVar12 = (int)puVar7 - (int)puVar11;
            bVar25 = 0xd < uVar10;
            bVar24 = uVar10 == 0xe;
            if (uVar10 < 0xf) {
                bVar25 = 0x3ff < uVar12;
                bVar24 = uVar12 == 0x400;
            }
            cVar2 = (char)uVar10;
            if (!bVar25 || bVar24) {
                *pbVar20 = (char)(uVar12 - 1) * '\x04' & 0xcU |
                           (cVar2 + '\x01') * '\x10';
                pbVar20[1] = (byte)(uVar12 - 1 >> 2);
                pbVar22 = pbVar20;
            } else {
                pbVar22 = pbVar20 + 1;
                if (uVar12 < 0x4001) {
                    uVar12 = uVar12 - 1;
                    if (uVar10 < 0x22) {
                        *pbVar20 = cVar2 - 2U | 0x20;
                    } else {
                        *pbVar20 = 0x20;
                        for (uVar10 = uVar10 - 0x21; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar22 = 0;
                            pbVar22 = pbVar22 + 1;
                        }
                    LAB_000280cc:
                        *pbVar22 = (byte)uVar10;
                        pbVar22 = pbVar22 + 1;
                    }
                } else {
                    uVar12 = uVar12 - 0x4000;
                    bVar1 = (byte)(uVar12 >> 0xb) & 8 | 0x10;
                    if (9 < uVar10) {
                        *pbVar20 = bVar1;
                        for (uVar10 = uVar10 - 9; 0xff < uVar10;
                             uVar10 = uVar10 - 0xff) {
                            *pbVar22 = 0;
                            pbVar22 = pbVar22 + 1;
                        }
                        goto LAB_000280cc;
                    }
                    *pbVar20 = bVar1 | cVar2 - 2U;
                }
                *pbVar22 = (byte)(uVar12 << 2);
                pbVar22[1] = (byte)(uVar12 >> 6);
            }
            pbVar22 = pbVar22 + 2;
            if (puVar19 <= puVar8) {
                iVar15 = 0;
                goto LAB_00027fe4;
            }
            uVar12 = *puVar8;
            iVar15 = (int)puVar8 - (int)param_1;
            param_5 = 0;
            puVar7 = puVar8;
        }
    } while (true);
}

void lzo1y_1_compress(uint param_1, uint param_2, char *param_3, int *param_4,
                      void *param_5)

{
    byte bVar1;
    char *pcVar2;
    uint uVar3;
    char *pcVar4;
    char *pcVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    uint uVar10;
    uint uVar11;
    char *pcVar12;
    char *pcVar13;
    bool bVar14;

    pcVar4 = param_3;
    uVar6 = param_2;
    if (param_2 < 0x15) {
        iVar9 = 0;
    LAB_000282d4:
        uVar7 = iVar9 + uVar6;
        if (iVar9 + uVar6 == 0)
            goto LAB_000282dc;
    } else {
        uVar8 = param_2;
        if (0xbfff < param_2) {
            uVar8 = 0xc000;
        }
        uVar10 = param_1 + uVar8;
        uVar7 = param_2;
        if (uVar10 < uVar10 + (uVar8 >> 5)) {
            iVar9 = 0;
            uVar7 = param_1;
            while (true) {
                uVar11 = uVar10;
                uVar6 = uVar6 - uVar8;
                memset(param_5, 0, 0x8000);
                iVar9 =
                    FUN_00027e5c(uVar7, uVar8, pcVar4, param_4, iVar9, param_5);
                pcVar4 = pcVar4 + *param_4;
                if (uVar6 < 0x15)
                    break;
                uVar8 = uVar6;
                if (0xbfff < uVar6) {
                    uVar8 = 0xc000;
                }
                uVar10 = uVar11 + uVar8;
                uVar3 = uVar10 + (uVar8 + iVar9 >> 5);
                if ((uVar3 <= uVar10) || (uVar7 = uVar11, uVar3 <= uVar10))
                    break;
            }
            goto LAB_000282d4;
        }
    }
    bVar14 = uVar7 == 0xee;
    if (uVar7 < 0xef) {
        bVar14 = param_3 == pcVar4;
    }
    pcVar12 = (char *)(param_1 + (param_2 - uVar7));
    bVar1 = (byte)uVar7;
    uVar6 = uVar7;
    if (bVar14) {
        *pcVar4 = bVar1 + 0x11;
        pcVar2 = pcVar4 + 1;
        if (uVar7 < 8) {
            pcVar5 = pcVar2;
            if (uVar7 < 4)
                goto LAB_000283f0;
        LAB_000283d0:
            pcVar2 = pcVar4 + 1;
            pcVar4 = pcVar2;
        LAB_00028390:
            pcVar13 = pcVar12 + 4;
            uVar6 = uVar6 - 4;
            pcVar5 = pcVar4 + 4;
            *(undefined4 *)pcVar4 = *(undefined4 *)pcVar12;
        } else {
        LAB_00028348:
            iVar9 = (uVar7 - 8 & 0xfffffff8) + 8;
            pcVar4 = pcVar12;
            pcVar13 = pcVar2;
            do {
                pcVar5 = pcVar13 + 8;
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(pcVar4 + 4);
                pcVar4 = pcVar4 + 8;
                pcVar13 = pcVar5;
            } while (pcVar2 + iVar9 != pcVar5);
            uVar6 = uVar7 & 7;
            pcVar12 = pcVar12 + iVar9;
            pcVar4 = pcVar5;
            pcVar13 = pcVar12;
            if (3 < uVar6)
                goto LAB_00028390;
        }
        pcVar12 = pcVar13;
        if (uVar6 != 0)
            goto LAB_000283f0;
    } else {
        if (3 < uVar7) {
            pcVar2 = pcVar4 + 1;
            if (uVar7 < 0x13) {
                *pcVar4 = bVar1 - 3;
                if (uVar7 < 8)
                    goto LAB_000283d0;
            } else {
                *pcVar4 = bVar14;
                for (uVar6 = uVar7 - 0x12; 0xff < uVar6; uVar6 = uVar6 - 0xff) {
                    *pcVar2 = bVar14;
                    pcVar2 = pcVar2 + 1;
                }
                *pcVar2 = (char)uVar6;
                pcVar2 = pcVar2 + 1;
            }
            goto LAB_00028348;
        }
        pcVar4[-2] = pcVar4[-2] | bVar1;
        pcVar2 = pcVar4;
        pcVar5 = pcVar4;
    LAB_000283f0:
        pcVar5 = pcVar5 + -1;
        pcVar4 = pcVar12;
        do {
            pcVar13 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
            *pcVar5 = *pcVar4;
            pcVar4 = pcVar13;
        } while (pcVar13 != pcVar12 + uVar6);
    }
    pcVar4 = pcVar2 + uVar7;
LAB_000282dc:
    *pcVar4 = '\x11';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    *param_4 = (int)(pcVar4 + (3 - (int)param_3));
    return;
}

byte *FUN_00028458(int param_1, byte *param_2, uint param_3, uint param_4)

{
    byte bVar1;
    char cVar2;
    byte *pbVar3;
    uint uVar4;
    byte *pbVar5;
    uint uVar6;
    byte *pbVar7;
    bool bVar8;
    bool bVar9;

    *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_3;
    if (param_3 == 2) {
        pbVar3 = param_2 + 2;
        *param_2 = (char)(param_4 - 1) * '\x04' & 0xc;
        param_2[1] = (byte)(param_4 - 1 >> 2);
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        goto LAB_00028518;
    }
    bVar9 = 0xd < param_3;
    bVar8 = param_3 == 0xe;
    if (param_3 < 0xf) {
        bVar9 = 0x3ff < param_4;
        bVar8 = param_4 == 0x400;
    }
    cVar2 = (char)param_3;
    if (!bVar9 || bVar8) {
        pbVar3 = param_2 + 2;
        *param_2 =
            (char)(param_4 - 1) * '\x04' & 0xcU | (cVar2 + '\x01') * '\x10';
        param_2[1] = (byte)(param_4 - 1 >> 2);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        goto LAB_00028518;
    }
    bVar8 = param_4 == 0x800;
    if (param_4 < 0x801) {
        bVar8 = param_3 == 3;
    }
    if (bVar8) {
        if (3 < *(uint *)(param_1 + 0x4c)) {
            pbVar3 = param_2 + 2;
            *param_2 = (char)(param_4 - 0x401) * '\x04' & 0xc;
            param_2[1] = (byte)(param_4 - 0x401 >> 2);
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
            goto LAB_00028518;
        }
    LAB_00028560:
        pbVar5 = param_2 + 1;
        *param_2 = cVar2 - 2U | 0x20;
    } else {
        pbVar7 = param_2 + 1;
        if (0x4000 < param_4) {
            uVar6 = param_4 - 0x4000;
            bVar1 = (byte)(uVar6 >> 0xb) & 8;
            if (param_3 < 10) {
                *param_2 = bVar1 | cVar2 - 2U | 0x10;
            } else {
                *param_2 = bVar1 | 0x10;
                for (uVar4 = param_3 - 9; 0xff < uVar4; uVar4 = uVar4 - 0xff) {
                    *pbVar7 = 0;
                    pbVar7 = pbVar7 + 1;
                }
                *pbVar7 = (byte)uVar4;
                pbVar7 = pbVar7 + 1;
            }
            pbVar3 = pbVar7 + 2;
            *pbVar7 = (char)uVar6 * '\x04';
            pbVar7[1] = (byte)(uVar6 >> 6);
            *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
            goto LAB_00028518;
        }
        if (param_3 < 0x22)
            goto LAB_00028560;
        *param_2 = 0x20;
        for (uVar6 = param_3 - 0x21; 0xff < uVar6; uVar6 = uVar6 - 0xff) {
            *pbVar7 = 0;
            pbVar7 = pbVar7 + 1;
        }
        pbVar5 = pbVar7 + 1;
        *pbVar7 = (byte)uVar6;
    }
    pbVar3 = pbVar5 + 2;
    *pbVar5 = (char)(param_4 - 1) * '\x04';
    pbVar5[1] = (byte)(param_4 - 1 >> 6);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
LAB_00028518:
    *(uint *)(param_1 + 0x10) = param_3;
    *(uint *)(param_1 + 0x14) = param_4;
    return pbVar3;
}

char *FUN_00028634(int param_1, char *param_2, char *param_3, uint param_4)

{
    byte bVar1;
    char *pcVar2;
    char *pcVar4;
    uint uVar5;
    char *pcVar6;
    char *pcVar3;

    *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_4;
    bVar1 = (byte)param_4;
    if (*(char **)(param_1 + 0x28) == param_2) {
        if (param_4 < 0xef) {
            pcVar6 = param_2 + 1;
            *param_2 = bVar1 + 0x11;
            goto LAB_00028670;
        }
    } else {
        if (param_4 < 4) {
            param_2[-2] = param_2[-2] | bVar1;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            pcVar6 = param_2;
            goto LAB_00028670;
        }
        pcVar6 = param_2 + 1;
        if (param_4 < 0x13) {
            *param_2 = bVar1 - 3;
            *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
            goto LAB_00028670;
        }
    }
    *param_2 = '\0';
    pcVar6 = param_2 + 1;
    for (uVar5 = param_4 - 0x12; 0xff < uVar5; uVar5 = uVar5 - 0xff) {
        *pcVar6 = '\0';
        pcVar6 = pcVar6 + 1;
    }
    *pcVar6 = (char)uVar5;
    pcVar6 = pcVar6 + 1;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
LAB_00028670:
    pcVar4 = pcVar6 + -1;
    pcVar3 = param_3;
    do {
        pcVar2 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
        *pcVar4 = *pcVar3;
        pcVar3 = pcVar2;
    } while (pcVar2 != param_3 + param_4);
    return pcVar6 + param_4;
}

void FUN_00028710(int param_1, uint *param_2, uint *param_3)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    bool bVar4;
    bool bVar5;

    uVar1 = *param_2;
    if (uVar1 < 4) {
        return;
    }
    uVar3 = *param_3;
    if (uVar3 < 0x401) {
        return;
    }
    if (uVar1 < 0x10) {
        iVar2 = param_1 + uVar1 * 4;
        if (*(int *)(iVar2 + 0x28) - 1U < 0x400) {
            *param_2 = uVar1 - 1;
            *param_3 = *(uint *)(iVar2 + 0x28);
            return;
        }
    }
    bVar5 = 0x3fff < uVar3;
    bVar4 = uVar3 == 0x4000;
    if (0x4000 < uVar3) {
        bVar5 = 8 < uVar1;
        bVar4 = uVar1 == 9;
    }
    if (bVar5 && !bVar4) {
        if (uVar1 < 0x11) {
            iVar2 = uVar1 * 4;
            if (*(int *)(param_1 + iVar2 + 0x24) - 1U < 0x400) {
                *param_2 = uVar1 - 2;
                *param_3 = *(uint *)(param_1 + iVar2 + 0x24);
                return;
            }
        } else {
            if (0x22 < uVar1) {
                return;
            }
            iVar2 = uVar1 << 2;
        }
        if (*(int *)(param_1 + iVar2 + 0x28) - 1U < 0x4000) {
            *param_2 = uVar1 - 1;
            *param_3 = *(uint *)(param_1 + iVar2 + 0x28);
        }
        return;
    }
    return;
}

int FUN_000287cc(uint param_1, uint param_2, uint param_3)

{
    int iVar1;
    uint uVar2;
    bool bVar3;

    if (param_1 < 2) {
        return 0;
    }
    if (param_1 == 2) {
        if (param_3 - 1 < 3) {
            uVar2 = (uint)(param_2 < 0x401);
        } else {
            uVar2 = 0;
        }
        return uVar2 << 1;
    }
    if (param_1 < 0xf && param_2 < 0x401) {
        return 2;
    }
    bVar3 = param_2 == 0x800;
    if (param_2 < 0x801) {
        bVar3 = param_1 == 3;
    }
    if (!bVar3) {
        if (param_2 < 0x4001) {
            if (0x21 < param_1) {
                param_1 = param_1 - 0x21;
                iVar1 = 4;
                if (param_1 < 0x100) {
                    return 4;
                }
                do {
                    param_1 = param_1 - 0xff;
                    iVar1 = iVar1 + 1;
                } while (0xff < param_1);
                return iVar1;
            }
        } else {
            if (0xbfff < param_2) {
                return 0;
            }
            if (9 < param_1) {
                param_1 = param_1 - 9;
                iVar1 = 4;
                if (param_1 < 0x100) {
                    return 4;
                }
                do {
                    param_1 = param_1 - 0xff;
                    iVar1 = iVar1 + 1;
                } while (0xff < param_1);
                return iVar1;
            }
        }
        return 3;
    }
    if (param_3 < 4) {
        iVar1 = 3;
    } else {
        iVar1 = 2;
    }
    return iVar1;
}

undefined4 FUN_000288b0(int param_1, int param_2, int param_3, int param_4)

{
    ushort uVar1;
    short sVar2;
    char *pcVar3;
    undefined1 uVar4;
    ushort *puVar5;
    uint uVar6;
    int *piVar7;
    char *pcVar9;
    undefined2 uVar10;
    uint uVar11;
    int iVar13;
    int iVar14;
    uint uVar15;
    short *psVar16;
    uint uVar17;
    ushort *puVar18;
    undefined1 *puVar19;
    int iVar20;
    int iVar21;
    ushort *puVar22;
    char cVar23;
    uint uVar24;
    uint uVar25;
    uint uVar26;
    undefined1 *puVar27;
    char *pcVar28;
    bool bVar29;
    undefined2 local_48;
    int *piVar8;
    uint uVar12;

    puVar18 = (ushort *)(param_2 + 0x16c);
    if (param_4 == 0) {
        uVar17 = *(uint *)(param_2 + 0x154);
        iVar20 = uVar17 + 1;
        iVar21 = uVar17 + 2;
        local_48 = (undefined2)uVar17;
        puVar22 = (ushort *)((int)puVar18 + uVar17);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
    } else {
        param_3 = param_3 - param_4;
        uVar17 = *(uint *)(param_2 + 0x154);
        uVar24 = uVar17;
        iVar14 = param_3;
        if (param_3 == 0) {
            local_48 = (undefined2)uVar17;
            iVar20 = uVar17 + 1;
            iVar21 = uVar17 + 2;
            puVar22 = (ushort *)((int)puVar18 + uVar17);
        } else {
            do {
                uVar26 = *(uint *)(param_2 + 0x158);
                if (*(int *)(param_2 + 0x164) == 0) {
                    iVar20 = param_2 + uVar26;
                    psVar16 =
                        (short *)(param_2 +
                                  (((uint) * (byte *)(iVar20 + 0x16e) ^
                                    ((uint) * (byte *)(iVar20 + 0x16d) ^
                                     (uint) * (byte *)(iVar20 + 0x16c) << 5)
                                        << 5) *
                                       0x13ebe000 >>
                                   0x12) *
                                      2 +
                                  0x47168);
                    *psVar16 = *psVar16 + -1;
                    puVar22 =
                        (ushort *)(param_2 +
                                   (uint) * (ushort *)((int)puVar18 + uVar26) *
                                       2 +
                                   0x4f168);
                    if (uVar26 == *puVar22) {
                        *puVar22 = 0xffff;
                    }
                } else {
                    *(int *)(param_2 + 0x164) = *(int *)(param_2 + 0x164) + -1;
                }
                uVar17 = uVar24 + 1;
                iVar20 = param_2 +
                         (((uint) * (byte *)(param_2 + uVar24 + 0x16e) ^
                           ((uint) * (byte *)(param_2 + uVar17 + 0x16c) ^
                            (uint) * (byte *)(param_2 + uVar24 + 0x16c) << 5)
                               << 5) *
                              0x13ebe000 >>
                          0x12) *
                             2;
                sVar2 = *(short *)(iVar20 + 0x47168);
                if (sVar2 == 0) {
                    uVar10 = 0xffff;
                } else {
                    uVar10 = *(undefined2 *)(iVar20 + 0xd16c);
                }
                iVar21 = param_2 + uVar24 * 2;
                *(undefined2 *)(iVar21 + 0x1516c) = uVar10;
                *(short *)(iVar20 + 0xd16c) = (short)uVar24;
                uVar15 = *(uint *)(param_2 + 4);
                *(short *)(iVar21 + 0x2e16a) = (short)uVar15 + 1;
                *(short *)(iVar20 + 0x47168) = sVar2 + 1;
                iVar20 = *(int *)(param_2 + 0xb4);
                uVar11 = *(uint *)(param_2 + 0x150);
                puVar27 = *(undefined1 **)(iVar20 + 0x1c);
                puVar19 = *(undefined1 **)(iVar20 + 0x24);
                *(short *)(param_2 +
                           (*(ushort *)((int)puVar18 + uVar24) + 0x278b4) * 2) =
                    (short)uVar24;
                if (puVar27 < puVar19) {
                    *(undefined1 **)(iVar20 + 0x1c) = puVar27 + 1;
                    uVar4 = *puVar27;
                    *(undefined1 *)(param_2 + uVar11 + 0x16c) = uVar4;
                    if (uVar11 < uVar15) {
                        *(undefined1 *)(*(int *)(param_2 + 0x160) + uVar11) =
                            uVar4;
                        uVar11 = *(uint *)(param_2 + 0x150);
                        uVar26 = *(uint *)(param_2 + 0x158);
                        uVar17 = *(int *)(param_2 + 0x154) + 1;
                    }
                } else {
                    if (*(int *)(param_2 + 0x24) != 0) {
                        *(int *)(param_2 + 0x24) =
                            *(int *)(param_2 + 0x24) + -1;
                    }
                    *(undefined1 *)(param_2 + uVar11 + 0x16c) = 0;
                    if (uVar11 < uVar15) {
                        *(undefined1 *)(*(int *)(param_2 + 0x160) + uVar11) = 0;
                        uVar11 = *(uint *)(param_2 + 0x150);
                        uVar26 = *(uint *)(param_2 + 0x158);
                        uVar17 = *(int *)(param_2 + 0x154) + 1;
                    }
                }
                uVar24 = *(uint *)(param_2 + 0x15c);
                *(uint *)(param_2 + 0x150) = uVar11 + 1;
                if (uVar11 + 1 == uVar24) {
                    *(undefined4 *)(param_2 + 0x150) = 0;
                }
                if (uVar24 == uVar17) {
                    local_48 = 0;
                    uVar17 = 0;
                    iVar21 = 2;
                    iVar20 = 1;
                    *(undefined4 *)(param_2 + 0x154) = 0;
                    puVar22 = puVar18;
                } else {
                    local_48 = (undefined2)uVar17;
                    iVar20 = uVar17 + 1;
                    iVar21 = uVar17 + 2;
                    *(uint *)(param_2 + 0x154) = uVar17;
                    puVar22 = (ushort *)((int)puVar18 + uVar17);
                }
                uVar26 = uVar26 + 1;
                if (uVar24 == uVar26) {
                    uVar26 = 0;
                }
                iVar14 = iVar14 + -1;
                *(uint *)(param_2 + 0x158) = uVar26;
                uVar24 = uVar17;
            } while (iVar14 != 0);
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1 + param_3;
    }
    iVar14 = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 1;
    if (iVar14 != 0) {
        memset((void *)(param_2 + 0xbc), 0, 0x88);
    }
    uVar26 = (uint) * (byte *)(param_2 + uVar17 + 0x16c);
    iVar21 =
        param_2 +
        (((uint) * (byte *)(param_2 + iVar21 + 0x16c) ^
          ((uint) * (byte *)(param_2 + iVar20 + 0x16c) ^ uVar26 << 5) << 5) *
             0x13ebe000 >>
         0x12) *
            2;
    puVar5 = (ushort *)(iVar21 + 0x47168);
    uVar1 = *puVar5;
    uVar24 = (uint)uVar1;
    if (uVar24 == 0) {
        *(undefined2 *)(param_2 + (uVar17 + 0xa8b4) * 2 + 4) = 0xffff;
        uVar15 = 0xffff;
        *puVar5 = 1;
        uVar11 = uVar24;
    } else {
        uVar15 = (uint) * (ushort *)(iVar21 + 0xd16c);
        *(ushort *)(param_2 + (uVar17 + 0xa8b4) * 2 + 4) =
            *(ushort *)(iVar21 + 0xd16c);
        *puVar5 = uVar1 + 1;
        uVar11 = *(uint *)(param_2 + 0xc);
        if (uVar11 == 0 || uVar24 <= uVar11) {
            uVar11 = uVar24;
        }
    }
    *(undefined2 *)(iVar21 + 0xd16c) = local_48;
    uVar24 = *(uint *)(param_2 + 0x24);
    *(uint *)(param_2 + 0x28) = uVar26;
    if (uVar24 < 2) {
        uVar26 = *(uint *)(param_2 + 4);
        if (uVar24 == 0) {
            uVar15 = 0xffffffff;
        }
        iVar21 = *(int *)(param_2 + 0x20);
        if (uVar24 == 0) {
            *(uint *)(param_2 + 0x28) = uVar15;
        }
        uVar25 = *(uint *)(param_2 + 0x1c);
        *(short *)(param_2 + (uVar17 + 0x170b4) * 2 + 2) = (short)uVar26 + 1;
        goto LAB_000289d8;
    }
    uVar26 = (uint) * (ushort *)(param_2 + (*puVar22 + 0x278b4) * 2);
    if (uVar26 == 0xffff) {
        uVar25 = *(uint *)(param_2 + 0x1c);
        iVar21 = *(int *)(param_2 + 0x20);
        uVar10 = (undefined2)uVar25;
    } else {
        *(uint *)(param_2 + 0xb8) = uVar26;
        if (*(int *)(param_2 + 0xc4) == 0) {
            *(uint *)(param_2 + 0xc4) = uVar26 + 1;
        }
        uVar6 = 2;
        *(undefined4 *)(param_2 + 0x1c) = 2;
        uVar12 = uVar24;
        uVar25 = uVar24;
        if (uVar24 != 2) {
            iVar21 = uVar11 - 1;
            cVar23 = *(char *)((int)puVar22 + 1);
            uVar12 = uVar6;
            uVar25 = uVar6;
            if (uVar11 != 0) {
                uVar26 = uVar15;
                do {
                    pcVar9 = (char *)((int)puVar18 + uVar26);
                    if ((((pcVar9[uVar6 - 1] == cVar23) &&
                          (pcVar9[uVar6] == *(char *)((int)puVar22 + uVar6))) &&
                         (*pcVar9 == (char)*puVar22)) &&
                        (pcVar9[1] == *(char *)((int)puVar22 + 1))) {
                        pcVar9 = pcVar9 + 2;
                        pcVar3 = (char *)((int)puVar22 + 3);
                        do {
                            pcVar28 = pcVar3;
                            if ((char *)((int)puVar18 + uVar24 + uVar17) <=
                                pcVar28)
                                break;
                            pcVar9 = pcVar9 + 1;
                            pcVar3 = pcVar28 + 1;
                        } while (*pcVar28 == *pcVar9);
                        uVar11 = (int)pcVar28 - (int)puVar22;
                        if ((uVar11 < 0x22) && (iVar13 = param_2 + uVar11 * 4,
                                                *(int *)(iVar13 + 0xbc) == 0)) {
                            *(uint *)(iVar13 + 0xbc) = uVar26 + 1;
                        }
                        if (uVar6 < uVar11) {
                            *(uint *)(param_2 + 0x1c) = uVar11;
                            *(uint *)(param_2 + 0xb8) = uVar26;
                            if (uVar24 == uVar11) {
                                uVar12 = uVar24 & 0xffff;
                                uVar25 = uVar24;
                                goto LAB_00028b88;
                            }
                            if ((*(uint *)(param_2 + 0x10) <= uVar11) ||
                                (*(ushort *)(param_2 + (uVar26 + 0x170b4) * 2 +
                                             2) < uVar11))
                                break;
                            cVar23 = *(char *)((int)puVar22 + (uVar11 - 1));
                            uVar6 = uVar11;
                        }
                    }
                    iVar21 = iVar21 + -1;
                    uVar26 =
                        (uint) * (ushort *)(param_2 + 0x1516c + uVar26 * 2);
                } while (iVar21 != -1);
                uVar25 = *(uint *)(param_2 + 0x1c);
                uVar10 = (undefined2)uVar25;
                if (uVar25 < 2) {
                    iVar21 = *(int *)(param_2 + 0x20);
                    goto LAB_00028ba0;
                }
                uVar26 = *(uint *)(param_2 + 0xb8);
                uVar12 = uVar25 & 0xffff;
            }
        }
    LAB_00028b88:
        uVar10 = (undefined2)uVar12;
        if (uVar26 < uVar17) {
            iVar21 = uVar17 - uVar26;
        } else {
            iVar21 = (uVar17 + *(int *)(param_2 + 0x15c)) - uVar26;
        }
        *(int *)(param_2 + 0x20) = iVar21;
    }
LAB_00028ba0:
    uVar26 = *(uint *)(param_2 + 4);
    *(undefined2 *)(param_2 + (uVar17 + 0x170b4) * 2 + 2) = uVar10;
    if (iVar14 != 0) {
        piVar7 = (int *)(param_2 + 0xc0);
        do {
            piVar8 = piVar7 + 1;
            iVar14 = *piVar8;
            if (iVar14 == 0) {
                piVar7[-0x23] = 0;
            } else {
                iVar13 = iVar20 - iVar14;
                if (uVar17 <= iVar14 - 1U) {
                    iVar13 = (*(int *)(param_2 + 0x15c) - iVar14) + 1 + uVar17;
                }
                piVar7[-0x23] = iVar13;
            }
            piVar7 = piVar8;
        } while ((int *)(param_2 + 0x140) != piVar8);
    }
LAB_000289d8:
    uVar24 = *(uint *)(param_2 + 0x158);
    if (*(int *)(param_2 + 0x164) == 0) {
        iVar14 = param_2 + uVar24;
        psVar16 = (short *)(param_2 +
                            (((uint) * (byte *)(iVar14 + 0x16e) ^
                              ((uint) * (byte *)(iVar14 + 0x16d) ^
                               (uint) * (byte *)(iVar14 + 0x16c) << 5)
                                  << 5) *
                                 0x13ebe000 >>
                             0x12) *
                                2 +
                            0x47168);
        *psVar16 = *psVar16 + -1;
        puVar18 = (ushort *)(param_2 +
                             (uint) * (ushort *)((int)puVar18 + uVar24) * 2 +
                             0x4f168);
        if (uVar24 == *puVar18) {
            *puVar18 = 0xffff;
        }
    } else {
        *(int *)(param_2 + 0x164) = *(int *)(param_2 + 0x164) + -1;
    }
    iVar14 = *(int *)(param_2 + 0xb4);
    puVar19 = *(undefined1 **)(iVar14 + 0x24);
    puVar27 = *(undefined1 **)(iVar14 + 0x1c);
    *(undefined2 *)(param_2 + (*puVar22 + 0x278b4) * 2) = local_48;
    *(uint *)(param_1 + 8) = uVar25;
    *(int *)(param_1 + 0xc) = iVar21;
    uVar11 = *(uint *)(param_2 + 0x150);
    if (puVar27 < puVar19) {
        *(undefined1 **)(iVar14 + 0x1c) = puVar27 + 1;
        uVar4 = *puVar27;
        *(undefined1 *)(param_2 + uVar11 + 0x16c) = uVar4;
    } else {
        uVar4 = 0;
        if (*(int *)(param_2 + 0x24) != 0) {
            *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
        *(undefined1 *)(param_2 + uVar11 + 0x16c) = 0;
    }
    if (uVar11 < uVar26) {
        *(undefined1 *)(*(int *)(param_2 + 0x160) + uVar11) = uVar4;
        uVar11 = *(uint *)(param_2 + 0x150);
        uVar17 = *(uint *)(param_2 + 0x154);
        uVar24 = *(uint *)(param_2 + 0x158);
    }
    uVar26 = *(uint *)(param_2 + 0x15c);
    *(uint *)(param_2 + 0x150) = uVar11 + 1;
    uVar24 = uVar24 + 1;
    iVar14 = *(int *)(param_1 + 0x2c);
    if (uVar11 + 1 == uVar26) {
        *(undefined4 *)(param_2 + 0x150) = 0;
    }
    if (uVar26 == uVar17 + 1) {
        *(undefined4 *)(param_2 + 0x154) = 0;
    } else {
        *(uint *)(param_2 + 0x154) = uVar17 + 1;
    }
    if (uVar26 == uVar24) {
        *(undefined4 *)(param_2 + 0x158) = 0;
    } else {
        *(uint *)(param_2 + 0x158) = uVar24;
    }
    bVar29 = -1 < *(int *)(param_2 + 0x28);
    if (bVar29) {
        uVar24 = *(uint *)(param_2 + 0x24);
    } else {
        uVar26 = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
    }
    if (bVar29) {
        uVar26 = ~uVar24;
        *(uint *)(param_1 + 4) = uVar24 + 1;
    }
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + uVar26;
    if (((iVar14 != 0) && (*(code **)(iVar14 + 8) != (code *)0x0)) &&
        (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x30))) {
        (**(code **)(iVar14 + 8))(iVar14, *(uint *)(param_1 + 0x30),
                                  *(undefined4 *)(param_1 + 0x34), 0);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x400;
    }
    return 0;
}

/* WARNING: Type propagation algorithm not settling */

int lzo1y_999_compress_internal(undefined1 *param_1, size_t param_2,
                                undefined1 *param_3, undefined4 *param_4,
                                int *param_5, void *param_6, uint param_7,
                                int param_8, uint param_9, uint param_10,
                                uint param_11, int param_12, uint param_13,
                                uint param_14)

{
    short sVar1;
    uint *puVar2;
    int iVar3;
    int iVar4;
    ushort *puVar5;
    ushort *puVar6;
    ushort *puVar7;
    uint extraout_r2;
    uint uVar8;
    int iVar9;
    uint uVar10;
    int *piVar11;
    uint extraout_r3;
    undefined1 *puVar12;
    uint uVar13;
    uint uVar14;
    int iVar15;
    uint uVar16;
    ushort *puVar17;
    size_t __n;
    undefined2 *puVar18;
    uint uVar19;
    undefined2 uVar20;
    uint uVar21;
    uint uVar22;
    int *piVar23;
    bool bVar24;
    bool bVar25;
    undefined1 *local_cc;
    undefined1 *local_b4;
    uint local_a4;
    uint local_a0[3];
    uint local_94;
    uint local_90[3];
    undefined1 *local_84;
    undefined1 *local_80;
    undefined1 *local_7c;
    undefined1 *local_78;
    undefined1 *local_74;
    int local_70;
    undefined4 local_6c;
    undefined1 *local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    int local_54;
    uint local_50;
    uint local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;

    if ((int)param_9 < 0) {
        param_9 = 1;
    }
    local_78 = param_1 + param_2;
    if (param_10 == 0) {
        param_10 = 0x20;
    }
    puVar2 = local_a0 + 1;
    local_a0[1] = 1;
    local_70 = param_8;
    if (param_11 == 0) {
        param_11 = 0x20;
    }
    param_5[0x2d] = (int)puVar2;
    local_38 = 0;
    if (param_13 == 0) {
        param_13 = 0x800;
    }
    local_3c = 0;
    piVar23 = param_5 + 0x2e;
    local_40 = 0;
    piVar11 = param_5 + 10;
    local_44 = 0;
    local_48 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_4c = 0;
    local_50 = 0;
    local_90[2] = 0;
    local_90[1] = 0;
    local_64 = 0;
    local_68 = (undefined1 *)0x0;
    local_6c = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_54 = 0;
    param_5[7] = 0;
    param_5[8] = 0;
    do {
        piVar23 = piVar23 + 1;
        *piVar23 = 0;
        piVar11 = piVar11 + 1;
        *piVar11 = 0;
    } while (param_5 + 0x2c != piVar11);
    param_5[0x58] = (int)param_5 + 0xc96b;
    param_5[2] = 1;
    param_5[0x57] = 0xc7ff;
    param_5[5] = 0;
    param_5[6] = 0;
    *param_5 = 0xbfff;
    param_5[0x59] = 0xbfff;
    param_5[1] = 0x800;
    param_5[3] = 0x800;
    param_5[4] = 0x800;
    local_80 = param_1;
    local_7c = param_1;
    local_74 = param_3;
    memset(param_5 + 0x11c5a, 0, 0x8000);
    memset(param_5 + 0x13c5a, 0xff, 0x20000);
    param_5[0x54] = 0;
    param_5[0x52] = 0;
    param_5[0x51] = 0;
    param_5[0x53] = 0;
    if (param_7 == 0 || param_6 == (void *)0x0) {
        param_5[0x55] = 0;
        param_5[0x5a] = 0;
        param_5[9] = param_2;
        if (param_2 != 0) {
            __n = 0;
            goto LAB_00029284;
        }
        param_5[0x56] = 0x800;
    } else {
        __n = param_7;
        if (0xbfff < param_7) {
            __n = 0xbfff;
            param_6 = (void *)((int)param_6 + (param_7 - 0xbfff));
        }
        param_5[0x52] = (int)param_6 + __n;
        param_5[0x51] = (int)param_6;
        param_5[0x53] = __n;
        memcpy(param_5 + 0x5b, param_6, __n);
        bVar24 = param_2 == 0;
        param_5[0x54] = __n;
        puVar12 = (undefined1 *)extraout_r3;
        if (bVar24) {
            puVar12 = (undefined1 *)0xc7ff;
        }
        param_5[0x55] = __n;
        param_5[0x5a] = __n;
        uVar8 = extraout_r2;
        if (bVar24) {
            uVar8 = 0xbfff;
        }
        param_5[9] = param_2;
        local_cc = puVar12;
        if (!bVar24) {
        LAB_00029284:
            if (0x800 < param_2) {
                param_2 = 0x800;
                param_5[9] = 0x800;
            }
            memcpy((void *)((int)param_5 + __n + 0x16c), param_1, param_2);
            param_2 = param_5[9];
            local_cc = (undefined1 *)param_5[0x57];
            puVar12 = (undefined1 *)(param_2 + param_5[0x54]);
            *(size_t *)(param_5[0x2d] + 0x1c) =
                *(int *)(param_5[0x2d] + 0x1c) + param_2;
            param_5[0x54] = (int)puVar12;
            if (puVar12 == local_cc) {
                puVar12 = (undefined1 *)0x0;
                param_5[0x54] = 0;
            }
            if ((param_2 < 2) || (iVar9 = param_5[0x53], iVar9 == 0)) {
                __n = param_5[0x5a];
                uVar8 = param_5[0x59];
            } else {
                iVar3 = param_5[1];
                puVar5 = (ushort *)(param_5 + 0x5b);
                uVar8 = *param_5 - iVar9;
                param_5[0x59] = uVar8;
                puVar18 = (undefined2 *)((int)param_5 + 0x1516a);
                piVar23 = param_5 + 0xb85a;
                param_5[0x5a] = 0;
                puVar6 = puVar5;
                puVar17 = puVar5;
                do {
                    uVar20 = 0xffff;
                    puVar7 = (ushort *)((int)puVar6 + 1);
                    uVar16 =
                        ((uint)(byte)puVar6[1] ^
                         ((uint) * (byte *)puVar7 ^ (uint)(byte)*puVar6 << 5)
                             << 5) *
                            0x13ebe000 >>
                        0x12;
                    sVar1 = *(short *)((int)param_5 + uVar16 * 2 + 0x47168);
                    if (sVar1 != 0) {
                        uVar20 =
                            *(undefined2 *)((int)param_5 + uVar16 * 2 + 0xd16c);
                    }
                    puVar12 =
                        (undefined1 *)((int)puVar17 - (int)puVar5 & 0xffff);
                    puVar18 = puVar18 + 1;
                    *puVar18 = uVar20;
                    uVar20 = (undefined2)((int)puVar17 - (int)puVar5);
                    *(undefined2 *)((int)param_5 + uVar16 * 2 + 0xd16c) =
                        uVar20;
                    piVar23 = (int *)((int)piVar23 + 2);
                    *(short *)piVar23 = (short)iVar3 + 1;
                    *(short *)((int)param_5 + uVar16 * 2 + 0x47168) = sVar1 + 1;
                    *(undefined2 *)((int)param_5 + (*puVar17 + 0x278b4) * 2) =
                        uVar20;
                    puVar6 = puVar7;
                    puVar17 = (ushort *)((int)puVar17 + 1);
                } while ((ushort *)((int)param_5 + iVar9 + 0x16c) != puVar7);
                __n = 0;
            }
        }
        param_5[0x56] = __n;
        if (__n < uVar8) {
            puVar12 = local_cc;
        }
        iVar9 = __n - uVar8;
        if (__n < uVar8) {
            iVar9 = iVar9 + (int)puVar12;
        }
        param_5[0x56] = iVar9;
        if (2 < param_2)
            goto LAB_00029318;
    }
    iVar9 = param_2 + param_5[0x55];
    *(undefined1 *)((int)param_5 + iVar9 + 0x16e) = 0;
    *(undefined1 *)((int)param_5 + iVar9 + 0x16d) = 0;
    *(undefined1 *)((int)param_5 + iVar9 + 0x16c) = 0;
LAB_00029318:
    param_5[5] = param_14 & 1;
    param_5[3] = param_13;
    if (param_12 != 0) {
        param_5[4] = param_12;
    }
    iVar9 = FUN_000288b0(puVar2, param_5, 0);
    if (iVar9 == 0) {
        uVar8 = 0;
        local_cc = param_3;
        local_b4 = param_1;
    LAB_00029370:
        if (local_a0[2] != 0) {
            local_68 = local_cc + -(int)param_3;
            puVar12 = local_68;
            if (uVar8 == 0) {
                puVar12 = local_84;
            }
            local_a4 = local_94;
            local_a0[0] = local_90[0];
            if (uVar8 == 0) {
                local_b4 = puVar12;
            }
            if (local_94 < 2) {
            LAB_0002974c:
                uVar8 = uVar8 + 1;
                param_5[3] = param_13;
                local_a4 = 0;
                FUN_000288b0(puVar2, param_5);
            } else {
                if (local_94 == 2) {
                    bVar25 = 0x3ff < local_90[0];
                    bVar24 = local_90[0] == 0x400;
                    if (local_90[0] < 0x401) {
                        bVar25 = 1 < uVar8 - 1;
                        bVar24 = uVar8 - 1 == 2;
                    }
                    if ((!bVar25 || bVar24) && (local_cc != param_3))
                        goto LAB_000293d4;
                    goto LAB_0002974c;
                }
                if (uVar8 == 0 && local_cc == param_3)
                    goto LAB_0002974c;
                if (local_94 == 3) {
                    bVar25 = 0x7ff < local_90[0];
                    bVar24 = local_90[0] == 0x800;
                    if (0x800 < local_90[0]) {
                        bVar25 = 2 < uVar8;
                        bVar24 = uVar8 == 3;
                    }
                    if (bVar25 && !bVar24)
                        goto LAB_0002974c;
                }
            LAB_000293d4:
                if (param_5[5] != 0) {
                    FUN_00028710(param_5, &local_a4, local_a0);
                }
                uVar16 = local_a4;
                if ((param_9 == 0) || (param_11 <= local_a4)) {
                LAB_00029774:
                    iVar15 = 1;
                } else {
                    iVar3 = FUN_000287cc(local_a4, local_a0[0], uVar8);
                    uVar13 = iVar3 - 1U;
                    if (param_9 <= iVar3 - 1U) {
                        uVar13 = param_9;
                    }
                    if ((uVar13 == 0) || (local_a0[2] <= uVar16))
                        goto LAB_00029774;
                    uVar21 = 0;
                    do {
                        uVar19 = uVar21 + 1;
                        uVar14 = param_13;
                        if (param_10 <= uVar16) {
                            uVar14 = param_13 >> 2;
                        }
                        param_5[3] = uVar14;
                        FUN_000288b0(puVar2, param_5, 1, 0);
                        uVar16 = local_a4;
                        if (local_a4 <= local_94) {
                            if (local_94 == local_a4) {
                                if (local_a0[0] <= local_90[0])
                                    goto LAB_000294d4;
                                iVar15 = param_5[5];
                            } else {
                                iVar15 = param_5[5];
                            }
                            if (iVar15 != 0) {
                                FUN_00028710(param_5, &local_94, local_90);
                            }
                            uVar14 = local_94;
                            uVar16 = local_a4;
                            uVar22 = uVar8 + uVar19;
                            iVar15 =
                                FUN_000287cc(local_94, local_90[0], uVar22);
                            if (iVar15 != 0) {
                                if (local_cc == param_3) {
                                    iVar4 = 0;
                                } else {
                                    iVar4 = FUN_000287cc(uVar19, local_a0[0],
                                                         uVar8);
                                }
                                uVar10 = uVar19;
                                if (uVar8 < 4) {
                                    if (3 < uVar22) {
                                        uVar10 = uVar21 + 3;
                                    }
                                } else if ((uVar8 < 0x13) && (0x12 < uVar22)) {
                                    uVar10 = uVar21 + 2;
                                }
                                iVar15 = uVar10 + (iVar15 - iVar3) * 2;
                                if (iVar4 != 0) {
                                    iVar15 = iVar15 + (uVar19 - iVar4) * -2;
                                }
                                uVar10 = uVar16;
                                if (-1 < iVar15) {
                                    uVar10 = iVar15 + uVar16;
                                }
                                if (uVar10 <= uVar14) {
                                    if (iVar4 == 0) {
                                        uVar8 = uVar22;
                                    }
                                    local_54 = local_54 + 1;
                                    if (iVar4 != 0) {
                                        uVar16 = uVar8;
                                        if (uVar8 != 0) {
                                            local_cc =
                                                (undefined1 *)FUN_00028634(
                                                    puVar2, local_cc, local_b4,
                                                    uVar8);
                                            uVar16 = uVar19;
                                        }
                                        local_4c = uVar16;
                                        local_50 = uVar8;
                                        local_cc = (undefined1 *)FUN_00028458(
                                            puVar2, local_cc, uVar19,
                                            local_a0[0]);
                                        uVar8 = 0;
                                    }
                                    goto LAB_00029370;
                                }
                            }
                        }
                    LAB_000294d4:
                        iVar15 = uVar21 + 2;
                    } while ((uVar13 != uVar19) &&
                             (uVar21 = uVar19, uVar16 < local_a0[2]));
                }
                uVar13 = uVar16;
                uVar21 = uVar8;
                if (uVar8 != 0) {
                    local_cc = (undefined1 *)FUN_00028634(puVar2, local_cc,
                                                          local_b4, uVar8);
                    uVar13 = local_a4;
                    uVar21 = uVar16;
                }
                local_4c = uVar21;
                local_50 = uVar8;
                local_cc = (undefined1 *)FUN_00028458(puVar2, local_cc, uVar13,
                                                      local_a0[0]);
                uVar8 = 0;
                param_5[3] = param_13;
                FUN_000288b0(puVar2, param_5, local_a4, iVar15);
            }
            goto LAB_00029370;
        }
        if (uVar8 != 0) {
            local_cc =
                (undefined1 *)FUN_00028634(puVar2, local_cc, local_b4, uVar8);
        }
        *local_cc = 0x11;
        local_cc[1] = 0;
        local_68 = local_cc + (3 - (int)param_3);
        local_cc[2] = 0;
        *param_4 = local_68;
        if ((local_70 != 0) && (*(code **)(local_70 + 8) != (code *)0x0)) {
            (**(code **)(local_70 + 8))(local_70, local_6c);
        }
    }
    return iVar9;
}

undefined4 lzo1y_999_compress_level(void)

{
    undefined4 uVar1;
    int in_stack_00000010;

    if (in_stack_00000010 - 1U < 9) {
        uVar1 = lzo1y_999_compress_internal();
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

void lzo1y_999_compress_dict(void)

{
    lzo1y_999_compress_level();
    return;
}

void lzo1y_999_compress(void)

{
    lzo1y_999_compress_level();
    return;
}

undefined4 lzo1y_decompress(ushort *param_1, int param_2, byte *param_3,
                            int *param_4)

{
    byte *pbVar1;
    ushort *puVar2;
    byte bVar3;
    byte *pbVar4;
    undefined4 uVar5;
    ushort *puVar6;
    uint uVar7;
    byte *pbVar8;
    byte *pbVar9;
    ushort *unaff_r9;
    uint uVar10;
    int iVar11;
    ushort *puVar12;
    ushort *puVar13;
    byte *pbVar14;
    int iVar15;

    *param_4 = 0;
    puVar12 = (ushort *)((int)param_1 + 1);
    uVar10 = (uint)(byte)*param_1;
    puVar13 = puVar12;
    puVar2 = param_1;
    pbVar8 = param_3;
    if (uVar10 < 0x12)
        goto joined_r0x00029abc;
    uVar7 = uVar10 - 0x11;
    bVar3 = *(byte *)((int)param_1 + 1);
    if ((int)uVar7 < 4) {
        unaff_r9 = param_1 + 1;
    }
    pbVar9 = param_3;
    if (uVar7 == 3 || (int)(uVar10 - 0x14) < 0 != SBORROW4(uVar7, 3))
        goto LAB_00029ba8;
    pbVar8 = param_3 + -1;
    while (true) {
        pbVar8 = pbVar8 + 1;
        *pbVar8 = bVar3;
        if (puVar13 == (ushort *)((int)param_1 + (uVar10 - 0x11)))
            break;
        puVar13 = (ushort *)((int)puVar13 + 1);
        bVar3 = *(byte *)puVar13;
    }
    puVar2 = (ushort *)((int)puVar12 + uVar7);
    pbVar1 = param_3 + uVar7;
    puVar13 = (ushort *)((int)puVar2 + 1);
    do {
        uVar10 = (uint)(byte)*puVar2;
        pbVar8 = pbVar1;
        if (0xf < uVar10)
            goto LAB_00029a54;
        puVar12 = puVar2 + 1;
        pbVar9 = pbVar1 + 3;
        iVar11 = (-0x401 - (uint)(byte)((byte)*puVar2 >> 2)) +
                 (uint) * (byte *)((int)puVar2 + 1) * -4;
        *pbVar1 = pbVar1[iVar11];
        pbVar1[1] = pbVar1[iVar11 + 1];
        pbVar1[2] = pbVar1[iVar11 + 2];
    LAB_00029a34:
        while (true) {
            unaff_r9 = (ushort *)((int)puVar12 + 1);
            bVar3 = (byte)*puVar12;
            uVar10 = (uint)bVar3;
            uVar7 = (byte)puVar12[-1] & 3;
            puVar13 = unaff_r9;
            puVar2 = puVar12;
            pbVar8 = pbVar9;
            if (((byte)puVar12[-1] & 3) == 0)
                break;
        LAB_00029ba8:
            *pbVar9 = bVar3;
            if (uVar7 == 1) {
                pbVar8 = pbVar9 + 1;
            } else {
                if (uVar7 != 3) {
                    unaff_r9 = puVar12 + 1;
                    pbVar8 = pbVar9 + 2;
                } else {
                    unaff_r9 = (ushort *)((int)puVar12 + 3);
                    pbVar8 = pbVar9 + 3;
                }
                pbVar9[1] = *(byte *)((int)puVar12 + 1);
                if (uVar7 == 3) {
                    pbVar9[2] = (byte)puVar12[1];
                }
            }
            uVar10 = (uint)(byte)*unaff_r9;
            puVar13 = (ushort *)((int)unaff_r9 + 1);
            if (0x3f < uVar10)
                goto LAB_00029a5c;
        LAB_00029bec:
            if (uVar10 < 0x20) {
                if (0xf < uVar10) {
                    uVar7 = uVar10 & 7;
                    if (uVar7 == 0) {
                        iVar11 = 0;
                        bVar3 = (byte)*puVar13;
                        while (bVar3 == 0) {
                            puVar13 = (ushort *)((int)puVar13 + 1);
                            iVar11 = iVar11 + 0xff;
                            bVar3 = *(byte *)puVar13;
                        }
                        puVar13 = (ushort *)((int)puVar13 + 1);
                        uVar7 = iVar11 + bVar3 + 7;
                    }
                    puVar12 = puVar13 + 1;
                    if (pbVar8 == pbVar8 + -((uVar10 & 8) * 0x800 +
                                             (uint)(*puVar13 >> 2))) {
                        *param_4 = (int)pbVar8 - (int)param_3;
                        if ((ushort *)((int)param_1 + param_2) == puVar12) {
                            return 0;
                        }
                        if ((ushort *)((int)param_1 + param_2) <= puVar12) {
                            return 0xfffffffc;
                        }
                        return 0xfffffff8;
                    }
                    pbVar9 = pbVar8 +
                             -((uVar10 & 8) * 0x800 + (uint)(*puVar13 >> 2)) +
                             -0x4000;
                    goto LAB_00029c34;
                }
                puVar12 = (ushort *)((int)puVar13 + 1);
                iVar11 = ~(uVar10 >> 2) + (uint)(byte)*puVar13 * -4;
                pbVar9 = pbVar8 + 2;
                *pbVar8 = pbVar8[iVar11];
                pbVar8[1] = pbVar8[iVar11 + 1];
            } else {
                uVar7 = uVar10 & 0x1f;
                if (uVar7 == 0) {
                    iVar11 = 0;
                    bVar3 = (byte)*puVar13;
                    while (bVar3 == 0) {
                        puVar13 = (ushort *)((int)puVar13 + 1);
                        iVar11 = iVar11 + 0xff;
                        bVar3 = *(byte *)puVar13;
                    }
                    puVar13 = (ushort *)((int)puVar13 + 1);
                    uVar7 = iVar11 + bVar3 + 0x1f;
                }
                puVar12 = puVar13 + 1;
                pbVar9 = pbVar8 + ~(uint)(*puVar13 >> 2);
            LAB_00029c34:
                if ((uVar7 < 6) || ((int)pbVar8 - (int)pbVar9 < 4))
                    goto LAB_00029a7c;
                pbVar4 = pbVar9 + 4;
                uVar10 = uVar7 - 6 >> 2;
                *(undefined4 *)pbVar8 = *(undefined4 *)pbVar9;
                pbVar9 = pbVar4;
                pbVar1 = pbVar8 + 4;
                do {
                    pbVar14 = pbVar1 + 4;
                    *(undefined4 *)pbVar1 = *(undefined4 *)pbVar9;
                    pbVar9 = pbVar9 + 4;
                    pbVar1 = pbVar14;
                } while (pbVar8 + (uVar10 + 2) * 4 != pbVar14);
                iVar11 = (uVar10 + 1) * 4;
                iVar15 = uVar7 + uVar10 * -4 + -6;
                pbVar9 = pbVar8 + 4 + iVar11;
                if (iVar15 != 0) {
                    pbVar1 = pbVar9 + -1;
                    pbVar8 = pbVar4 + iVar11;
                    do {
                        pbVar14 = pbVar8 + 1;
                        pbVar1 = pbVar1 + 1;
                        *pbVar1 = *pbVar8;
                        pbVar8 = pbVar14;
                    } while (pbVar14 != pbVar4 + iVar11 + iVar15);
                    pbVar9 = pbVar9 + iVar15;
                }
            }
        }
    joined_r0x00029abc:
        if (0xf < uVar10) {
        LAB_00029a54:
            if (uVar10 < 0x40)
                goto LAB_00029bec;
        LAB_00029a5c:
            puVar12 = (ushort *)((int)puVar13 + 1);
            uVar7 = (uVar10 >> 4) - 3;
            pbVar9 = pbVar8 + ~((uVar10 << 0x1c) >> 0x1e) +
                     (uint)(byte)*puVar13 * -4;
        LAB_00029a7c:
            *pbVar8 = *pbVar9;
            pbVar4 = pbVar8 + 1;
            *pbVar4 = pbVar9[1];
            pbVar1 = pbVar9 + 2;
            do {
                pbVar14 = pbVar1 + 1;
                pbVar4 = pbVar4 + 1;
                *pbVar4 = *pbVar1;
                pbVar1 = pbVar14;
            } while (pbVar14 != pbVar9 + 2 + uVar7);
            pbVar9 = pbVar8 + uVar7 + 2;
            goto LAB_00029a34;
        }
        if (uVar10 == 0) {
            iVar11 = 0;
            bVar3 = *(byte *)((int)puVar2 + 1);
            while (bVar3 == 0) {
                puVar13 = (ushort *)((int)puVar13 + 1);
                iVar11 = iVar11 + 0xff;
                bVar3 = *(byte *)puVar13;
            }
            puVar13 = (ushort *)((int)puVar13 + 1);
            uVar10 = iVar11 + bVar3 + 0xf;
        }
        uVar7 = uVar10 - 1;
        puVar2 = puVar13 + 2;
        uVar5 = *(undefined4 *)puVar13;
        if (uVar7 == 0) {
            puVar13 = (ushort *)((int)puVar13 + 5);
        }
        pbVar1 = pbVar8 + 4;
        *(undefined4 *)pbVar8 = uVar5;
        if (uVar7 != 0) {
            if (uVar7 < 4) {
                pbVar8 = pbVar8 + 3;
                puVar12 = puVar2;
                do {
                    puVar6 = (ushort *)((int)puVar12 + 1);
                    pbVar8 = pbVar8 + 1;
                    *pbVar8 = (byte)*puVar12;
                    puVar12 = puVar6;
                } while (puVar6 != (ushort *)((int)puVar13 + uVar10 + 3));
                puVar13 = (ushort *)((int)puVar2 + uVar10);
                pbVar1 = pbVar1 + uVar7;
                puVar2 = (ushort *)((int)puVar2 + uVar7);
            } else {
                uVar10 = uVar10 - 5 >> 2;
                puVar13 = puVar2;
                pbVar9 = pbVar1;
                do {
                    pbVar4 = pbVar9 + 4;
                    *(undefined4 *)pbVar9 = *(undefined4 *)puVar13;
                    puVar13 = puVar13 + 2;
                    pbVar9 = pbVar4;
                } while (pbVar4 != pbVar8 + (uVar10 + 2) * 4);
                iVar11 = uVar7 + uVar10 * -4 + -4;
                puVar2 = puVar2 + (uVar10 + 1) * 2;
                pbVar1 = pbVar1 + (uVar10 + 1) * 4;
                if (iVar11 == 0) {
                    puVar13 = (ushort *)((int)puVar2 + 1);
                } else {
                    puVar12 = (ushort *)((int)puVar2 + iVar11);
                    *pbVar1 = (byte)*puVar2;
                    puVar13 = puVar2;
                    pbVar8 = pbVar1;
                    while (puVar2 = (ushort *)((int)puVar13 + 1),
                           puVar2 != puVar12) {
                        pbVar8 = pbVar8 + 1;
                        *pbVar8 = *(byte *)puVar2;
                        puVar13 = puVar2;
                    }
                    pbVar1 = pbVar1 + iVar11;
                    puVar13 = puVar13 + 1;
                }
            }
        }
    } while (true);
}

undefined4 lzo1y_decompress_safe(ushort *param_1, int param_2, byte *param_3,
                                 int *param_4)

{
    ushort uVar1;
    ushort *puVar2;
    byte *pbVar3;
    ushort *puVar4;
    ushort *puVar5;
    byte *pbVar6;
    ushort *puVar7;
    uint uVar8;
    int iVar9;
    byte *pbVar10;
    byte *pbVar11;
    uint uVar12;
    ushort *puVar13;
    byte *pbVar14;
    int iVar15;
    byte *pbVar16;

    puVar5 = (ushort *)((int)param_1 + param_2);
    pbVar11 = (byte *)*param_4;
    iVar15 = 0;
    *param_4 = 0;
    if (puVar5 != param_1) {
        uVar12 = (uint)(byte)*param_1;
        pbVar6 = param_3;
        if (uVar12 < 0x12)
            goto LAB_00029f98;
        pbVar10 = (byte *)(uVar12 - 0x11);
        puVar7 = (ushort *)((int)param_1 + 1);
        if ((int)pbVar10 < 4)
            goto LAB_00029ea4;
        if (pbVar11 < pbVar10) {
        LAB_0002a2cc:
            *param_4 = iVar15;
            return 0xfffffffb;
        }
        if (uVar12 - 0xe <= param_2 - 1U) {
            pbVar6 = param_3 + -1;
            puVar13 = puVar7;
            do {
                puVar2 = (ushort *)((int)puVar13 + 1);
                pbVar6 = pbVar6 + 1;
                *pbVar6 = (byte)*puVar13;
                puVar13 = puVar2;
            } while (puVar2 != (ushort *)((int)param_1 + (uVar12 - 0x10)));
            puVar7 = (ushort *)((int)puVar7 + (int)pbVar10);
            pbVar16 = param_3 + (int)pbVar10;
            do {
                uVar12 = (uint)(byte)*puVar7;
                if (0xf < uVar12) {
                    puVar13 = (ushort *)((int)puVar7 + 1);
                    goto LAB_00029fb4;
                }
                param_1 = puVar7 + 1;
                pbVar10 = pbVar16 +
                          (-0x401 - (uint)(byte)((byte)*puVar7 >> 2)) +
                          (uint) * (byte *)((int)puVar7 + 1) * -4;
                if (pbVar10 < param_3 || pbVar16 <= pbVar10) {
                LAB_0002a2d8:
                    *param_4 = (int)pbVar16 - (int)param_3;
                    return 0xfffffffa;
                }
                pbVar6 = pbVar16;
                if (param_3 + ((int)pbVar11 - (int)pbVar16) < (byte *)0x3) {
                LAB_0002a2c8:
                    iVar15 = (int)pbVar6 - (int)param_3;
                    goto LAB_0002a2cc;
                }
                pbVar6 = pbVar16 + 3;
                *pbVar16 = *pbVar10;
                pbVar16[1] = pbVar10[1];
                pbVar16[2] = pbVar10[2];
            LAB_00029e8c:
                while (pbVar10 = (byte *)((byte)param_1[-1] & 3),
                       puVar7 = param_1, ((byte)param_1[-1] & 3) != 0) {
                LAB_00029ea4:
                    if (param_3 + ((int)pbVar11 - (int)pbVar6) < pbVar10) {
                        iVar15 = (int)pbVar6 - (int)param_3;
                        goto LAB_0002a2cc;
                    }
                    pbVar16 = pbVar10 + 3;
                    if ((byte *)((int)puVar5 - (int)puVar7) < pbVar16) {
                        iVar15 = (int)pbVar6 - (int)param_3;
                        goto LAB_0002a1b8;
                    }
                    uVar1 = *puVar7;
                    if (pbVar10 == (byte *)0x1) {
                        puVar7 = (ushort *)((int)puVar7 + 1);
                        pbVar16 = pbVar6 + 1;
                    }
                    *pbVar6 = (byte)uVar1;
                    if (pbVar10 != (byte *)0x1) {
                        pbVar14 = (byte *)((int)puVar7 + 1);
                        if (pbVar10 != (byte *)0x3) {
                            puVar7 = puVar7 + 1;
                            pbVar16 = pbVar6 + 2;
                        } else {
                            pbVar16 = pbVar6 + 3;
                        }
                        pbVar6[1] = *pbVar14;
                        if (pbVar10 == (byte *)0x3) {
                            puVar13 = puVar7 + 1;
                            puVar7 = (ushort *)((int)puVar7 + 3);
                            pbVar6[2] = (byte)*puVar13;
                        }
                    }
                    uVar12 = (uint)(byte)*puVar7;
                    puVar13 = (ushort *)((int)puVar7 + 1);
                    if (0x3f < uVar12)
                        goto LAB_00029f14;
                LAB_00029fbc:
                    pbVar6 = pbVar16;
                    if (uVar12 < 0x20) {
                        if (0xf < uVar12) {
                            uVar8 = uVar12 & 7;
                            puVar7 = puVar13;
                            if (uVar8 == 0) {
                                while (true) {
                                    puVar13 = (ushort *)((int)puVar7 + 1);
                                    if ((byte)*puVar7 != 0)
                                        break;
                                    if (uVar8 == 0xfffffe01)
                                        goto LAB_0002a2c8;
                                    uVar8 = uVar8 + 0xff;
                                    puVar7 = puVar13;
                                    if (puVar5 == puVar13)
                                        goto LAB_0002a1b4;
                                }
                                uVar8 = uVar8 + (byte)*puVar7 + 7;
                                if ((uint)((int)puVar5 - (int)puVar13) < 2)
                                    goto LAB_0002a1b4;
                            }
                            param_1 = puVar13 + 1;
                            if (pbVar16 == pbVar16 + -((uVar12 & 8) * 0x800 +
                                                       (uint)(*puVar13 >> 2))) {
                                *param_4 = (int)pbVar16 - (int)param_3;
                                if (puVar5 == param_1) {
                                    return 0;
                                }
                                if (puVar5 <= param_1) {
                                    return 0xfffffffc;
                                }
                                return 0xfffffff8;
                            }
                            pbVar10 = pbVar16 +
                                      -((uVar12 & 8) * 0x800 +
                                        (uint)(*puVar13 >> 2)) +
                                      -0x4000;
                            goto LAB_00029fdc;
                        }
                        param_1 = (ushort *)((int)puVar13 + 1);
                        pbVar10 = pbVar16 + ~(uVar12 >> 2) +
                                  (uint)(byte)*puVar13 * -4;
                        if (pbVar10 < param_3 || pbVar16 <= pbVar10)
                            goto LAB_0002a2d8;
                        if (param_3 + ((int)pbVar11 - (int)pbVar16) <
                            (byte *)0x2)
                            goto LAB_0002a2c8;
                        pbVar6 = pbVar16 + 2;
                        *pbVar16 = *pbVar10;
                        pbVar16[1] = pbVar10[1];
                    } else {
                        uVar8 = uVar12 & 0x1f;
                        puVar7 = puVar13;
                        if (uVar8 == 0) {
                            while (true) {
                                puVar13 = (ushort *)((int)puVar7 + 1);
                                if ((byte)*puVar7 != 0)
                                    break;
                                if (uVar8 == 0xfffffe01)
                                    goto LAB_0002a2c8;
                                uVar8 = uVar8 + 0xff;
                                puVar7 = puVar13;
                                if (puVar5 == puVar13)
                                    goto LAB_0002a1b4;
                            }
                            uVar8 = uVar8 + (byte)*puVar7 + 0x1f;
                            if ((uint)((int)puVar5 - (int)puVar13) < 2)
                                goto LAB_0002a1b4;
                        }
                        param_1 = puVar13 + 1;
                        pbVar10 = pbVar16 + ~(uint)(*puVar13 >> 2);
                    LAB_00029fdc:
                        if (pbVar10 < param_3 || pbVar16 <= pbVar10)
                            goto LAB_0002a2d8;
                        if (param_3 + ((int)pbVar11 - (int)pbVar16) <
                            (byte *)(uVar8 + 2))
                            goto LAB_0002a2c8;
                        if ((uVar8 < 6) || ((int)pbVar16 - (int)pbVar10 < 4))
                            goto LAB_00029f60;
                        pbVar14 = pbVar10 + 4;
                        uVar12 = uVar8 - 6 >> 2;
                        *(undefined4 *)pbVar16 = *(undefined4 *)pbVar10;
                        pbVar6 = pbVar16 + 4;
                        pbVar10 = pbVar14;
                        do {
                            pbVar3 = pbVar6 + 4;
                            *(undefined4 *)pbVar6 = *(undefined4 *)pbVar10;
                            pbVar6 = pbVar3;
                            pbVar10 = pbVar10 + 4;
                        } while (pbVar3 != pbVar16 + (uVar12 + 2) * 4);
                        iVar15 = (uVar12 + 1) * 4;
                        iVar9 = uVar8 + uVar12 * -4 + -6;
                        pbVar6 = pbVar16 + 4 + iVar15;
                        if (iVar9 != 0) {
                            pbVar16 = pbVar6 + -1;
                            pbVar10 = pbVar14 + iVar15;
                            do {
                                pbVar3 = pbVar10 + 1;
                                pbVar16 = pbVar16 + 1;
                                *pbVar16 = *pbVar10;
                                pbVar10 = pbVar3;
                            } while (pbVar3 != pbVar14 + iVar15 + iVar9);
                            pbVar6 = pbVar6 + iVar9;
                        }
                    }
                }
            LAB_00029f98:
                pbVar16 = pbVar6;
                if ((uint)((int)puVar5 - (int)param_1) < 3)
                    goto LAB_0002a1b4;
                uVar12 = (uint)(byte)*param_1;
                puVar13 = (ushort *)((int)param_1 + 1);
                if (0xf < uVar12) {
                LAB_00029fb4:
                    if (uVar12 < 0x40)
                        goto LAB_00029fbc;
                LAB_00029f14:
                    param_1 = (ushort *)((int)puVar13 + 1);
                    uVar8 = (uVar12 >> 4) - 3;
                    pbVar10 = pbVar16 + ~((uVar12 << 0x1c) >> 0x1e) +
                              (uint)(byte)*puVar13 * -4;
                    if (pbVar10 < param_3 || pbVar16 <= pbVar10)
                        goto LAB_0002a2d8;
                    pbVar6 = pbVar16;
                    if (param_3 + ((int)pbVar11 - (int)pbVar16) <
                        (byte *)((uVar12 >> 4) - 1))
                        goto LAB_0002a2c8;
                LAB_00029f60:
                    *pbVar16 = *pbVar10;
                    pbVar14 = pbVar16 + 1;
                    *pbVar14 = pbVar10[1];
                    pbVar6 = pbVar10 + 2;
                    do {
                        pbVar3 = pbVar6 + 1;
                        pbVar14 = pbVar14 + 1;
                        *pbVar14 = *pbVar6;
                        pbVar6 = pbVar3;
                    } while (pbVar3 != pbVar10 + 2 + uVar8);
                    pbVar6 = pbVar16 + uVar8 + 2;
                    goto LAB_00029e8c;
                }
                if (uVar12 == 0) {
                    iVar15 = 0;
                    puVar7 = puVar13;
                    while (true) {
                        puVar13 = (ushort *)((int)puVar7 + 1);
                        if ((byte)*puVar7 != 0)
                            break;
                        iVar15 = iVar15 + 0xff;
                        if (((ushort *)((int)param_1 + 0x1010101) == puVar13) ||
                            (puVar7 = puVar13, puVar5 == puVar13))
                            goto LAB_0002a1b4;
                    }
                    uVar12 = iVar15 + (byte)*puVar7 + 0xf;
                }
                if (param_3 + ((int)pbVar11 - (int)pbVar6) <
                    (byte *)(uVar12 + 3))
                    goto LAB_0002a2c8;
                if ((uint)((int)puVar5 - (int)puVar13) < uVar12 + 6) {
                LAB_0002a1b4:
                    iVar15 = (int)pbVar16 - (int)param_3;
                    break;
                }
                uVar8 = uVar12 - 1;
                puVar7 = puVar13 + 2;
                pbVar16 = pbVar6 + 4;
                *(undefined4 *)pbVar6 = *(undefined4 *)puVar13;
                if (uVar8 != 0) {
                    if (uVar8 < 4) {
                        pbVar6 = pbVar6 + 3;
                        puVar2 = puVar7;
                        do {
                            puVar4 = (ushort *)((int)puVar2 + 1);
                            pbVar6 = pbVar6 + 1;
                            *pbVar6 = (byte)*puVar2;
                            puVar2 = puVar4;
                        } while ((ushort *)((int)puVar13 + (int)(uVar12 + 3)) !=
                                 puVar4);
                        pbVar16 = pbVar16 + uVar8;
                        puVar7 = (ushort *)((int)puVar7 + uVar8);
                    } else {
                        uVar12 = uVar12 - 5 >> 2;
                        puVar13 = puVar7;
                        pbVar10 = pbVar16;
                        do {
                            pbVar14 = pbVar10 + 4;
                            *(undefined4 *)pbVar10 = *(undefined4 *)puVar13;
                            puVar13 = puVar13 + 2;
                            pbVar10 = pbVar14;
                        } while (pbVar6 + (uVar12 + 2) * 4 != pbVar14);
                        iVar15 = uVar8 + uVar12 * -4 + -4;
                        pbVar16 = pbVar16 + (uVar12 + 1) * 4;
                        puVar7 = puVar7 + (uVar12 + 1) * 2;
                        if (iVar15 != 0) {
                            pbVar6 = pbVar16 + -1;
                            puVar2 = (ushort *)((int)puVar7 + iVar15);
                            puVar13 = puVar7;
                            do {
                                puVar7 = (ushort *)((int)puVar13 + 1);
                                pbVar6 = pbVar6 + 1;
                                *pbVar6 = (byte)*puVar13;
                                puVar13 = puVar7;
                            } while (puVar7 != puVar2);
                            pbVar16 = pbVar16 + iVar15;
                        }
                    }
                }
            } while (true);
        }
    }
LAB_0002a1b8:
    *param_4 = iVar15;
    return 0xfffffffc;
}

undefined4 lzo1y_decompress_dict_safe(byte *param_1, int param_2, byte *param_3,
                                      undefined4 *param_4, undefined4 param_5,
                                      byte *param_6, byte *param_7)

{
    byte bVar1;
    byte *pbVar2;
    byte *pbVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    int iVar7;
    byte *pbVar8;
    byte *pbVar9;
    byte *pbVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    int iVar14;
    byte *pbVar15;

    pbVar10 = param_1 + param_2;
    pbVar15 = (byte *)*param_4;
    if (param_6 == (byte *)0x0) {
        param_7 = param_6;
        param_6 = (byte *)0x0;
    } else {
        if ((byte *)0xbfff < param_7) {
            pbVar5 = param_7 + -0xbfff;
            param_7 = (byte *)0xbfff;
            param_6 = param_6 + (int)pbVar5;
        }
        param_6 = param_6 + (int)param_7;
    }
    pbVar5 = (byte *)0x0;
    *param_4 = 0;
    if (pbVar10 != param_1) {
        uVar12 = (uint)*param_1;
        pbVar6 = param_1;
        pbVar2 = param_3;
        if (uVar12 < 0x12)
            goto LAB_0002a474;
        pbVar9 = (byte *)(uVar12 - 0x11);
        pbVar6 = param_1 + 1;
        if ((int)pbVar9 < 4)
            goto LAB_0002a5ec;
        if (pbVar15 < pbVar9) {
        LAB_0002a8ac:
            *param_4 = pbVar5;
            return 0xfffffffb;
        }
        if (uVar12 - 0xe <= param_2 - 1U) {
            pbVar2 = param_3 + -1;
            pbVar5 = pbVar6;
            do {
                pbVar3 = pbVar5 + 1;
                pbVar2 = pbVar2 + 1;
                *pbVar2 = *pbVar5;
                pbVar5 = pbVar3;
            } while (pbVar3 != param_1 + (uVar12 - 0x10));
            pbVar6 = pbVar6 + (int)pbVar9;
            pbVar9 = param_3 + (int)pbVar9;
        LAB_0002a3b8:
            uVar12 = (uint)*pbVar6;
            uVar13 = (uint)pbVar6[1];
            pbVar5 = pbVar9 + -(int)param_3;
            if (0xf < uVar12) {
                pbVar3 = pbVar6 + 1;
                goto LAB_0002a580;
            }
            iVar7 = uVar13 * 4 + (uint)(*pbVar6 >> 2);
            pbVar6 = pbVar6 + 2;
            if ((byte *)0x2 < param_3 + ((int)pbVar15 - (int)pbVar9)) {
                if (pbVar5 < (byte *)(iVar7 + 0x401)) {
                    pbVar2 = (byte *)(iVar7 + 0x401) + -(int)pbVar5;
                    if (param_7 < pbVar2) {
                    LAB_0002a928:
                        *param_4 = pbVar5;
                        return 0xfffffffa;
                    }
                    pbVar5 = param_6 + -(int)pbVar2;
                    if (pbVar2 < (byte *)0x3) {
                        memcpy(pbVar9, pbVar5, (size_t)pbVar2);
                        pbVar3 = pbVar9 + (int)(pbVar2 + -1);
                        pbVar5 = param_3;
                        do {
                            pbVar8 = pbVar5 + 1;
                            pbVar3 = pbVar3 + 1;
                            *pbVar3 = *pbVar5;
                            pbVar5 = pbVar8;
                        } while (pbVar8 != param_3 + (3 - (int)pbVar2));
                    } else {
                        bVar1 = pbVar5[2];
                        *(undefined2 *)pbVar9 = *(undefined2 *)pbVar5;
                        pbVar9[2] = bVar1;
                    }
                    pbVar2 = pbVar9 + 3;
                } else {
                    pbVar2 = pbVar9 + 3;
                    bVar1 = pbVar9[-0x3ff - iVar7];
                    *(undefined2 *)pbVar9 =
                        *(undefined2 *)(pbVar9 + (-0x401 - iVar7));
                    pbVar9[2] = bVar1;
                }
            LAB_0002a454:
                pbVar9 = (byte *)(pbVar6[-2] & 3);
                param_1 = pbVar6;
                if ((pbVar6[-2] & 3) == 0) {
                LAB_0002a474:
                    if ((uint)((int)pbVar10 - (int)pbVar6) < 3)
                        goto LAB_0002a6f4;
                    uVar12 = (uint)*pbVar6;
                    pbVar3 = pbVar6 + 1;
                    if (uVar12 < 0x10)
                        goto code_r0x0002a490;
                    uVar13 = (uint)pbVar6[1];
                    pbVar5 = pbVar2 + -(int)param_3;
                    pbVar9 = pbVar2;
                LAB_0002a580:
                    if (uVar12 < 0x40)
                        goto LAB_0002a660;
                LAB_0002a588:
                    pbVar2 =
                        (byte *)(((uVar12 << 0x1c) >> 0x1e) + 1 + uVar13 * 4);
                    pbVar6 = pbVar3 + 1;
                    uVar11 = (uVar12 >> 4) - 3;
                } else {
                LAB_0002a5ec:
                    if (param_3 + ((int)pbVar15 - (int)pbVar2) < pbVar9)
                        goto LAB_0002a8a8;
                    if (pbVar10 + -(int)pbVar6 < pbVar9 + 3)
                        goto LAB_0002a6f4;
                    if (pbVar9 == (byte *)0x1) {
                        param_1 = pbVar6 + 1;
                    }
                    *pbVar2 = *pbVar6;
                    if (pbVar9 == (byte *)0x1) {
                        pbVar9 = pbVar2 + 1;
                    } else {
                        if (pbVar9 != (byte *)0x3) {
                            param_1 = pbVar6 + 2;
                        } else {
                            param_1 = pbVar6 + 3;
                        }
                        pbVar2[1] = pbVar6[1];
                        if (pbVar9 != (byte *)0x3) {
                            pbVar9 = pbVar2 + 2;
                        } else {
                            pbVar2[2] = pbVar6[2];
                            pbVar9 = pbVar2 + 3;
                        }
                    }
                    uVar12 = (uint)*param_1;
                    pbVar3 = param_1 + 1;
                    uVar13 = (uint)param_1[1];
                    pbVar5 = pbVar9 + -(int)param_3;
                    if (0x3f < uVar12)
                        goto LAB_0002a588;
                LAB_0002a660:
                    if (uVar12 < 0x20) {
                        if (uVar12 < 0x10) {
                            uVar12 = uVar13 * 4 + (uVar12 >> 2);
                            pbVar6 = pbVar3 + 1;
                            pbVar3 = (byte *)(uVar12 + 1);
                            if (param_3 + ((int)pbVar15 - (int)pbVar9) <
                                (byte *)0x2)
                                goto LAB_0002a8ac;
                            if (pbVar5 < pbVar3) {
                                pbVar3 = pbVar3 + -(int)pbVar5;
                                if (param_7 < pbVar3)
                                    goto LAB_0002a928;
                                pbVar5 = param_6 + -(int)pbVar3;
                                if (pbVar3 < (byte *)0x2) {
                                    memcpy(pbVar9, pbVar5, (size_t)pbVar3);
                                    pbVar9 = pbVar9 + (int)pbVar3;
                                    pbVar2 = pbVar9 + 1;
                                    *pbVar9 = *param_3;
                                    if (pbVar3 == (byte *)0x0) {
                                        pbVar2 = pbVar9 + 2;
                                        pbVar9[1] = param_3[1];
                                    }
                                    goto LAB_0002a454;
                                }
                            } else {
                                uVar12 = ~uVar12;
                                pbVar5 = pbVar9 + uVar12;
                                if (pbVar3 == (byte *)0x1) {
                                    pbVar2 = pbVar9 + 2;
                                    *pbVar9 = pbVar9[uVar12];
                                    pbVar9[1] = pbVar5[1];
                                    goto LAB_0002a454;
                                }
                            }
                            pbVar2 = pbVar9 + 2;
                            *(undefined2 *)pbVar9 = *(undefined2 *)pbVar5;
                            goto LAB_0002a454;
                        }
                        uVar11 = uVar12 & 7;
                        pbVar6 = pbVar3;
                        if (uVar11 == 0) {
                            while (pbVar3 = pbVar6 + 1, uVar13 == 0) {
                                if (uVar11 == 0xfffffe01)
                                    goto LAB_0002a8ac;
                                if (pbVar3 == pbVar10)
                                    goto LAB_0002a6f8;
                                pbVar6 = pbVar3;
                                uVar11 = uVar11 + 0xff;
                                uVar13 = (uint)*pbVar3;
                            }
                            uVar11 = uVar11 + uVar13 + 7;
                            if ((uint)((int)pbVar10 - (int)pbVar3) < 2)
                                goto LAB_0002a6f8;
                            uVar13 = (uint)pbVar6[1];
                        }
                        pbVar6 = pbVar3 + 2;
                        iVar7 = (uVar13 >> 2) + (uint)pbVar3[1] * 0x40 +
                                (uVar12 & 8) * 0x800;
                        if (iVar7 == 0) {
                            *param_4 = pbVar5;
                            if (pbVar10 == pbVar6) {
                                return 0;
                            }
                            if (pbVar10 <= pbVar6) {
                                return 0xfffffffc;
                            }
                            return 0xfffffff8;
                        }
                        pbVar2 = (byte *)(iVar7 + 0x4000);
                    } else {
                        uVar11 = uVar12 & 0x1f;
                        pbVar6 = pbVar3;
                        if (uVar11 == 0) {
                            while (pbVar3 = pbVar6 + 1, uVar13 == 0) {
                                if (uVar11 == 0xfffffe01)
                                    goto LAB_0002a8ac;
                                if (pbVar3 == pbVar10)
                                    goto LAB_0002a6f8;
                                pbVar6 = pbVar3;
                                uVar11 = uVar11 + 0xff;
                                uVar13 = (uint)*pbVar3;
                            }
                            uVar11 = uVar11 + uVar13 + 0x1f;
                            if ((uint)((int)pbVar10 - (int)pbVar3) < 2)
                                goto LAB_0002a6f8;
                            uVar13 = (uint)pbVar6[1];
                        }
                        pbVar6 = pbVar3 + 2;
                        pbVar2 = (byte *)((uVar13 >> 2) + 1 +
                                          (uint)pbVar3[1] * 0x40);
                    }
                }
                pbVar3 = (byte *)(uVar11 + 2);
                if (param_3 + ((int)pbVar15 - (int)pbVar9) < pbVar3)
                    goto LAB_0002a8ac;
                if (pbVar5 < pbVar2) {
                    pbVar2 = pbVar2 + -(int)pbVar5;
                    if (param_7 < pbVar2)
                        goto LAB_0002a928;
                    if (pbVar2 < pbVar3) {
                        memcpy(pbVar9, param_6 + -(int)pbVar2, (size_t)pbVar2);
                        pbVar8 = pbVar9 + (int)(pbVar2 + -1);
                        pbVar5 = param_3;
                        do {
                            pbVar4 = pbVar5 + 1;
                            pbVar8 = pbVar8 + 1;
                            *pbVar8 = *pbVar5;
                            pbVar5 = pbVar4;
                        } while (pbVar4 !=
                                 param_3 + ((int)pbVar3 - (int)pbVar2));
                        goto LAB_0002a5dc;
                    }
                    memcpy(pbVar9, param_6 + -(int)pbVar2, (size_t)pbVar3);
                    pbVar2 = pbVar9 + (int)pbVar3;
                } else {
                    pbVar5 = pbVar9 + -(int)pbVar2;
                    if (pbVar2 < pbVar3) {
                        pbVar8 = pbVar9 + -1;
                        pbVar2 = pbVar5;
                        do {
                            pbVar4 = pbVar2 + 1;
                            pbVar8 = pbVar8 + 1;
                            *pbVar8 = *pbVar2;
                            pbVar2 = pbVar4;
                        } while (pbVar4 != pbVar5 + (int)pbVar3);
                    LAB_0002a5dc:
                        pbVar2 = pbVar9 + (int)pbVar3;
                    } else {
                        pbVar2 = pbVar9 + (int)pbVar3;
                        memcpy(pbVar9, pbVar5, (size_t)pbVar3);
                    }
                }
                goto LAB_0002a454;
            }
            goto LAB_0002a8ac;
        }
    }
LAB_0002a6f8:
    *param_4 = pbVar5;
    return 0xfffffffc;
code_r0x0002a490:
    if (uVar12 == 0) {
        iVar7 = 0;
        pbVar5 = pbVar3;
        while (true) {
            pbVar3 = pbVar5 + 1;
            if (*pbVar5 != 0)
                break;
            iVar7 = iVar7 + 0xff;
            if ((pbVar6 + 0x1010101 == pbVar3) ||
                (pbVar5 = pbVar3, pbVar10 == pbVar3))
                goto LAB_0002a6f4;
        }
        uVar12 = iVar7 + *pbVar5 + 0xf;
    }
    if (param_3 + ((int)pbVar15 - (int)pbVar2) < (byte *)(uVar12 + 3)) {
    LAB_0002a8a8:
        pbVar5 = pbVar2 + -(int)param_3;
        goto LAB_0002a8ac;
    }
    if ((uint)((int)pbVar10 - (int)pbVar3) < uVar12 + 6) {
    LAB_0002a6f4:
        pbVar5 = pbVar2 + -(int)param_3;
        goto LAB_0002a6f8;
    }
    uVar13 = uVar12 - 1;
    pbVar6 = pbVar3 + 4;
    pbVar9 = pbVar2 + 4;
    *(undefined4 *)pbVar2 = *(undefined4 *)pbVar3;
    if (uVar13 != 0) {
        if (uVar13 < 4) {
            pbVar2 = pbVar2 + 3;
            pbVar5 = pbVar6;
            do {
                pbVar8 = pbVar5 + 1;
                pbVar2 = pbVar2 + 1;
                *pbVar2 = *pbVar5;
                pbVar5 = pbVar8;
            } while (pbVar8 != pbVar3 + (int)(uVar12 + 3));
            pbVar9 = pbVar9 + uVar13;
            pbVar6 = pbVar6 + uVar13;
        } else {
            uVar12 = uVar12 - 5 >> 2;
            pbVar5 = pbVar9;
            pbVar3 = pbVar6;
            do {
                pbVar8 = pbVar5 + 4;
                *(undefined4 *)pbVar5 = *(undefined4 *)pbVar3;
                pbVar5 = pbVar8;
                pbVar3 = pbVar3 + 4;
            } while (pbVar8 != pbVar2 + (uVar12 + 2) * 4);
            iVar7 = (uVar12 + 1) * 4;
            iVar14 = uVar13 + uVar12 * -4 + -4;
            pbVar9 = pbVar9 + iVar7;
            pbVar6 = pbVar6 + iVar7;
            if (iVar14 != 0) {
                pbVar3 = pbVar9 + -1;
                pbVar2 = pbVar6 + iVar14;
                pbVar5 = pbVar6;
                do {
                    pbVar6 = pbVar5 + 1;
                    pbVar3 = pbVar3 + 1;
                    *pbVar3 = *pbVar5;
                    pbVar5 = pbVar6;
                } while (pbVar6 != pbVar2);
                pbVar9 = pbVar9 + iVar14;
            }
        }
    }
    goto LAB_0002a3b8;
}

uint lzo1y_optimize(byte *param_1, int param_2, byte *param_3, int *param_4)

{
    int iVar1;
    byte *pbVar2;
    byte *pbVar3;
    uint uVar4;
    byte *pbVar5;
    byte *pbVar6;
    size_t __n;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    byte *pbVar10;
    byte *pbVar11;
    byte *pbVar12;
    int iVar13;
    byte *pbVar14;
    byte *pbVar15;
    byte bVar16;
    bool bVar17;
    byte *local_40;

    iVar13 = *param_4;
    *param_4 = 0;
    pbVar15 = param_1 + param_2;
    uVar7 = (uint)*param_1;
    pbVar14 = param_3 + iVar13;
    pbVar2 = param_3;
    if (0x11 < uVar7) {
        uVar9 = uVar7 - 0x11;
        pbVar10 = param_1 + 1;
        __n = 0;
        if (3 < (int)uVar9) {
            param_1 = (byte *)0x0;
        }
        pbVar12 = param_3;
        if (uVar9 != 3 && (int)(uVar7 - 0x14) < 0 == SBORROW4(uVar9, 3))
            goto LAB_0002abd0;
        local_40 = (byte *)0x0;
        goto LAB_0002aa98;
    }
    bVar17 = pbVar14 <= param_3;
    if (param_3 <= pbVar14) {
        bVar17 = pbVar15 <= param_1;
    }
    __n = 0;
    local_40 = (byte *)0x0;
LAB_0002a980:
    pbVar3 = pbVar2;
    if (bVar17) {
    LAB_0002ae00:
        *param_4 = (int)pbVar3 - (int)param_3;
        return 0xfffffff9;
    }
    uVar8 = (uint)*param_1;
    pbVar12 = param_1 + 1;
    uVar7 = (uint)param_1[1];
    pbVar6 = pbVar12;
    if (uVar8 < 0x10) {
        if (uVar8 == 0) {
            iVar13 = 0xf;
            while (uVar7 == 0) {
                pbVar12 = pbVar12 + 1;
                iVar13 = iVar13 + 0xff;
                uVar7 = (uint)*pbVar12;
            }
            uVar8 = uVar7 + iVar13;
            pbVar12 = pbVar12 + 1;
            uVar7 = (uint)*pbVar12;
        }
        __n = uVar8 + 3;
        goto LAB_0002abb4;
    }
LAB_0002a99c:
    do {
        if (uVar8 < 0x40) {
            if (uVar8 < 0x20) {
                uVar9 = uVar8 & 7;
                if (uVar9 == 0) {
                    iVar13 = 7;
                    while (uVar7 == 0) {
                        pbVar6 = pbVar6 + 1;
                        iVar13 = iVar13 + 0xff;
                        uVar7 = (uint)*pbVar6;
                    }
                    uVar9 = uVar7 + iVar13;
                    pbVar6 = pbVar6 + 1;
                    uVar7 = (uint)*pbVar6;
                }
                uVar4 = (uint)pbVar6[1];
                pbVar11 = pbVar6 + 2;
                if (pbVar3 == pbVar3 + -((uVar8 & 8) * 0x800 + (uVar7 >> 2) +
                                         uVar4 * 0x40)) {
                    if (pbVar15 == pbVar11) {
                        uVar4 = 0;
                    }
                    *param_4 = (int)pbVar3 - (int)param_3;
                    if (pbVar15 == pbVar11) {
                        return uVar4;
                    }
                    if (pbVar15 <= pbVar11) {
                        return 0xfffffffc;
                    }
                    return 0xfffffff8;
                }
                pbVar10 = pbVar3 +
                          -((uVar8 & 8) * 0x800 + (uVar7 >> 2) + uVar4 * 0x40) +
                          -0x4000;
            } else {
                uVar9 = uVar8 & 0x1f;
                if (uVar9 == 0) {
                    iVar13 = 0x1f;
                    while (uVar7 == 0) {
                        pbVar6 = pbVar6 + 1;
                        iVar13 = iVar13 + 0xff;
                        uVar7 = (uint)*pbVar6;
                    }
                    uVar9 = uVar7 + iVar13;
                    pbVar6 = pbVar6 + 1;
                    uVar7 = (uint)*pbVar6;
                }
                pbVar11 = pbVar6 + 2;
                pbVar10 = pbVar3 + ~(uVar7 >> 2) + (uint)pbVar6[1] * -0x40;
            }
            if (local_40 == (byte *)0x0) {
            LAB_0002ad98:
                bVar16 = *pbVar10;
                pbVar12 = (byte *)0xffffffff;
            } else {
                bVar16 = pbVar11[-2];
                pbVar12 = (byte *)(bVar16 & 3);
                if (__n == 0 && uVar9 == 1) {
                    if ((bVar16 & 3) != 0) {
                        bVar16 = *pbVar10;
                        pbVar12 = (byte *)0xffffffff;
                        __n = 0;
                        uVar9 = 1;
                        goto LAB_0002ad20;
                    }
                    uVar8 = (uint)*pbVar11;
                    if (0xf < uVar8) {
                        iVar13 = (int)pbVar3 - (int)pbVar10;
                        *local_40 = *local_40 & 0xfc | 3;
                        pbVar11[-3] = *pbVar10;
                        if (iVar13 == 1) {
                            bVar16 = *pbVar10;
                            __n = 3;
                            pbVar11[-2] = bVar16;
                            pbVar11[-1] = bVar16;
                            bVar16 = *pbVar10;
                            uVar9 = 1;
                        } else {
                            uVar9 = 1;
                            pbVar11[-2] = pbVar10[1];
                            __n = 3;
                            pbVar2 = local_40;
                            if (iVar13 == 2) {
                                pbVar2 = (byte *)(uint)*pbVar10;
                            }
                            bVar16 = (byte)pbVar2;
                            if (iVar13 != 2) {
                                bVar16 = pbVar10[2];
                            }
                            pbVar11[-1] = bVar16;
                            bVar16 = *pbVar10;
                        }
                        goto LAB_0002ad20;
                    }
                LAB_0002ae64:
                    if ((uVar8 - 1 < 0xf) &&
                        (iVar13 = uVar8 + __n, iVar13 + 3U < 0x10)) {
                        pbVar12 = pbVar11 + 1;
                        *local_40 = *local_40 & 0xfc;
                        pbVar11[-2] = *pbVar10;
                        if ((int)pbVar3 - (int)pbVar10 == 1) {
                            bVar16 = *pbVar10;
                            pbVar11[-1] = bVar16;
                            *pbVar11 = bVar16;
                        } else {
                            pbVar11[-1] = pbVar10[1];
                            if ((int)pbVar3 - (int)pbVar10 == 2) {
                                bVar16 = *pbVar10;
                            } else {
                                bVar16 = pbVar10[2];
                            }
                            *pbVar11 = bVar16;
                        }
                        param_1 = local_40 + 2;
                        if (__n != 0) {
                            memmove(local_40 + 3, param_1, __n);
                        }
                        __n = iVar13 + 6;
                        local_40[2] = (char)iVar13 + 3;
                        pbVar2 = pbVar3 + 3;
                        *pbVar3 = *pbVar10;
                        pbVar3[1] = pbVar10[1];
                        pbVar3[2] = pbVar10[2];
                        uVar7 = (uint)pbVar11[1];
                        goto LAB_0002abb4;
                    }
                } else {
                    if (3 < __n || uVar9 != 1)
                        goto LAB_0002ad98;
                    if ((bVar16 & 3) == 0) {
                        uVar8 = (uint)*pbVar11;
                        goto LAB_0002ae64;
                    }
                }
                bVar16 = *pbVar10;
                pbVar12 = (byte *)0xffffffff;
                uVar9 = 1;
            }
        LAB_0002ad20:
            *pbVar3 = bVar16;
            pbVar6 = pbVar3 + 1;
            *pbVar6 = pbVar10[1];
            pbVar2 = pbVar10 + 2;
            do {
                pbVar5 = pbVar2 + 1;
                pbVar6 = pbVar6 + 1;
                *pbVar6 = *pbVar2;
                pbVar2 = pbVar5;
            } while (pbVar5 != pbVar10 + 2 + uVar9);
            pbVar2 = pbVar3 + uVar9 + 2;
            goto LAB_0002ad4c;
        }
        iVar13 = ~((uVar8 << 0x1c) >> 0x1e) + uVar7 * -4;
        pbVar11 = pbVar6 + 1;
        uVar9 = (uVar8 >> 4) - 3;
        pbVar10 = pbVar3 + iVar13;
        bVar16 = pbVar3[iVar13];
        if ((local_40 == (byte *)0x0) || (__n < 4 || uVar9 != 1)) {
            pbVar12 = (byte *)0xffffffff;
            goto LAB_0002ad20;
        }
        if ((((pbVar6[-1] & 3) != 0) ||
             (uVar8 = (uint)pbVar6[1], 0xe < uVar8 - 1)) ||
            (iVar1 = uVar8 + __n, 0xf < iVar1 + 3U)) {
            pbVar12 = (byte *)0xffffffff;
            uVar9 = 1;
            goto LAB_0002ad20;
        }
        pbVar6[-1] = bVar16;
        pbVar12 = pbVar6 + 2;
        if (iVar13 == -1) {
            bVar16 = *pbVar10;
            *pbVar6 = bVar16;
            pbVar6[1] = bVar16;
        } else {
            *pbVar6 = pbVar10[1];
            if (iVar13 == -2) {
                bVar16 = *pbVar10;
            } else {
                bVar16 = pbVar10[2];
            }
            pbVar6[1] = bVar16;
        }
        __n = iVar1 + 6;
        *local_40 = (char)iVar1 + 3;
        pbVar2 = pbVar3 + 3;
        *pbVar3 = *pbVar10;
        pbVar3[1] = pbVar10[1];
        pbVar3[2] = pbVar10[2];
        uVar7 = (uint)pbVar6[2];
        param_1 = local_40;
    LAB_0002abb4:
        while (true) {
            *pbVar2 = (byte)uVar7;
            pbVar10 = pbVar12 + 3;
            pbVar2[1] = pbVar12[1];
            pbVar2[2] = pbVar12[2];
            uVar9 = uVar8;
            pbVar12 = pbVar2 + 3;
        LAB_0002abd0:
            pbVar3 = pbVar12 + -1;
            pbVar2 = pbVar10;
            do {
                pbVar6 = pbVar2 + 1;
                pbVar3 = pbVar3 + 1;
                *pbVar3 = *pbVar2;
                pbVar2 = pbVar6;
            } while (pbVar6 != pbVar10 + uVar9);
            pbVar3 = pbVar12 + uVar9;
            uVar8 = (uint)pbVar10[uVar9];
            uVar7 = (uint)pbVar10[uVar9 + 1];
            if (0xf < uVar8)
                break;
            pbVar11 = pbVar10 + uVar9 + 2;
            pbVar2 = pbVar12 + uVar9 + 3;
            pbVar10 = pbVar12 + ((uVar9 - 0x401) -
                                 (uVar7 * 4 + (uint)(pbVar10[uVar9] >> 2)));
            pbVar12[uVar9] = *pbVar10;
            pbVar12[uVar9 + 1] = pbVar10[1];
            pbVar12[uVar9 + 2] = pbVar10[2];
        LAB_0002ac44:
            local_40 = pbVar11 + -2;
            __n = *local_40 & 3;
            uVar9 = __n;
            pbVar10 = pbVar11;
            if ((*local_40 & 3) == 0)
                goto LAB_0002ac5c;
        LAB_0002aa98:
            pbVar3 = pbVar2 + -1;
            pbVar12 = pbVar10;
            do {
                pbVar6 = pbVar12 + 1;
                pbVar3 = pbVar3 + 1;
                *pbVar3 = *pbVar12;
                pbVar12 = pbVar6;
            } while (pbVar6 != pbVar10 + uVar9);
            pbVar5 = pbVar2 + (uVar9 - 1);
            pbVar6 = pbVar10 + uVar9 + 1;
            pbVar3 = pbVar2 + uVar9;
            bVar17 = pbVar14 == pbVar3;
            if (pbVar14 >= pbVar3) {
                bVar17 = pbVar15 == pbVar6;
            }
            if ((pbVar14 < pbVar3 || pbVar15 < pbVar6) || bVar17)
                goto LAB_0002ae00;
            bVar16 = pbVar10[uVar9];
            uVar8 = (uint)bVar16;
            uVar7 = (uint)pbVar10[uVar9 + 1];
            if (0xf < uVar8)
                goto LAB_0002a99c;
            pbVar11 = pbVar10 + uVar9 + 2;
            iVar13 = (uint)(bVar16 >> 2) + uVar7 * 4;
            pbVar3 = (byte *)-iVar13;
            pbVar6 = pbVar5 + (int)pbVar3;
            if (local_40 == (byte *)0x0) {
            LAB_0002ad58:
                pbVar12 = (byte *)0xffffffff;
                goto LAB_0002ad5c;
            }
            if (__n != 1 || (bVar16 & 3) != 0) {
                if ((bVar16 & 3) == 0) {
                    uVar8 = (uint)pbVar10[uVar9 + 2];
                    goto LAB_0002aeb0;
                }
                goto LAB_0002ad58;
            }
            uVar8 = (uint)pbVar10[uVar9 + 2];
            if (0xf < uVar8) {
                bVar17 = iVar13 == 0;
                *local_40 = *local_40 & 0xfc | 3;
                pbVar12 = local_40;
                if (bVar17) {
                    pbVar12 = pbVar3;
                }
                if (!bVar17) {
                    pbVar12 = (byte *)0x0;
                }
                pbVar10[uVar9] = pbVar5[(int)pbVar3];
                if (bVar17) {
                    bVar16 = *pbVar5;
                } else {
                    bVar16 = pbVar6[1];
                }
                __n = 3;
                pbVar10[uVar9 + 1] = bVar16;
            LAB_0002ad5c:
                pbVar2 = pbVar5 + 3;
                pbVar5[1] = pbVar5[(int)pbVar3];
                pbVar5[2] = pbVar6[1];
            LAB_0002ad4c:
                if (pbVar12 != (byte *)0xffffffff) {
                LAB_0002ac5c:
                    bVar17 = pbVar14 <= pbVar2;
                    param_1 = pbVar11;
                    if (pbVar2 <= pbVar14) {
                        bVar17 = pbVar15 <= pbVar11;
                    }
                    goto LAB_0002a980;
                }
                goto LAB_0002ac44;
            }
        LAB_0002aeb0:
            if ((0xe < uVar8 - 1) || (iVar1 = uVar8 + __n, 0xf < iVar1 + 2U))
                goto LAB_0002ad58;
            pbVar12 = pbVar10 + uVar9 + 3;
            *local_40 = *local_40 & 0xfc;
            pbVar10[uVar9 + 1] = pbVar5[(int)pbVar3];
            if (iVar13 == 0) {
                bVar16 = *pbVar5;
            } else {
                bVar16 = pbVar6[1];
            }
            pbVar10[uVar9 + 2] = bVar16;
            param_1 = local_40 + 2;
            if (__n != 0) {
                memmove(local_40 + 3, param_1, __n);
            }
            __n = iVar1 + 5;
            local_40[2] = (char)iVar1 + 2;
            pbVar2 = pbVar5 + 3;
            pbVar5[1] = pbVar5[(int)pbVar3];
            pbVar5[2] = pbVar6[1];
            uVar7 = (uint)pbVar10[uVar9 + 3];
        }
        pbVar6 = pbVar10 + uVar9 + 1;
        local_40 = param_1;
    } while (true);
}

byte *FUN_0002b064(int param_1, byte *param_2, uint param_3, uint param_4)

{
    char cVar1;
    byte *pbVar2;
    uint uVar3;
    uint uVar4;
    byte *pbVar5;
    byte bVar6;
    byte *pbVar7;
    bool bVar8;

    *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_3;
    if (param_3 == 2) {
        pbVar2 = param_2 + 2;
        *param_2 = (byte)(param_4 - 1 >> 6);
        param_2[1] = (char)(param_4 - 1) * '\x04';
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        goto LAB_0002b170;
    }
    cVar1 = (char)param_3;
    if (8 < param_3) {
    LAB_0002b0f8:
        pbVar7 = param_2 + 1;
        if (0x4000 < param_4) {
            uVar4 = param_4 - 0x4000;
            bVar6 = (byte)(uVar4 >> 0xb) & 8;
            if (param_3 < 10) {
                *param_2 = bVar6 | cVar1 - 2U | 0x10;
            } else {
                *param_2 = bVar6 | 0x10;
                for (uVar3 = param_3 - 9; 0xff < uVar3; uVar3 = uVar3 - 0xff) {
                    *pbVar7 = 0;
                    pbVar7 = pbVar7 + 1;
                }
                *pbVar7 = (byte)uVar3;
                pbVar7 = pbVar7 + 1;
            }
            pbVar2 = pbVar7 + 2;
            *pbVar7 = (byte)(uVar4 >> 6);
            pbVar7[1] = (char)uVar4 * '\x04';
            *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
            goto LAB_0002b170;
        }
        if (param_3 < 0x22) {
        LAB_0002b0c8:
            pbVar5 = param_2 + 1;
            *param_2 = cVar1 - 2U | 0x20;
        } else {
            *param_2 = 0x20;
            for (uVar4 = param_3 - 0x21; 0xff < uVar4; uVar4 = uVar4 - 0xff) {
                *pbVar7 = 0;
                pbVar7 = pbVar7 + 1;
            }
            pbVar5 = pbVar7 + 1;
            *pbVar7 = (byte)uVar4;
        }
        pbVar2 = pbVar5 + 2;
        *pbVar5 = (byte)(param_4 - 1 >> 6);
        pbVar5[1] = (char)(param_4 - 1) * '\x04';
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        goto LAB_0002b170;
    }
    if (param_4 < 0x701) {
        bVar6 = (cVar1 + -1) * ' ';
        if (param_4 == *(uint *)(param_1 + 0x14))
            goto LAB_0002b254;
        pbVar2 = param_2 + 2;
        *param_2 = bVar6 | (byte)(param_4 - 1 >> 6);
        param_2[1] = (char)(param_4 - 1) * '\x04';
    } else {
        if (param_4 != *(uint *)(param_1 + 0x14)) {
            bVar8 = param_4 == 0xb00;
            if (param_4 < 0xb01) {
                bVar8 = param_3 == 3;
            }
            if (!bVar8)
                goto LAB_0002b0f8;
            if (3 < *(uint *)(param_1 + 0x4c)) {
                pbVar2 = param_2 + 2;
                *param_2 = (byte)(param_4 - 0x701 >> 6);
                param_2[1] = (char)(param_4 - 0x701) * '\x04';
                *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
                goto LAB_0002b170;
            }
            goto LAB_0002b0c8;
        }
        bVar6 = (cVar1 + -1) * ' ';
    LAB_0002b254:
        pbVar2 = param_2 + 1;
        *param_2 = bVar6 | 0x1c;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
LAB_0002b170:
    *(uint *)(param_1 + 0x10) = param_3;
    *(uint *)(param_1 + 0x14) = param_4;
    return pbVar2;
}

char *FUN_0002b26c(int param_1, char *param_2, char *param_3, uint param_4)

{
    byte bVar1;
    char *pcVar2;
    char *pcVar4;
    uint uVar5;
    char *pcVar6;
    char *pcVar3;

    *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_4;
    bVar1 = (byte)param_4;
    if (*(char **)(param_1 + 0x28) == param_2) {
        if (param_4 < 0xef) {
            pcVar6 = param_2 + 1;
            *param_2 = bVar1 + 0x11;
            goto LAB_0002b2a8;
        }
    } else {
        if (param_4 < 4) {
            param_2[-1] = param_2[-1] | bVar1;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            pcVar6 = param_2;
            goto LAB_0002b2a8;
        }
        pcVar6 = param_2 + 1;
        if (param_4 < 0x13) {
            *param_2 = bVar1 - 3;
            *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
            goto LAB_0002b2a8;
        }
    }
    *param_2 = '\0';
    pcVar6 = param_2 + 1;
    for (uVar5 = param_4 - 0x12; 0xff < uVar5; uVar5 = uVar5 - 0xff) {
        *pcVar6 = '\0';
        pcVar6 = pcVar6 + 1;
    }
    *pcVar6 = (char)uVar5;
    pcVar6 = pcVar6 + 1;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
LAB_0002b2a8:
    pcVar4 = pcVar6 + -1;
    pcVar3 = param_3;
    do {
        pcVar2 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
        *pcVar4 = *pcVar3;
        pcVar3 = pcVar2;
    } while (pcVar2 != param_3 + param_4);
    return pcVar6 + param_4;
}

void FUN_0002b348(int param_1, uint *param_2, uint *param_3)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    bool bVar5;

    uVar1 = *param_2;
    if (uVar1 < 4) {
        return;
    }
    uVar2 = *param_3;
    uVar4 = *(uint *)(*(int *)(param_1 + 0xb4) + 0x14);
    bVar5 = uVar1 == 8;
    if (uVar1 < 9) {
        bVar5 = uVar2 == uVar4;
    }
    if (bVar5) {
        return;
    }
    if (uVar4 != 0 && uVar1 - 4 < 6) {
        iVar3 = param_1 + uVar1 * 4;
        if (uVar4 == *(uint *)(iVar3 + 0x28)) {
            *param_2 = uVar1 - 1;
            *param_3 = *(uint *)(iVar3 + 0x28);
            return;
        }
    }
    if (0x700 < uVar2) {
        if (uVar1 < 10) {
            param_1 = param_1 + uVar1 * 4;
            if (0x6ff < *(int *)(param_1 + 0x28) - 1U) {
                return;
            }
        } else {
            if (uVar2 < 0x4001) {
                return;
            }
            if (uVar1 == 10) {
                if (*(int *)(param_1 + 0x4c) - 1U < 0x700) {
                    *param_2 = 8;
                    *param_3 = *(uint *)(param_1 + 0x4c);
                    return;
                }
            } else if (0x22 < uVar1) {
                return;
            }
            param_1 = param_1 + uVar1 * 4;
            if (0x3fff < *(int *)(param_1 + 0x28) - 1U) {
                return;
            }
        }
        *param_2 = uVar1 - 1;
        *param_3 = *(uint *)(param_1 + 0x28);
        return;
    }
    return;
}

int FUN_0002b444(uint param_1, uint param_2, uint param_3)

{
    int iVar1;
    bool bVar2;
    bool bVar3;

    if (param_1 < 2) {
        return 0;
    }
    if (param_1 == 2) {
        param_3 = param_3 - 1;
        bVar3 = 1 < param_3;
        bVar2 = param_3 == 2;
        if (param_3 < 3) {
            bVar3 = 0x3ff < param_2;
            bVar2 = param_2 == 0x400;
        }
        if (bVar3 && !bVar2) {
            iVar1 = 0;
        } else {
            iVar1 = 2;
        }
        return iVar1;
    }
    bVar3 = 7 < param_1;
    bVar2 = param_1 == 8;
    if (param_1 < 9) {
        bVar3 = 0x6ff < param_2;
        bVar2 = param_2 == 0x700;
    }
    if (!bVar3 || bVar2) {
        return 2;
    }
    bVar2 = param_2 == 0xb00;
    if (param_2 < 0xb01) {
        bVar2 = param_1 == 3;
    }
    if (!bVar2) {
        if (param_2 < 0x4001) {
            if (0x21 < param_1) {
                param_1 = param_1 - 0x21;
                iVar1 = 4;
                if (param_1 < 0x100) {
                    return 4;
                }
                do {
                    param_1 = param_1 - 0xff;
                    iVar1 = iVar1 + 1;
                } while (0xff < param_1);
                return iVar1;
            }
        } else {
            if (0xbfff < param_2) {
                return 0;
            }
            if (9 < param_1) {
                param_1 = param_1 - 9;
                iVar1 = 4;
                if (param_1 < 0x100) {
                    return 4;
                }
                do {
                    param_1 = param_1 - 0xff;
                    iVar1 = iVar1 + 1;
                } while (0xff < param_1);
                return iVar1;
            }
        }
        return 3;
    }
    if (param_3 < 4) {
        iVar1 = 3;
    } else {
        iVar1 = 2;
    }
    return iVar1;
}

undefined4 FUN_0002b514(int param_1, int param_2, int param_3, int param_4)

{
    ushort uVar1;
    short sVar2;
    char *pcVar3;
    undefined1 uVar4;
    ushort *puVar5;
    uint uVar6;
    int *piVar7;
    char *pcVar9;
    undefined2 uVar10;
    uint uVar11;
    int iVar13;
    int iVar14;
    uint uVar15;
    short *psVar16;
    uint uVar17;
    ushort *puVar18;
    undefined1 *puVar19;
    int iVar20;
    int iVar21;
    ushort *puVar22;
    char cVar23;
    uint uVar24;
    uint uVar25;
    uint uVar26;
    undefined1 *puVar27;
    char *pcVar28;
    bool bVar29;
    undefined2 local_48;
    int *piVar8;
    uint uVar12;

    puVar18 = (ushort *)(param_2 + 0x16c);
    if (param_4 == 0) {
        uVar17 = *(uint *)(param_2 + 0x154);
        iVar20 = uVar17 + 1;
        iVar21 = uVar17 + 2;
        local_48 = (undefined2)uVar17;
        puVar22 = (ushort *)((int)puVar18 + uVar17);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
    } else {
        param_3 = param_3 - param_4;
        uVar17 = *(uint *)(param_2 + 0x154);
        uVar24 = uVar17;
        iVar14 = param_3;
        if (param_3 == 0) {
            local_48 = (undefined2)uVar17;
            iVar20 = uVar17 + 1;
            iVar21 = uVar17 + 2;
            puVar22 = (ushort *)((int)puVar18 + uVar17);
        } else {
            do {
                uVar26 = *(uint *)(param_2 + 0x158);
                if (*(int *)(param_2 + 0x164) == 0) {
                    iVar20 = param_2 + uVar26;
                    psVar16 =
                        (short *)(param_2 +
                                  (((uint) * (byte *)(iVar20 + 0x16e) ^
                                    ((uint) * (byte *)(iVar20 + 0x16d) ^
                                     (uint) * (byte *)(iVar20 + 0x16c) << 5)
                                        << 5) *
                                       0x13ebe000 >>
                                   0x12) *
                                      2 +
                                  0x47168);
                    *psVar16 = *psVar16 + -1;
                    puVar22 =
                        (ushort *)(param_2 +
                                   (uint) * (ushort *)((int)puVar18 + uVar26) *
                                       2 +
                                   0x4f168);
                    if (uVar26 == *puVar22) {
                        *puVar22 = 0xffff;
                    }
                } else {
                    *(int *)(param_2 + 0x164) = *(int *)(param_2 + 0x164) + -1;
                }
                uVar17 = uVar24 + 1;
                iVar20 = param_2 +
                         (((uint) * (byte *)(param_2 + uVar24 + 0x16e) ^
                           ((uint) * (byte *)(param_2 + uVar17 + 0x16c) ^
                            (uint) * (byte *)(param_2 + uVar24 + 0x16c) << 5)
                               << 5) *
                              0x13ebe000 >>
                          0x12) *
                             2;
                sVar2 = *(short *)(iVar20 + 0x47168);
                if (sVar2 == 0) {
                    uVar10 = 0xffff;
                } else {
                    uVar10 = *(undefined2 *)(iVar20 + 0xd16c);
                }
                iVar21 = param_2 + uVar24 * 2;
                *(undefined2 *)(iVar21 + 0x1516c) = uVar10;
                *(short *)(iVar20 + 0xd16c) = (short)uVar24;
                uVar15 = *(uint *)(param_2 + 4);
                *(short *)(iVar21 + 0x2e16a) = (short)uVar15 + 1;
                *(short *)(iVar20 + 0x47168) = sVar2 + 1;
                iVar20 = *(int *)(param_2 + 0xb4);
                uVar11 = *(uint *)(param_2 + 0x150);
                puVar27 = *(undefined1 **)(iVar20 + 0x1c);
                puVar19 = *(undefined1 **)(iVar20 + 0x24);
                *(short *)(param_2 +
                           (*(ushort *)((int)puVar18 + uVar24) + 0x278b4) * 2) =
                    (short)uVar24;
                if (puVar27 < puVar19) {
                    *(undefined1 **)(iVar20 + 0x1c) = puVar27 + 1;
                    uVar4 = *puVar27;
                    *(undefined1 *)(param_2 + uVar11 + 0x16c) = uVar4;
                    if (uVar11 < uVar15) {
                        *(undefined1 *)(*(int *)(param_2 + 0x160) + uVar11) =
                            uVar4;
                        uVar11 = *(uint *)(param_2 + 0x150);
                        uVar26 = *(uint *)(param_2 + 0x158);
                        uVar17 = *(int *)(param_2 + 0x154) + 1;
                    }
                } else {
                    if (*(int *)(param_2 + 0x24) != 0) {
                        *(int *)(param_2 + 0x24) =
                            *(int *)(param_2 + 0x24) + -1;
                    }
                    *(undefined1 *)(param_2 + uVar11 + 0x16c) = 0;
                    if (uVar11 < uVar15) {
                        *(undefined1 *)(*(int *)(param_2 + 0x160) + uVar11) = 0;
                        uVar11 = *(uint *)(param_2 + 0x150);
                        uVar26 = *(uint *)(param_2 + 0x158);
                        uVar17 = *(int *)(param_2 + 0x154) + 1;
                    }
                }
                uVar24 = *(uint *)(param_2 + 0x15c);
                *(uint *)(param_2 + 0x150) = uVar11 + 1;
                if (uVar11 + 1 == uVar24) {
                    *(undefined4 *)(param_2 + 0x150) = 0;
                }
                if (uVar24 == uVar17) {
                    local_48 = 0;
                    uVar17 = 0;
                    iVar21 = 2;
                    iVar20 = 1;
                    *(undefined4 *)(param_2 + 0x154) = 0;
                    puVar22 = puVar18;
                } else {
                    local_48 = (undefined2)uVar17;
                    iVar20 = uVar17 + 1;
                    iVar21 = uVar17 + 2;
                    *(uint *)(param_2 + 0x154) = uVar17;
                    puVar22 = (ushort *)((int)puVar18 + uVar17);
                }
                uVar26 = uVar26 + 1;
                if (uVar24 == uVar26) {
                    uVar26 = 0;
                }
                iVar14 = iVar14 + -1;
                *(uint *)(param_2 + 0x158) = uVar26;
                uVar24 = uVar17;
            } while (iVar14 != 0);
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1 + param_3;
    }
    iVar14 = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 1;
    if (iVar14 != 0) {
        memset((void *)(param_2 + 0xbc), 0, 0x88);
    }
    uVar26 = (uint) * (byte *)(param_2 + uVar17 + 0x16c);
    iVar21 =
        param_2 +
        (((uint) * (byte *)(param_2 + iVar21 + 0x16c) ^
          ((uint) * (byte *)(param_2 + iVar20 + 0x16c) ^ uVar26 << 5) << 5) *
             0x13ebe000 >>
         0x12) *
            2;
    puVar5 = (ushort *)(iVar21 + 0x47168);
    uVar1 = *puVar5;
    uVar24 = (uint)uVar1;
    if (uVar24 == 0) {
        *(undefined2 *)(param_2 + (uVar17 + 0xa8b4) * 2 + 4) = 0xffff;
        uVar15 = 0xffff;
        *puVar5 = 1;
        uVar11 = uVar24;
    } else {
        uVar15 = (uint) * (ushort *)(iVar21 + 0xd16c);
        *(ushort *)(param_2 + (uVar17 + 0xa8b4) * 2 + 4) =
            *(ushort *)(iVar21 + 0xd16c);
        *puVar5 = uVar1 + 1;
        uVar11 = *(uint *)(param_2 + 0xc);
        if (uVar11 == 0 || uVar24 <= uVar11) {
            uVar11 = uVar24;
        }
    }
    *(undefined2 *)(iVar21 + 0xd16c) = local_48;
    uVar24 = *(uint *)(param_2 + 0x24);
    *(uint *)(param_2 + 0x28) = uVar26;
    if (uVar24 < 2) {
        uVar26 = *(uint *)(param_2 + 4);
        if (uVar24 == 0) {
            uVar15 = 0xffffffff;
        }
        iVar21 = *(int *)(param_2 + 0x20);
        if (uVar24 == 0) {
            *(uint *)(param_2 + 0x28) = uVar15;
        }
        uVar25 = *(uint *)(param_2 + 0x1c);
        *(short *)(param_2 + (uVar17 + 0x170b4) * 2 + 2) = (short)uVar26 + 1;
        goto LAB_0002b63c;
    }
    uVar26 = (uint) * (ushort *)(param_2 + (*puVar22 + 0x278b4) * 2);
    if (uVar26 == 0xffff) {
        uVar25 = *(uint *)(param_2 + 0x1c);
        iVar21 = *(int *)(param_2 + 0x20);
        uVar10 = (undefined2)uVar25;
    } else {
        *(uint *)(param_2 + 0xb8) = uVar26;
        if (*(int *)(param_2 + 0xc4) == 0) {
            *(uint *)(param_2 + 0xc4) = uVar26 + 1;
        }
        uVar6 = 2;
        *(undefined4 *)(param_2 + 0x1c) = 2;
        uVar12 = uVar24;
        uVar25 = uVar24;
        if (uVar24 != 2) {
            iVar21 = uVar11 - 1;
            cVar23 = *(char *)((int)puVar22 + 1);
            uVar12 = uVar6;
            uVar25 = uVar6;
            if (uVar11 != 0) {
                uVar26 = uVar15;
                do {
                    pcVar9 = (char *)((int)puVar18 + uVar26);
                    if ((((pcVar9[uVar6 - 1] == cVar23) &&
                          (pcVar9[uVar6] == *(char *)((int)puVar22 + uVar6))) &&
                         (*pcVar9 == (char)*puVar22)) &&
                        (pcVar9[1] == *(char *)((int)puVar22 + 1))) {
                        pcVar9 = pcVar9 + 2;
                        pcVar3 = (char *)((int)puVar22 + 3);
                        do {
                            pcVar28 = pcVar3;
                            if ((char *)((int)puVar18 + uVar24 + uVar17) <=
                                pcVar28)
                                break;
                            pcVar9 = pcVar9 + 1;
                            pcVar3 = pcVar28 + 1;
                        } while (*pcVar28 == *pcVar9);
                        uVar11 = (int)pcVar28 - (int)puVar22;
                        if ((uVar11 < 0x22) && (iVar13 = param_2 + uVar11 * 4,
                                                *(int *)(iVar13 + 0xbc) == 0)) {
                            *(uint *)(iVar13 + 0xbc) = uVar26 + 1;
                        }
                        if (uVar6 < uVar11) {
                            *(uint *)(param_2 + 0x1c) = uVar11;
                            *(uint *)(param_2 + 0xb8) = uVar26;
                            if (uVar24 == uVar11) {
                                uVar12 = uVar24 & 0xffff;
                                uVar25 = uVar24;
                                goto LAB_0002b7ec;
                            }
                            if ((*(uint *)(param_2 + 0x10) <= uVar11) ||
                                (*(ushort *)(param_2 + (uVar26 + 0x170b4) * 2 +
                                             2) < uVar11))
                                break;
                            cVar23 = *(char *)((int)puVar22 + (uVar11 - 1));
                            uVar6 = uVar11;
                        }
                    }
                    iVar21 = iVar21 + -1;
                    uVar26 =
                        (uint) * (ushort *)(param_2 + 0x1516c + uVar26 * 2);
                } while (iVar21 != -1);
                uVar25 = *(uint *)(param_2 + 0x1c);
                uVar10 = (undefined2)uVar25;
                if (uVar25 < 2) {
                    iVar21 = *(int *)(param_2 + 0x20);
                    goto LAB_0002b804;
                }
                uVar26 = *(uint *)(param_2 + 0xb8);
                uVar12 = uVar25 & 0xffff;
            }
        }
    LAB_0002b7ec:
        uVar10 = (undefined2)uVar12;
        if (uVar26 < uVar17) {
            iVar21 = uVar17 - uVar26;
        } else {
            iVar21 = (uVar17 + *(int *)(param_2 + 0x15c)) - uVar26;
        }
        *(int *)(param_2 + 0x20) = iVar21;
    }
LAB_0002b804:
    uVar26 = *(uint *)(param_2 + 4);
    *(undefined2 *)(param_2 + (uVar17 + 0x170b4) * 2 + 2) = uVar10;
    if (iVar14 != 0) {
        piVar7 = (int *)(param_2 + 0xc0);
        do {
            piVar8 = piVar7 + 1;
            iVar14 = *piVar8;
            if (iVar14 == 0) {
                piVar7[-0x23] = 0;
            } else {
                iVar13 = iVar20 - iVar14;
                if (uVar17 <= iVar14 - 1U) {
                    iVar13 = (*(int *)(param_2 + 0x15c) - iVar14) + 1 + uVar17;
                }
                piVar7[-0x23] = iVar13;
            }
            piVar7 = piVar8;
        } while ((int *)(param_2 + 0x140) != piVar8);
    }
LAB_0002b63c:
    uVar24 = *(uint *)(param_2 + 0x158);
    if (*(int *)(param_2 + 0x164) == 0) {
        iVar14 = param_2 + uVar24;
        psVar16 = (short *)(param_2 +
                            (((uint) * (byte *)(iVar14 + 0x16e) ^
                              ((uint) * (byte *)(iVar14 + 0x16d) ^
                               (uint) * (byte *)(iVar14 + 0x16c) << 5)
                                  << 5) *
                                 0x13ebe000 >>
                             0x12) *
                                2 +
                            0x47168);
        *psVar16 = *psVar16 + -1;
        puVar18 = (ushort *)(param_2 +
                             (uint) * (ushort *)((int)puVar18 + uVar24) * 2 +
                             0x4f168);
        if (uVar24 == *puVar18) {
            *puVar18 = 0xffff;
        }
    } else {
        *(int *)(param_2 + 0x164) = *(int *)(param_2 + 0x164) + -1;
    }
    iVar14 = *(int *)(param_2 + 0xb4);
    puVar19 = *(undefined1 **)(iVar14 + 0x24);
    puVar27 = *(undefined1 **)(iVar14 + 0x1c);
    *(undefined2 *)(param_2 + (*puVar22 + 0x278b4) * 2) = local_48;
    *(uint *)(param_1 + 8) = uVar25;
    *(int *)(param_1 + 0xc) = iVar21;
    uVar11 = *(uint *)(param_2 + 0x150);
    if (puVar27 < puVar19) {
        *(undefined1 **)(iVar14 + 0x1c) = puVar27 + 1;
        uVar4 = *puVar27;
        *(undefined1 *)(param_2 + uVar11 + 0x16c) = uVar4;
    } else {
        uVar4 = 0;
        if (*(int *)(param_2 + 0x24) != 0) {
            *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
        *(undefined1 *)(param_2 + uVar11 + 0x16c) = 0;
    }
    if (uVar11 < uVar26) {
        *(undefined1 *)(*(int *)(param_2 + 0x160) + uVar11) = uVar4;
        uVar11 = *(uint *)(param_2 + 0x150);
        uVar17 = *(uint *)(param_2 + 0x154);
        uVar24 = *(uint *)(param_2 + 0x158);
    }
    uVar26 = *(uint *)(param_2 + 0x15c);
    *(uint *)(param_2 + 0x150) = uVar11 + 1;
    uVar24 = uVar24 + 1;
    iVar14 = *(int *)(param_1 + 0x2c);
    if (uVar11 + 1 == uVar26) {
        *(undefined4 *)(param_2 + 0x150) = 0;
    }
    if (uVar26 == uVar17 + 1) {
        *(undefined4 *)(param_2 + 0x154) = 0;
    } else {
        *(uint *)(param_2 + 0x154) = uVar17 + 1;
    }
    if (uVar26 == uVar24) {
        *(undefined4 *)(param_2 + 0x158) = 0;
    } else {
        *(uint *)(param_2 + 0x158) = uVar24;
    }
    bVar29 = -1 < *(int *)(param_2 + 0x28);
    if (bVar29) {
        uVar24 = *(uint *)(param_2 + 0x24);
    } else {
        uVar26 = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
    }
    if (bVar29) {
        uVar26 = ~uVar24;
        *(uint *)(param_1 + 4) = uVar24 + 1;
    }
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + uVar26;
    if (((iVar14 != 0) && (*(code **)(iVar14 + 8) != (code *)0x0)) &&
        (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x30))) {
        (**(code **)(iVar14 + 8))(iVar14, *(uint *)(param_1 + 0x30),
                                  *(undefined4 *)(param_1 + 0x34), 0);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x400;
    }
    return 0;
}

/* WARNING: Type propagation algorithm not settling */

int lzo1z_999_compress_internal(undefined1 *param_1, size_t param_2,
                                undefined1 *param_3, undefined4 *param_4,
                                int *param_5, void *param_6, uint param_7,
                                int param_8, uint param_9, uint param_10,
                                uint param_11, int param_12, uint param_13,
                                uint param_14)

{
    short sVar1;
    uint *puVar2;
    int iVar3;
    int iVar4;
    uint extraout_r1;
    uint uVar5;
    int iVar6;
    uint uVar7;
    ushort *puVar8;
    ushort *puVar9;
    ushort *puVar10;
    int *piVar11;
    uint extraout_r3;
    undefined1 *puVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    ushort *puVar16;
    size_t __n;
    uint uVar17;
    undefined2 *puVar18;
    undefined2 uVar19;
    int iVar20;
    uint uVar21;
    uint uVar22;
    int *piVar23;
    bool bVar24;
    bool bVar25;
    undefined1 *local_cc;
    undefined1 *local_b4;
    uint local_a4;
    uint local_a0[3];
    uint local_94;
    uint local_90[3];
    undefined1 *local_84;
    undefined1 *local_80;
    undefined1 *local_7c;
    undefined1 *local_78;
    undefined1 *local_74;
    int local_70;
    undefined4 local_6c;
    undefined1 *local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    int local_54;
    uint local_50;
    uint local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;

    if ((int)param_9 < 0) {
        param_9 = 1;
    }
    local_78 = param_1 + param_2;
    if (param_10 == 0) {
        param_10 = 0x20;
    }
    puVar2 = local_a0 + 1;
    local_a0[1] = 1;
    local_70 = param_8;
    if (param_11 == 0) {
        param_11 = 0x20;
    }
    param_5[0x2d] = (int)puVar2;
    local_38 = 0;
    if (param_13 == 0) {
        param_13 = 0x800;
    }
    local_3c = 0;
    piVar23 = param_5 + 0x2e;
    local_40 = 0;
    piVar11 = param_5 + 10;
    local_44 = 0;
    local_48 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_4c = 0;
    local_50 = 0;
    local_90[2] = 0;
    local_90[1] = 0;
    local_64 = 0;
    local_68 = (undefined1 *)0x0;
    local_6c = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_54 = 0;
    param_5[7] = 0;
    param_5[8] = 0;
    do {
        piVar23 = piVar23 + 1;
        *piVar23 = 0;
        piVar11 = piVar11 + 1;
        *piVar11 = 0;
    } while (param_5 + 0x2c != piVar11);
    param_5[0x58] = (int)param_5 + 0xc96b;
    param_5[2] = 1;
    param_5[0x57] = 0xc7ff;
    param_5[5] = 0;
    param_5[6] = 0;
    *param_5 = 0xbfff;
    param_5[0x59] = 0xbfff;
    param_5[1] = 0x800;
    param_5[3] = 0x800;
    param_5[4] = 0x800;
    local_80 = param_1;
    local_7c = param_1;
    local_74 = param_3;
    memset(param_5 + 0x11c5a, 0, 0x8000);
    memset(param_5 + 0x13c5a, 0xff, 0x20000);
    param_5[0x54] = 0;
    param_5[0x52] = 0;
    param_5[0x51] = 0;
    param_5[0x53] = 0;
    if (param_7 == 0 || param_6 == (void *)0x0) {
        param_5[0x55] = 0;
        param_5[0x5a] = 0;
        param_5[9] = param_2;
        if (param_2 != 0) {
            __n = 0;
            goto LAB_0002bee8;
        }
        param_5[0x56] = 0x800;
    } else {
        __n = param_7;
        if (0xbfff < param_7) {
            __n = 0xbfff;
            param_6 = (void *)((int)param_6 + (param_7 - 0xbfff));
        }
        param_5[0x52] = (int)param_6 + __n;
        param_5[0x51] = (int)param_6;
        param_5[0x53] = __n;
        memcpy(param_5 + 0x5b, param_6, __n);
        bVar24 = param_2 == 0;
        param_5[0x54] = __n;
        puVar12 = (undefined1 *)extraout_r3;
        if (bVar24) {
            puVar12 = (undefined1 *)0xc7ff;
        }
        param_5[0x55] = __n;
        param_5[0x5a] = __n;
        uVar5 = extraout_r1;
        if (bVar24) {
            uVar5 = 0xbfff;
        }
        param_5[9] = param_2;
        local_cc = puVar12;
        if (!bVar24) {
        LAB_0002bee8:
            if (0x800 < param_2) {
                param_2 = 0x800;
                param_5[9] = 0x800;
            }
            memcpy((void *)((int)param_5 + __n + 0x16c), param_1, param_2);
            param_2 = param_5[9];
            local_cc = (undefined1 *)param_5[0x57];
            puVar12 = (undefined1 *)(param_2 + param_5[0x54]);
            *(size_t *)(param_5[0x2d] + 0x1c) =
                *(int *)(param_5[0x2d] + 0x1c) + param_2;
            param_5[0x54] = (int)puVar12;
            if (puVar12 == local_cc) {
                puVar12 = (undefined1 *)0x0;
                param_5[0x54] = 0;
            }
            if ((param_2 < 2) || (iVar6 = param_5[0x53], iVar6 == 0)) {
                __n = param_5[0x5a];
                uVar5 = param_5[0x59];
            } else {
                iVar3 = param_5[1];
                puVar8 = (ushort *)(param_5 + 0x5b);
                uVar5 = *param_5 - iVar6;
                param_5[0x59] = uVar5;
                puVar18 = (undefined2 *)((int)param_5 + 0x1516a);
                piVar23 = param_5 + 0xb85a;
                param_5[0x5a] = 0;
                puVar9 = puVar8;
                puVar16 = puVar8;
                do {
                    uVar19 = 0xffff;
                    puVar10 = (ushort *)((int)puVar9 + 1);
                    uVar15 =
                        ((uint)(byte)puVar9[1] ^
                         ((uint) * (byte *)puVar10 ^ (uint)(byte)*puVar9 << 5)
                             << 5) *
                            0x13ebe000 >>
                        0x12;
                    sVar1 = *(short *)((int)param_5 + uVar15 * 2 + 0x47168);
                    if (sVar1 != 0) {
                        uVar19 =
                            *(undefined2 *)((int)param_5 + uVar15 * 2 + 0xd16c);
                    }
                    puVar12 =
                        (undefined1 *)((int)puVar16 - (int)puVar8 & 0xffff);
                    puVar18 = puVar18 + 1;
                    *puVar18 = uVar19;
                    uVar19 = (undefined2)((int)puVar16 - (int)puVar8);
                    *(undefined2 *)((int)param_5 + uVar15 * 2 + 0xd16c) =
                        uVar19;
                    piVar23 = (int *)((int)piVar23 + 2);
                    *(short *)piVar23 = (short)iVar3 + 1;
                    *(short *)((int)param_5 + uVar15 * 2 + 0x47168) = sVar1 + 1;
                    *(undefined2 *)((int)param_5 + (*puVar16 + 0x278b4) * 2) =
                        uVar19;
                    puVar9 = puVar10;
                    puVar16 = (ushort *)((int)puVar16 + 1);
                } while ((ushort *)((int)param_5 + iVar6 + 0x16c) != puVar10);
                __n = 0;
            }
        }
        iVar6 = __n - uVar5;
        if (__n < uVar5) {
            puVar12 = local_cc;
        }
        param_5[0x56] = __n;
        if (__n < uVar5) {
            iVar6 = iVar6 + (int)puVar12;
        }
        param_5[0x56] = iVar6;
        if (2 < param_2)
            goto LAB_0002bf7c;
    }
    iVar6 = param_2 + param_5[0x55];
    *(undefined1 *)((int)param_5 + iVar6 + 0x16e) = 0;
    *(undefined1 *)((int)param_5 + iVar6 + 0x16d) = 0;
    *(undefined1 *)((int)param_5 + iVar6 + 0x16c) = 0;
LAB_0002bf7c:
    param_5[5] = param_14 & 1;
    param_5[3] = param_13;
    if (param_12 != 0) {
        param_5[4] = param_12;
    }
    iVar6 = FUN_0002b514(puVar2, param_5, 0);
    if (iVar6 == 0) {
        uVar5 = 0;
        local_cc = param_3;
        local_b4 = param_1;
    LAB_0002bfd4:
        if (local_a0[2] != 0) {
            local_68 = local_cc + -(int)param_3;
            puVar12 = local_68;
            if (uVar5 == 0) {
                puVar12 = local_84;
            }
            local_a4 = local_94;
            local_a0[0] = local_90[0];
            if (uVar5 == 0) {
                local_b4 = puVar12;
            }
            if (local_94 < 2) {
            LAB_0002c3ec:
                uVar5 = uVar5 + 1;
                param_5[3] = param_13;
                local_a4 = 0;
                FUN_0002b514(puVar2, param_5);
            } else {
                if (local_94 == 2) {
                    bVar25 = 0x3ff < local_90[0];
                    bVar24 = local_90[0] == 0x400;
                    if (local_90[0] < 0x401) {
                        bVar25 = 1 < uVar5 - 1;
                        bVar24 = uVar5 - 1 == 2;
                    }
                    if ((!bVar25 || bVar24) && (local_cc != param_3))
                        goto LAB_0002c038;
                    goto LAB_0002c3ec;
                }
                if (uVar5 == 0 && local_cc == param_3)
                    goto LAB_0002c3ec;
                if (local_94 == 3) {
                    bVar25 = 0xaff < local_90[0];
                    bVar24 = local_90[0] == 0xb00;
                    if (0xb00 < local_90[0]) {
                        bVar25 = 2 < uVar5;
                        bVar24 = uVar5 == 3;
                    }
                    if (bVar25 && !bVar24)
                        goto LAB_0002c3ec;
                }
            LAB_0002c038:
                if (param_5[5] != 0) {
                    FUN_0002b348(param_5, &local_a4, local_a0);
                }
                uVar15 = local_a4;
                if ((param_9 == 0) || (param_11 <= local_a4)) {
                LAB_0002c414:
                    iVar20 = 1;
                } else {
                    iVar3 = FUN_0002b444(local_a4, local_a0[0], uVar5);
                    uVar13 = iVar3 - 1U;
                    if (param_9 <= iVar3 - 1U) {
                        uVar13 = param_9;
                    }
                    if ((uVar13 == 0) || (local_a0[2] <= uVar15))
                        goto LAB_0002c414;
                    uVar21 = 0;
                    do {
                        uVar17 = uVar21 + 1;
                        uVar14 = param_13;
                        if (param_10 <= uVar15) {
                            uVar14 = param_13 >> 2;
                        }
                        param_5[3] = uVar14;
                        FUN_0002b514(puVar2, param_5, 1, 0);
                        uVar15 = local_a4;
                        if (((local_90[2] == local_a0[0]) &&
                             (local_a0[0] != local_90[0])) &&
                            (local_a4 - 3 < 6)) {
                            local_94 = 0;
                        } else if (local_a4 <= local_94) {
                            if (local_94 == local_a4) {
                                if (local_a0[0] <= local_90[0])
                                    goto LAB_0002c14c;
                                iVar20 = param_5[5];
                            } else {
                                iVar20 = param_5[5];
                            }
                            if (iVar20 != 0) {
                                FUN_0002b348(param_5, &local_94, local_90);
                            }
                            uVar14 = local_94;
                            uVar15 = local_a4;
                            uVar22 = uVar5 + uVar17;
                            iVar20 =
                                FUN_0002b444(local_94, local_90[0], uVar22);
                            if (iVar20 != 0) {
                                if (local_cc == param_3) {
                                    iVar4 = 0;
                                } else {
                                    iVar4 = FUN_0002b444(uVar17, local_a0[0],
                                                         uVar5);
                                }
                                uVar7 = uVar17;
                                if (uVar5 < 4) {
                                    if (3 < uVar22) {
                                        uVar7 = uVar21 + 3;
                                    }
                                } else if ((uVar5 < 0x13) && (0x12 < uVar22)) {
                                    uVar7 = uVar21 + 2;
                                }
                                iVar20 = uVar7 + (iVar20 - iVar3) * 2;
                                if (iVar4 != 0) {
                                    iVar20 = iVar20 + (uVar17 - iVar4) * -2;
                                }
                                uVar7 = uVar15;
                                if (-1 < iVar20) {
                                    uVar7 = iVar20 + uVar15;
                                }
                                if (uVar7 <= uVar14) {
                                    if (iVar4 == 0) {
                                        uVar5 = uVar22;
                                    }
                                    local_54 = local_54 + 1;
                                    if (iVar4 != 0) {
                                        uVar15 = uVar5;
                                        if (uVar5 != 0) {
                                            local_cc =
                                                (undefined1 *)FUN_0002b26c(
                                                    puVar2, local_cc, local_b4,
                                                    uVar5);
                                            uVar15 = uVar17;
                                        }
                                        local_4c = uVar15;
                                        local_50 = uVar5;
                                        local_cc = (undefined1 *)FUN_0002b064(
                                            puVar2, local_cc, uVar17,
                                            local_a0[0]);
                                        uVar5 = 0;
                                    }
                                    goto LAB_0002bfd4;
                                }
                            }
                        }
                    LAB_0002c14c:
                        iVar20 = uVar21 + 2;
                    } while ((uVar13 != uVar17) &&
                             (uVar21 = uVar17, uVar15 < local_a0[2]));
                }
                uVar13 = uVar15;
                uVar21 = uVar5;
                if (uVar5 != 0) {
                    local_cc = (undefined1 *)FUN_0002b26c(puVar2, local_cc,
                                                          local_b4, uVar5);
                    uVar13 = local_a4;
                    uVar21 = uVar15;
                }
                local_4c = uVar21;
                local_50 = uVar5;
                local_cc = (undefined1 *)FUN_0002b064(puVar2, local_cc, uVar13,
                                                      local_a0[0]);
                uVar5 = 0;
                param_5[3] = param_13;
                FUN_0002b514(puVar2, param_5, local_a4, iVar20);
            }
            goto LAB_0002bfd4;
        }
        if (uVar5 != 0) {
            local_cc =
                (undefined1 *)FUN_0002b26c(puVar2, local_cc, local_b4, uVar5);
        }
        *local_cc = 0x11;
        local_cc[1] = 0;
        local_68 = local_cc + (3 - (int)param_3);
        local_cc[2] = 0;
        *param_4 = local_68;
        if ((local_70 != 0) && (*(code **)(local_70 + 8) != (code *)0x0)) {
            (**(code **)(local_70 + 8))(local_70, local_6c);
        }
    }
    return iVar6;
}

undefined4 lzo1z_999_compress_level(void)

{
    undefined4 uVar1;
    int in_stack_00000010;

    if (in_stack_00000010 - 1U < 9) {
        uVar1 = lzo1z_999_compress_internal();
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

void lzo1z_999_compress_dict(void)

{
    lzo1z_999_compress_level();
    return;
}

void lzo1z_999_compress(void)

{
    lzo1z_999_compress_level();
    return;
}

undefined4 lzo1z_decompress(byte *param_1, int param_2, byte *param_3,
                            int *param_4)

{
    byte bVar1;
    undefined4 uVar2;
    int iVar3;
    byte bVar4;
    uint uVar5;
    byte *pbVar6;
    uint uVar7;
    int iVar8;
    byte *pbVar9;
    uint uVar10;
    int iVar11;
    byte *unaff_r10;
    byte *pbVar12;
    byte *pbVar13;
    byte *pbVar14;
    byte *pbVar15;

    iVar3 = 0;
    *param_4 = 0;
    pbVar12 = param_1 + 1;
    uVar7 = (uint)*param_1;
    pbVar13 = pbVar12;
    pbVar6 = param_1;
    pbVar15 = param_3;
    if (uVar7 < 0x12)
        goto joined_r0x0002c7ec;
    uVar10 = uVar7 - 0x11;
    bVar4 = param_1[1];
    if ((int)uVar10 < 4) {
        unaff_r10 = param_1 + 2;
    }
    pbVar9 = param_3;
    if (uVar10 == 3 || (int)(uVar7 - 0x14) < 0 != SBORROW4(uVar10, 3))
        goto LAB_0002c798;
    pbVar6 = param_3 + -1;
    while (true) {
        pbVar6 = pbVar6 + 1;
        *pbVar6 = bVar4;
        if (param_1 + (uVar7 - 0x11) == pbVar13)
            break;
        pbVar13 = pbVar13 + 1;
        bVar4 = *pbVar13;
    }
    pbVar6 = pbVar12 + uVar10;
    iVar3 = 0;
    pbVar14 = param_3 + uVar10;
    pbVar13 = pbVar6 + 1;
    do {
        uVar7 = (uint)*pbVar6;
        pbVar15 = pbVar14;
        if (0xf < uVar7)
            goto LAB_0002c708;
        pbVar12 = pbVar6 + 2;
        unaff_r10 = pbVar6 + 3;
        pbVar9 = pbVar14 + 3;
        iVar3 = uVar7 * 0x40 + (uint)(pbVar6[1] >> 2);
        iVar8 = -iVar3;
        iVar3 = iVar3 + 0x701;
        *pbVar14 = pbVar14[iVar8 + -0x701];
        pbVar14[1] = pbVar14[iVar8 + -0x700];
        pbVar14[2] = pbVar14[iVar8 + -0x6ff];
    LAB_0002c6ec:
        bVar1 = pbVar12[-1];
        bVar4 = *pbVar12;
        if ((bVar1 & 3) != 0)
            goto LAB_0002c78c;
    LAB_0002c6fc:
        uVar7 = (uint)bVar4;
        pbVar13 = unaff_r10;
        pbVar6 = pbVar12;
        pbVar15 = pbVar9;
    joined_r0x0002c7ec:
        if (0xf < uVar7) {
        LAB_0002c708:
            pbVar12 = pbVar13;
            if (uVar7 < 0x40)
                goto LAB_0002c8cc;
            do {
                pbVar13 = (byte *)(uVar7 & 0x1f);
                unaff_r10 = pbVar12 + 1;
                if (pbVar13 < (byte *)0x1c) {
                    pbVar6 = pbVar12 + 2;
                    bVar4 = *pbVar12;
                    iVar3 = (int)pbVar13 << 6;
                    pbVar12 = unaff_r10;
                    unaff_r10 = (byte *)(uint)bVar4;
                    pbVar9 = pbVar13;
                } else {
                    pbVar9 = pbVar15 + -iVar3;
                    pbVar6 = pbVar12;
                }
                uVar10 = (uVar7 >> 5) - 1;
                if (pbVar13 < (byte *)0x1c) {
                    uVar7 = iVar3 + ((uint)unaff_r10 >> 2);
                    iVar3 = uVar7 + 1;
                    pbVar9 = pbVar15 + ~uVar7;
                    unaff_r10 = pbVar6;
                }
            LAB_0002c74c:
                *pbVar15 = *pbVar9;
                pbVar6 = pbVar15 + 1;
                *pbVar6 = pbVar9[1];
                pbVar13 = pbVar9 + 2;
                do {
                    pbVar14 = pbVar13 + 1;
                    pbVar6 = pbVar6 + 1;
                    *pbVar6 = *pbVar13;
                    pbVar13 = pbVar14;
                } while (pbVar14 != pbVar9 + 2 + uVar10);
                bVar1 = pbVar12[-1];
                pbVar9 = pbVar15 + uVar10 + 2;
                bVar4 = *pbVar12;
                if ((bVar1 & 3) == 0)
                    goto LAB_0002c6fc;
            LAB_0002c78c:
                uVar10 = bVar1 & 3;
            LAB_0002c798:
                *pbVar9 = bVar4;
                if (uVar10 == 1) {
                    pbVar15 = pbVar9 + 1;
                } else {
                    if (uVar10 != 3) {
                        unaff_r10 = pbVar12 + 2;
                    } else {
                        unaff_r10 = pbVar12 + 3;
                    }
                    pbVar9[1] = pbVar12[1];
                    if (uVar10 != 3) {
                        pbVar15 = pbVar9 + 2;
                    } else {
                        pbVar15 = pbVar9 + 3;
                        pbVar9[2] = pbVar12[2];
                    }
                }
                uVar7 = (uint)*unaff_r10;
                pbVar13 = unaff_r10 + 1;
                pbVar12 = pbVar13;
            } while (0x3f < uVar7);
        LAB_0002c8cc:
            uVar5 = (uint)*pbVar13;
            if (uVar7 < 0x20) {
                if (uVar7 < 0x10) {
                    pbVar12 = pbVar13 + 1;
                    uVar7 = (uint)(*pbVar13 >> 2) + uVar7 * 0x40;
                    unaff_r10 = pbVar13 + 2;
                    uVar10 = ~uVar7;
                    iVar3 = uVar7 + 1;
                    pbVar9 = pbVar15 + 2;
                    *pbVar15 = pbVar15[uVar10];
                    pbVar15[1] = pbVar15[uVar10 + 1];
                    goto LAB_0002c6ec;
                }
                uVar10 = uVar7 & 7;
                if (uVar10 == 0) {
                    while (uVar5 == 0) {
                        pbVar13 = pbVar13 + 1;
                        uVar10 = uVar10 + 0xff;
                        uVar5 = (uint)*pbVar13;
                    }
                    iVar3 = uVar5 + 7;
                    pbVar13 = pbVar13 + 1;
                    uVar5 = (uint)*pbVar13;
                    uVar10 = uVar10 + iVar3;
                }
                pbVar12 = pbVar13 + 2;
                if (pbVar15 ==
                    pbVar15 + -(uVar5 * 0x40 + (uint)(pbVar13[1] >> 2) +
                                (uVar7 & 8) * 0x800)) {
                    *param_4 = (int)pbVar15 - (int)param_3;
                    if (param_1 + param_2 == pbVar12) {
                        uVar2 = 0;
                    } else if (pbVar12 < param_1 + param_2) {
                        uVar2 = 0xfffffff8;
                    } else {
                        uVar2 = 0xfffffffc;
                    }
                    return uVar2;
                }
                pbVar9 = pbVar15 +
                         -(uVar5 * 0x40 + (uint)(pbVar13[1] >> 2) +
                           (uVar7 & 8) * 0x800) +
                         -0x4000;
                iVar3 = (int)pbVar15 - (int)pbVar9;
            } else {
                uVar10 = uVar7 & 0x1f;
                if (uVar10 == 0) {
                    while (uVar5 == 0) {
                        pbVar13 = pbVar13 + 1;
                        uVar10 = uVar10 + 0xff;
                        uVar5 = (uint)*pbVar13;
                    }
                    iVar3 = uVar5 + 0x1f;
                    pbVar13 = pbVar13 + 1;
                    uVar5 = (uint)*pbVar13;
                    uVar10 = uVar10 + iVar3;
                }
                pbVar12 = pbVar13 + 2;
                iVar3 = uVar5 * 0x40 + 1 + (uint)(pbVar13[1] >> 2);
                pbVar9 = pbVar15 + -iVar3;
            }
            unaff_r10 = pbVar12 + 1;
            if ((uVar10 < 6) || ((int)pbVar15 - (int)pbVar9 < 4))
                goto LAB_0002c74c;
            pbVar14 = pbVar9 + 4;
            uVar7 = uVar10 - 6 >> 2;
            *(undefined4 *)pbVar15 = *(undefined4 *)pbVar9;
            pbVar13 = pbVar15 + 4;
            pbVar6 = pbVar14;
            do {
                pbVar9 = pbVar13 + 4;
                *(undefined4 *)pbVar13 = *(undefined4 *)pbVar6;
                pbVar13 = pbVar9;
                pbVar6 = pbVar6 + 4;
            } while (pbVar9 != pbVar15 + (uVar7 + 2) * 4);
            iVar8 = (uVar7 + 1) * 4;
            iVar11 = uVar10 + uVar7 * -4 + -6;
            pbVar9 = pbVar15 + 4 + iVar8;
            if (iVar11 != 0) {
                pbVar6 = pbVar9 + -1;
                pbVar13 = pbVar14 + iVar8;
                do {
                    pbVar15 = pbVar13 + 1;
                    pbVar6 = pbVar6 + 1;
                    *pbVar6 = *pbVar13;
                    pbVar13 = pbVar15;
                } while (pbVar15 != pbVar14 + iVar8 + iVar11);
                pbVar9 = pbVar9 + iVar11;
            }
            goto LAB_0002c6ec;
        }
        if (uVar7 == 0) {
            iVar8 = 0;
            bVar4 = pbVar6[1];
            while (bVar4 == 0) {
                pbVar13 = pbVar13 + 1;
                iVar8 = iVar8 + 0xff;
                bVar4 = *pbVar13;
            }
            pbVar13 = pbVar13 + 1;
            uVar7 = iVar8 + bVar4 + 0xf;
        }
        uVar10 = uVar7 - 1;
        pbVar6 = pbVar13 + 4;
        uVar2 = *(undefined4 *)pbVar13;
        if (uVar10 == 0) {
            pbVar13 = pbVar13 + 5;
        }
        pbVar14 = pbVar15 + 4;
        *(undefined4 *)pbVar15 = uVar2;
        if (uVar10 != 0) {
            if (uVar10 < 4) {
                pbVar15 = pbVar15 + 3;
                pbVar12 = pbVar6;
                do {
                    pbVar9 = pbVar12 + 1;
                    pbVar15 = pbVar15 + 1;
                    *pbVar15 = *pbVar12;
                    pbVar12 = pbVar9;
                } while (pbVar9 != pbVar13 + uVar7 + 3);
                pbVar13 = pbVar6 + uVar7;
                pbVar14 = pbVar14 + uVar10;
                pbVar6 = pbVar6 + uVar10;
            } else {
                uVar7 = uVar7 - 5 >> 2;
                pbVar13 = pbVar6;
                pbVar12 = pbVar14;
                do {
                    pbVar9 = pbVar12 + 4;
                    *(undefined4 *)pbVar12 = *(undefined4 *)pbVar13;
                    pbVar13 = pbVar13 + 4;
                    pbVar12 = pbVar9;
                } while (pbVar9 != pbVar15 + (uVar7 + 2) * 4);
                iVar8 = (uVar7 + 1) * 4;
                iVar11 = uVar10 + uVar7 * -4 + -4;
                pbVar6 = pbVar6 + iVar8;
                pbVar14 = pbVar14 + iVar8;
                if (iVar11 == 0) {
                    pbVar13 = pbVar6 + 1;
                } else {
                    pbVar12 = pbVar6 + iVar11;
                    *pbVar14 = *pbVar6;
                    pbVar13 = pbVar6;
                    pbVar15 = pbVar14;
                    while (pbVar6 = pbVar13 + 1, pbVar6 != pbVar12) {
                        pbVar15 = pbVar15 + 1;
                        *pbVar15 = *pbVar6;
                        pbVar13 = pbVar6;
                    }
                    pbVar14 = pbVar14 + iVar11;
                    pbVar13 = pbVar13 + 2;
                }
            }
        }
    } while (true);
}

undefined4 lzo1z_decompress_safe(byte *param_1, int param_2, byte *param_3,
                                 int *param_4)

{
    byte bVar1;
    uint uVar2;
    int iVar3;
    byte *pbVar4;
    byte *pbVar5;
    uint uVar6;
    int iVar7;
    byte *pbVar8;
    int iVar9;
    byte *pbVar10;
    byte *pbVar11;
    byte *pbVar12;
    uint uVar13;
    byte *pbVar14;
    byte *pbVar15;

    pbVar10 = param_1 + param_2;
    pbVar11 = (byte *)*param_4;
    iVar7 = 0;
    *param_4 = 0;
    if (pbVar10 != param_1) {
        uVar6 = (uint)*param_1;
        pbVar12 = param_3;
        if (uVar6 < 0x12)
            goto LAB_0002ccbc;
        pbVar15 = (byte *)(uVar6 - 0x11);
        pbVar14 = param_1 + 1;
        if ((int)pbVar15 < 4)
            goto LAB_0002cbb4;
        if (pbVar11 < pbVar15) {
            iVar7 = 0;
        LAB_0002d014:
            *param_4 = iVar7;
            return 0xfffffffb;
        }
        if (uVar6 - 0xe <= param_2 - 1U) {
            pbVar8 = param_3 + -1;
            pbVar12 = pbVar14;
            do {
                pbVar4 = pbVar12 + 1;
                pbVar8 = pbVar8 + 1;
                *pbVar8 = *pbVar12;
                pbVar12 = pbVar4;
            } while (pbVar4 != param_1 + (uVar6 - 0x10));
            pbVar4 = pbVar14 + (int)pbVar15;
            iVar7 = 0;
            pbVar8 = param_3 + (int)pbVar15;
            do {
                uVar6 = (uint)*pbVar4;
                if (0xf < uVar6) {
                    pbVar14 = pbVar4 + 1;
                    goto LAB_0002ccd8;
                }
                pbVar14 = pbVar4 + 2;
                iVar9 = uVar6 * 0x40 + (uint)(pbVar4[1] >> 2);
                iVar7 = iVar9 + 0x701;
                pbVar15 = pbVar8 + (-0x701 - iVar9);
                if (pbVar15 < param_3 || pbVar8 <= pbVar15) {
                LAB_0002d030:
                    *param_4 = (int)pbVar8 - (int)param_3;
                    return 0xfffffffa;
                }
                pbVar12 = pbVar8;
                if (param_3 + ((int)pbVar11 - (int)pbVar8) < (byte *)0x3) {
                LAB_0002d020:
                    iVar7 = (int)pbVar12 - (int)param_3;
                    goto LAB_0002d014;
                }
                pbVar12 = pbVar8 + 3;
                *pbVar8 = *pbVar15;
                pbVar8[1] = pbVar8[-0x700 - iVar9];
                pbVar8[2] = pbVar8[-0x6ff - iVar9];
            LAB_0002cb9c:
                while (pbVar15 = (byte *)(pbVar14[-1] & 3), param_1 = pbVar14,
                       (pbVar14[-1] & 3) != 0) {
                LAB_0002cbb4:
                    if (param_3 + ((int)pbVar11 - (int)pbVar12) < pbVar15) {
                        iVar7 = (int)pbVar12 - (int)param_3;
                        goto LAB_0002d014;
                    }
                    pbVar8 = pbVar15 + 3;
                    if (pbVar10 + -(int)pbVar14 < pbVar8) {
                        iVar7 = (int)pbVar12 - (int)param_3;
                        goto LAB_0002cef8;
                    }
                    if (pbVar15 == (byte *)0x1) {
                        pbVar8 = pbVar12 + 1;
                    }
                    *pbVar12 = *pbVar14;
                    if (pbVar15 == (byte *)0x1) {
                        pbVar15 = pbVar14 + 1;
                    } else {
                        if (pbVar15 != (byte *)0x3) {
                            pbVar8 = pbVar12 + 2;
                        } else {
                            pbVar8 = pbVar12 + 3;
                        }
                        pbVar12[1] = pbVar14[1];
                        if (pbVar15 != (byte *)0x3) {
                            pbVar15 = pbVar14 + 2;
                        } else {
                            pbVar15 = pbVar14 + 3;
                            pbVar12[2] = pbVar14[2];
                        }
                    }
                    pbVar14 = pbVar15 + 1;
                    uVar6 = (uint)*pbVar15;
                    if (0x3f < uVar6)
                        goto LAB_0002cc24;
                LAB_0002cce0:
                    bVar1 = *pbVar14;
                    uVar2 = (uint)bVar1;
                    pbVar12 = pbVar8;
                    if (uVar6 < 0x20) {
                        if (0xf < uVar6) {
                            uVar13 = uVar6 & 7;
                            pbVar15 = pbVar14;
                            if (uVar13 == 0) {
                                while (pbVar14 = pbVar15 + 1, uVar2 == 0) {
                                    if (uVar13 == 0xfffffe01)
                                        goto LAB_0002d020;
                                    if (pbVar14 == pbVar10)
                                        goto LAB_0002cef4;
                                    uVar13 = uVar13 + 0xff;
                                    pbVar15 = pbVar14;
                                    uVar2 = (uint)*pbVar14;
                                }
                                uVar13 = uVar13 + uVar2 + 7;
                                if ((uint)((int)pbVar10 - (int)pbVar14) < 2)
                                    goto LAB_0002cef4;
                                uVar2 = (uint)pbVar15[1];
                            }
                            pbVar15 = pbVar14 + 1;
                            pbVar14 = pbVar14 + 2;
                            if (pbVar8 == pbVar8 + -(uVar2 * 0x40 +
                                                     (uint)(*pbVar15 >> 2) +
                                                     (uVar6 & 8) * 0x800)) {
                                *param_4 = (int)pbVar8 - (int)param_3;
                                if (pbVar10 == pbVar14) {
                                    return 0;
                                }
                                if (pbVar10 <= pbVar14) {
                                    return 0xfffffffc;
                                }
                                return 0xfffffff8;
                            }
                            pbVar15 = pbVar8 +
                                      -(uVar2 * 0x40 + (uint)(*pbVar15 >> 2) +
                                        (uVar6 & 8) * 0x800) +
                                      -0x4000;
                            iVar7 = (int)pbVar8 - (int)pbVar15;
                            goto LAB_0002cd0c;
                        }
                        pbVar14 = pbVar14 + 1;
                        uVar6 = (uint)(bVar1 >> 2) + uVar6 * 0x40;
                        iVar7 = uVar6 + 1;
                        pbVar15 = pbVar8 + ~uVar6;
                        if (pbVar15 < param_3 || pbVar8 <= pbVar15)
                            goto LAB_0002d030;
                        if (param_3 + ((int)pbVar11 - (int)pbVar8) <
                            (byte *)0x2)
                            goto LAB_0002d020;
                        pbVar12 = pbVar8 + 2;
                        *pbVar8 = *pbVar15;
                        pbVar8[1] = pbVar15[1];
                    } else {
                        uVar13 = uVar6 & 0x1f;
                        pbVar15 = pbVar14;
                        if (uVar13 == 0) {
                            while (pbVar14 = pbVar15 + 1, uVar2 == 0) {
                                if (uVar13 == 0xfffffe01)
                                    goto LAB_0002d020;
                                if (pbVar14 == pbVar10)
                                    goto LAB_0002cef4;
                                uVar13 = uVar13 + 0xff;
                                pbVar15 = pbVar14;
                                uVar2 = (uint)*pbVar14;
                            }
                            uVar13 = uVar13 + uVar2 + 0x1f;
                            if ((uint)((int)pbVar10 - (int)pbVar14) < 2)
                                goto LAB_0002cef4;
                            uVar2 = (uint)pbVar15[1];
                        }
                        pbVar15 = pbVar14 + 1;
                        pbVar14 = pbVar14 + 2;
                        iVar7 = uVar2 * 0x40 + 1 + (uint)(*pbVar15 >> 2);
                        pbVar15 = pbVar8 + -iVar7;
                    LAB_0002cd0c:
                        if (pbVar15 < param_3 || pbVar8 <= pbVar15)
                            goto LAB_0002d030;
                        if (param_3 + ((int)pbVar11 - (int)pbVar8) <
                            (byte *)(uVar13 + 2))
                            goto LAB_0002d020;
                        if ((uVar13 < 6) || ((int)pbVar8 - (int)pbVar15 < 4))
                            goto LAB_0002cc80;
                        pbVar4 = pbVar15 + 4;
                        uVar6 = uVar13 - 6 >> 2;
                        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar15;
                        pbVar12 = pbVar4;
                        pbVar15 = pbVar8 + 4;
                        do {
                            pbVar5 = pbVar15 + 4;
                            *(undefined4 *)pbVar15 = *(undefined4 *)pbVar12;
                            pbVar12 = pbVar12 + 4;
                            pbVar15 = pbVar5;
                        } while (pbVar5 != pbVar8 + (uVar6 + 2) * 4);
                        iVar9 = (uVar6 + 1) * 4;
                        iVar3 = uVar13 + uVar6 * -4 + -6;
                        pbVar12 = pbVar8 + 4 + iVar9;
                        if (iVar3 != 0) {
                            pbVar8 = pbVar12 + -1;
                            pbVar15 = pbVar4 + iVar9;
                            do {
                                pbVar5 = pbVar15 + 1;
                                pbVar8 = pbVar8 + 1;
                                *pbVar8 = *pbVar15;
                                pbVar15 = pbVar5;
                            } while (pbVar5 != pbVar4 + iVar9 + iVar3);
                            pbVar12 = pbVar12 + iVar3;
                        }
                    }
                }
            LAB_0002ccbc:
                pbVar8 = pbVar12;
                if ((uint)((int)pbVar10 - (int)param_1) < 3)
                    goto LAB_0002cef4;
                uVar6 = (uint)*param_1;
                pbVar14 = param_1 + 1;
                if (0xf < uVar6) {
                LAB_0002ccd8:
                    if (uVar6 < 0x40)
                        goto LAB_0002cce0;
                LAB_0002cc24:
                    uVar2 = uVar6 & 0x1f;
                    if (uVar2 < 0x1c) {
                        pbVar15 = (byte *)(uint)*pbVar14;
                        iVar7 = uVar2 << 6;
                        pbVar14 = pbVar14 + 1;
                    } else {
                        pbVar15 = pbVar8 + -iVar7;
                    }
                    uVar13 = (uVar6 >> 5) - 1;
                    if (uVar2 < 0x1c) {
                        uVar2 = iVar7 + ((uint)pbVar15 >> 2);
                        iVar7 = uVar2 + 1;
                        pbVar15 = pbVar8 + ~uVar2;
                    }
                    if (pbVar15 < param_3 || pbVar8 <= pbVar15)
                        goto LAB_0002d030;
                    pbVar12 = pbVar8;
                    if (param_3 + ((int)pbVar11 - (int)pbVar8) <
                        (byte *)((uVar6 >> 5) + 1))
                        goto LAB_0002d020;
                LAB_0002cc80:
                    *pbVar8 = *pbVar15;
                    pbVar4 = pbVar8 + 1;
                    *pbVar4 = pbVar15[1];
                    pbVar12 = pbVar15 + 2;
                    do {
                        pbVar5 = pbVar12 + 1;
                        pbVar4 = pbVar4 + 1;
                        *pbVar4 = *pbVar12;
                        pbVar12 = pbVar5;
                    } while (pbVar5 != pbVar15 + 2 + uVar13);
                    pbVar12 = pbVar8 + uVar13 + 2;
                    goto LAB_0002cb9c;
                }
                if (uVar6 == 0) {
                    iVar9 = 0;
                    pbVar15 = pbVar14;
                    while (true) {
                        pbVar14 = pbVar15 + 1;
                        if (*pbVar15 != 0)
                            break;
                        iVar9 = iVar9 + 0xff;
                        if ((param_1 + 0x1010101 == pbVar14) ||
                            (pbVar15 = pbVar14, pbVar10 == pbVar14))
                            goto LAB_0002cef4;
                    }
                    uVar6 = iVar9 + *pbVar15 + 0xf;
                }
                if (param_3 + ((int)pbVar11 - (int)pbVar12) <
                    (byte *)(uVar6 + 3))
                    goto LAB_0002d020;
                if ((uint)((int)pbVar10 - (int)pbVar14) < uVar6 + 6) {
                LAB_0002cef4:
                    iVar7 = (int)pbVar8 - (int)param_3;
                    break;
                }
                uVar2 = uVar6 - 1;
                pbVar4 = pbVar14 + 4;
                pbVar8 = pbVar12 + 4;
                *(undefined4 *)pbVar12 = *(undefined4 *)pbVar14;
                if (uVar2 != 0) {
                    if (uVar2 < 4) {
                        pbVar12 = pbVar12 + 3;
                        pbVar15 = pbVar4;
                        do {
                            pbVar5 = pbVar15 + 1;
                            pbVar12 = pbVar12 + 1;
                            *pbVar12 = *pbVar15;
                            pbVar15 = pbVar5;
                        } while (pbVar5 != pbVar14 + (int)(uVar6 + 3));
                        pbVar8 = pbVar8 + uVar2;
                        pbVar4 = pbVar4 + uVar2;
                    } else {
                        uVar6 = uVar6 - 5 >> 2;
                        pbVar14 = pbVar4;
                        pbVar15 = pbVar8;
                        do {
                            pbVar5 = pbVar15 + 4;
                            *(undefined4 *)pbVar15 = *(undefined4 *)pbVar14;
                            pbVar14 = pbVar14 + 4;
                            pbVar15 = pbVar5;
                        } while (pbVar5 != pbVar12 + (uVar6 + 2) * 4);
                        iVar9 = (uVar6 + 1) * 4;
                        iVar3 = uVar2 + uVar6 * -4 + -4;
                        pbVar8 = pbVar8 + iVar9;
                        pbVar4 = pbVar4 + iVar9;
                        if (iVar3 != 0) {
                            pbVar14 = pbVar8 + -1;
                            pbVar15 = pbVar4 + iVar3;
                            pbVar12 = pbVar4;
                            do {
                                pbVar4 = pbVar12 + 1;
                                pbVar14 = pbVar14 + 1;
                                *pbVar14 = *pbVar12;
                                pbVar12 = pbVar4;
                            } while (pbVar4 != pbVar15);
                            pbVar8 = pbVar8 + iVar3;
                        }
                    }
                }
            } while (true);
        }
    }
LAB_0002cef8:
    *param_4 = iVar7;
    return 0xfffffffc;
}

undefined4 lzo1z_decompress_dict_safe(byte *param_1, int param_2, byte *param_3,
                                      undefined4 *param_4, undefined4 param_5,
                                      byte *param_6, byte *param_7)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    byte *pbVar4;
    byte *pbVar5;
    byte *pbVar6;
    uint uVar7;
    byte *pbVar8;
    int iVar9;
    byte *pbVar10;
    byte *pbVar11;
    byte *pbVar12;
    byte *pbVar13;
    uint uVar14;
    byte *pbVar15;
    byte *unaff_lr;

    pbVar13 = param_1 + param_2;
    pbVar15 = (byte *)*param_4;
    if (param_6 == (byte *)0x0) {
        param_7 = param_6;
        param_6 = (byte *)0x0;
    } else {
        if ((byte *)0xbfff < param_7) {
            unaff_lr = (byte *)0xbfff;
            pbVar6 = param_7 + -0xbfff;
            param_7 = (byte *)0xbfff;
            param_6 = param_6 + (int)pbVar6;
        }
        param_6 = param_6 + (int)param_7;
    }
    pbVar6 = (byte *)0x0;
    *param_4 = 0;
    if (pbVar13 != param_1) {
        uVar7 = (uint)*param_1;
        pbVar4 = param_3;
        if (uVar7 < 0x12)
            goto LAB_0002d1ec;
        unaff_lr = (byte *)(uVar7 - 0x11);
        pbVar10 = param_1 + 1;
        if ((int)unaff_lr < 4)
            goto LAB_0002d36c;
        pbVar8 = pbVar6;
        if (pbVar15 < unaff_lr) {
        LAB_0002d62c:
            *param_4 = pbVar8;
            return 0xfffffffb;
        }
        if (uVar7 - 0xe <= param_2 - 1U) {
            pbVar4 = param_3 + -1;
            pbVar6 = pbVar10;
            do {
                pbVar8 = pbVar6 + 1;
                pbVar4 = pbVar4 + 1;
                *pbVar4 = *pbVar6;
                pbVar6 = pbVar8;
            } while (pbVar8 != param_1 + (uVar7 - 0x10));
            pbVar10 = pbVar10 + (int)unaff_lr;
            pbVar6 = (byte *)0x0;
            pbVar12 = param_3 + (int)unaff_lr;
        LAB_0002d130:
            uVar7 = (uint)*pbVar10;
            pbVar8 = pbVar12 + -(int)param_3;
            if (0xf < uVar7) {
                pbVar11 = pbVar10 + 1;
                goto LAB_0002d2f4;
            }
            param_1 = pbVar10 + 2;
            iVar9 = uVar7 * 0x40 + (uint)(pbVar10[1] >> 2);
            pbVar6 = (byte *)(iVar9 + 0x701);
            if ((byte *)0x2 < param_3 + ((int)pbVar15 - (int)pbVar12)) {
                if (pbVar8 < pbVar6) {
                    pbVar4 = pbVar6 + -(int)pbVar8;
                    if (param_7 < pbVar4) {
                    LAB_0002d6b8:
                        *param_4 = pbVar8;
                        return 0xfffffffa;
                    }
                    pbVar10 = param_6 + -(int)pbVar4;
                    if (pbVar4 < (byte *)0x3) {
                        memcpy(pbVar12, pbVar10, (size_t)pbVar4);
                        pbVar8 = pbVar12 + (int)(pbVar4 + -1);
                        pbVar10 = param_3;
                        do {
                            pbVar11 = pbVar10 + 1;
                            pbVar8 = pbVar8 + 1;
                            *pbVar8 = *pbVar10;
                            pbVar10 = pbVar11;
                        } while (pbVar11 != param_3 + (3 - (int)pbVar4));
                    } else {
                        bVar1 = pbVar10[2];
                        *(undefined2 *)pbVar12 = *(undefined2 *)pbVar10;
                        pbVar12[2] = bVar1;
                    }
                    pbVar4 = pbVar12 + 3;
                } else {
                    pbVar4 = pbVar12 + 3;
                    bVar1 = pbVar12[-0x6ff - iVar9];
                    *(undefined2 *)pbVar12 =
                        *(undefined2 *)(pbVar12 + (-0x701 - iVar9));
                    pbVar12[2] = bVar1;
                }
            LAB_0002d1cc:
                unaff_lr = (byte *)(param_1[-1] & 3);
                pbVar10 = param_1;
                if ((param_1[-1] & 3) == 0) {
                LAB_0002d1ec:
                    if ((uint)((int)pbVar13 - (int)param_1) < 3)
                        goto LAB_0002d474;
                    uVar7 = (uint)*param_1;
                    pbVar11 = param_1 + 1;
                    if (uVar7 < 0x10)
                        goto code_r0x0002d208;
                    pbVar8 = pbVar4 + -(int)param_3;
                    pbVar12 = pbVar4;
                LAB_0002d2f4:
                    if (uVar7 < 0x40)
                        goto LAB_0002d3dc;
                LAB_0002d2fc:
                    uVar2 = uVar7 & 0x1f;
                    uVar3 = uVar2;
                    param_1 = pbVar11;
                    if (uVar2 < 0x1c) {
                        unaff_lr = (byte *)(uint)*pbVar11;
                        param_1 = pbVar11 + 1;
                        uVar3 = uVar2 * 0x40 + 1;
                    }
                    uVar14 = (uVar7 >> 5) - 1;
                    if (uVar2 < 0x1c) {
                        pbVar6 = (byte *)(uVar3 + ((uint)unaff_lr >> 2));
                    }
                } else {
                LAB_0002d36c:
                    if (param_3 + ((int)pbVar15 - (int)pbVar4) < unaff_lr)
                        goto LAB_0002d628;
                    if (pbVar13 + -(int)pbVar10 < unaff_lr + 3)
                        goto LAB_0002d474;
                    *pbVar4 = *pbVar10;
                    if (unaff_lr == (byte *)0x1) {
                        pbVar8 = pbVar10 + 1;
                        pbVar12 = pbVar4 + 1;
                    } else {
                        pbVar4[1] = pbVar10[1];
                        if (unaff_lr == (byte *)0x3) {
                            pbVar8 = pbVar10 + 3;
                            pbVar4[2] = pbVar10[2];
                            pbVar12 = pbVar4 + 3;
                        } else {
                            pbVar8 = pbVar10 + 2;
                            pbVar12 = pbVar4 + 2;
                        }
                    }
                    pbVar11 = pbVar8 + 1;
                    uVar7 = (uint)*pbVar8;
                    pbVar8 = pbVar12 + -(int)param_3;
                    if (0x3f < uVar7)
                        goto LAB_0002d2fc;
                LAB_0002d3dc:
                    uVar3 = (uint)*pbVar11;
                    pbVar6 = pbVar8;
                    if (uVar7 < 0x20) {
                        if (uVar7 < 0x10) {
                            uVar7 = (uint)(*pbVar11 >> 2) + uVar7 * 0x40;
                            param_1 = pbVar11 + 1;
                            pbVar6 = (byte *)(uVar7 + 1);
                            if (param_3 + ((int)pbVar15 - (int)pbVar12) <
                                (byte *)0x2)
                                goto LAB_0002d62c;
                            if (pbVar8 < pbVar6) {
                                pbVar10 = pbVar6 + -(int)pbVar8;
                                if (param_7 < pbVar10)
                                    goto LAB_0002d6b8;
                                pbVar8 = param_6 + -(int)pbVar10;
                                if (pbVar10 < (byte *)0x2) {
                                    memcpy(pbVar12, pbVar8, (size_t)pbVar10);
                                    pbVar12 = pbVar12 + (int)pbVar10;
                                    pbVar4 = pbVar12 + 1;
                                    *pbVar12 = *param_3;
                                    if (pbVar10 == (byte *)0x0) {
                                        pbVar4 = pbVar12 + 2;
                                        pbVar12[1] = param_3[1];
                                    }
                                    goto LAB_0002d1cc;
                                }
                            } else {
                                uVar7 = ~uVar7;
                                pbVar8 = pbVar12 + uVar7;
                                if (pbVar6 == (byte *)0x1) {
                                    pbVar4 = pbVar12 + 2;
                                    *pbVar12 = pbVar12[uVar7];
                                    pbVar12[1] = pbVar8[1];
                                    goto LAB_0002d1cc;
                                }
                            }
                            pbVar4 = pbVar12 + 2;
                            *(undefined2 *)pbVar12 = *(undefined2 *)pbVar8;
                            goto LAB_0002d1cc;
                        }
                        uVar14 = uVar7 & 7;
                        pbVar4 = pbVar11;
                        if (uVar14 == 0) {
                            while (pbVar11 = pbVar4 + 1, uVar3 == 0) {
                                if (uVar14 == 0xfffffe01)
                                    goto LAB_0002d62c;
                                if (pbVar11 == pbVar13)
                                    goto LAB_0002d478;
                                pbVar4 = pbVar11;
                                uVar14 = uVar14 + 0xff;
                                uVar3 = (uint)*pbVar11;
                            }
                            uVar14 = uVar14 + uVar3 + 7;
                            if ((uint)((int)pbVar13 - (int)pbVar11) < 2)
                                goto LAB_0002d478;
                            uVar3 = (uint)pbVar4[1];
                        }
                        param_1 = pbVar11 + 2;
                        iVar9 = uVar3 * 0x40 + (uint)(pbVar11[1] >> 2) +
                                (uVar7 & 8) * 0x800;
                        if (iVar9 == 0) {
                            *param_4 = pbVar8;
                            if (pbVar13 == param_1) {
                                return 0;
                            }
                            if (pbVar13 <= param_1) {
                                return 0xfffffffc;
                            }
                            return 0xfffffff8;
                        }
                        pbVar6 = (byte *)(iVar9 + 0x4000);
                    } else {
                        uVar14 = uVar7 & 0x1f;
                        pbVar4 = pbVar11;
                        if (uVar14 == 0) {
                            while (pbVar11 = pbVar4 + 1, uVar3 == 0) {
                                if (uVar14 == 0xfffffe01)
                                    goto LAB_0002d62c;
                                if (pbVar11 == pbVar13)
                                    goto LAB_0002d478;
                                pbVar4 = pbVar11;
                                uVar14 = uVar14 + 0xff;
                                uVar3 = (uint)*pbVar11;
                            }
                            uVar14 = uVar14 + uVar3 + 0x1f;
                            if ((uint)((int)pbVar13 - (int)pbVar11) < 2)
                                goto LAB_0002d478;
                            uVar3 = (uint)pbVar4[1];
                        }
                        param_1 = pbVar11 + 2;
                        pbVar6 = (byte *)(uVar3 * 0x40 + 1 +
                                          (uint)(pbVar11[1] >> 2));
                    }
                }
                pbVar10 = (byte *)(uVar14 + 2);
                if (param_3 + ((int)pbVar15 - (int)pbVar12) < pbVar10)
                    goto LAB_0002d62c;
                if (pbVar8 < pbVar6) {
                    pbVar11 = pbVar6 + -(int)pbVar8;
                    if (param_7 < pbVar11)
                        goto LAB_0002d6b8;
                    if (pbVar11 < pbVar10) {
                        memcpy(pbVar12, param_6 + -(int)pbVar11,
                               (size_t)pbVar11);
                        pbVar8 = pbVar12 + (int)(pbVar11 + -1);
                        pbVar4 = param_3;
                        do {
                            pbVar5 = pbVar4 + 1;
                            pbVar8 = pbVar8 + 1;
                            *pbVar8 = *pbVar4;
                            pbVar4 = pbVar5;
                        } while (pbVar5 !=
                                 param_3 + ((int)pbVar10 - (int)pbVar11));
                        goto LAB_0002d35c;
                    }
                    pbVar4 = pbVar12 + (int)pbVar10;
                    memcpy(pbVar12, param_6 + -(int)pbVar11, (size_t)pbVar10);
                } else {
                    pbVar8 = pbVar12 + -(int)pbVar6;
                    if (pbVar6 < pbVar10) {
                        pbVar11 = pbVar12 + -1;
                        pbVar4 = pbVar8;
                        do {
                            pbVar5 = pbVar4 + 1;
                            pbVar11 = pbVar11 + 1;
                            *pbVar11 = *pbVar4;
                            pbVar4 = pbVar5;
                        } while (pbVar5 != pbVar8 + (int)pbVar10);
                    LAB_0002d35c:
                        pbVar4 = pbVar12 + (int)pbVar10;
                    } else {
                        pbVar4 = pbVar12 + (int)pbVar10;
                        memcpy(pbVar12, pbVar8, (size_t)pbVar10);
                    }
                }
                goto LAB_0002d1cc;
            }
            goto LAB_0002d62c;
        }
    }
LAB_0002d478:
    *param_4 = pbVar6;
    return 0xfffffffc;
code_r0x0002d208:
    if (uVar7 == 0) {
        iVar9 = 0;
        pbVar10 = pbVar11;
        while (true) {
            pbVar11 = pbVar10 + 1;
            if (*pbVar10 != 0)
                break;
            iVar9 = iVar9 + 0xff;
            if ((param_1 + 0x1010101 == pbVar11) ||
                (pbVar10 = pbVar11, pbVar13 == pbVar11))
                goto LAB_0002d474;
        }
        uVar7 = iVar9 + *pbVar10 + 0xf;
    }
    if (param_3 + ((int)pbVar15 - (int)pbVar4) < (byte *)(uVar7 + 3)) {
    LAB_0002d628:
        pbVar8 = pbVar4 + -(int)param_3;
        goto LAB_0002d62c;
    }
    if ((uint)((int)pbVar13 - (int)pbVar11) < uVar7 + 6) {
    LAB_0002d474:
        pbVar6 = pbVar4 + -(int)param_3;
        goto LAB_0002d478;
    }
    uVar3 = uVar7 - 1;
    pbVar10 = pbVar11 + 4;
    unaff_lr = *(byte **)pbVar11;
    pbVar12 = pbVar4 + 4;
    *(byte **)pbVar4 = unaff_lr;
    if (uVar3 != 0) {
        if (uVar3 < 4) {
            pbVar4 = pbVar4 + 3;
            pbVar8 = pbVar10;
            do {
                pbVar5 = pbVar8 + 1;
                pbVar4 = pbVar4 + 1;
                *pbVar4 = *pbVar8;
                pbVar8 = pbVar5;
            } while (pbVar5 != pbVar11 + (int)(uVar7 + 3));
            pbVar12 = pbVar12 + uVar3;
            pbVar10 = pbVar10 + uVar3;
        } else {
            uVar7 = uVar7 - 5 >> 2;
            pbVar8 = pbVar12;
            pbVar11 = pbVar10;
            do {
                unaff_lr = *(byte **)pbVar11;
                pbVar5 = pbVar8 + 4;
                *(byte **)pbVar8 = unaff_lr;
                pbVar8 = pbVar5;
                pbVar11 = pbVar11 + 4;
            } while (pbVar5 != pbVar4 + (uVar7 + 2) * 4);
            iVar9 = uVar3 + uVar7 * -4 + -4;
            pbVar12 = pbVar12 + (uVar7 + 1) * 4;
            pbVar10 = pbVar10 + (uVar7 + 1) * 4;
            if (iVar9 != 0) {
                pbVar8 = pbVar12 + -1;
                pbVar11 = pbVar10 + iVar9;
                pbVar4 = pbVar10;
                do {
                    pbVar10 = pbVar4 + 1;
                    pbVar8 = pbVar8 + 1;
                    *pbVar8 = *pbVar4;
                    pbVar4 = pbVar10;
                } while (pbVar10 != pbVar11);
                pbVar12 = pbVar12 + iVar9;
            }
        }
    }
    goto LAB_0002d130;
}

undefined4 FUN_0002d6c4(int param_1, int param_2, int param_3, int param_4)

{
    ushort uVar1;
    short sVar2;
    char *pcVar3;
    uint uVar4;
    uint uVar5;
    char *pcVar6;
    undefined1 uVar7;
    char cVar8;
    int iVar9;
    undefined2 uVar10;
    int iVar11;
    uint uVar12;
    undefined1 *puVar13;
    uint uVar14;
    int iVar15;
    uint uVar16;
    char *pcVar17;
    ushort *puVar18;
    undefined1 *puVar19;
    uint uVar20;
    undefined2 uVar21;
    uint uVar22;
    ushort *puVar23;

    puVar23 = (ushort *)(param_2 + 0x5c);
    if (param_4 == 0) {
        uVar5 = *(uint *)(param_2 + 0x44);
        iVar15 = uVar5 + 1;
        iVar11 = uVar5 + 2;
        uVar21 = (undefined2)uVar5;
        puVar18 = (ushort *)((int)puVar23 + uVar5);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
    } else {
        param_3 = param_3 - param_4;
        uVar5 = *(uint *)(param_2 + 0x44);
        iVar9 = param_3;
        if (param_3 == 0) {
            uVar21 = (undefined2)uVar5;
            iVar15 = uVar5 + 1;
            iVar11 = uVar5 + 2;
            puVar18 = (ushort *)((int)puVar23 + uVar5);
        } else {
            do {
                uVar12 = *(uint *)(param_2 + 0x48);
                if (*(int *)(param_2 + 0x54) == 0) {
                    iVar11 = param_2 + uVar12;
                    iVar11 = param_2 + (((uint) * (byte *)(iVar11 + 0x5e) ^
                                         ((uint) * (byte *)(iVar11 + 0x5d) ^
                                          (uint) * (byte *)(iVar11 + 0x5c) << 5)
                                             << 5) *
                                            0x13ebe000 >>
                                        0x12) *
                                           2;
                    *(short *)(iVar11 + 0x15058) =
                        *(short *)(iVar11 + 0x15058) + -1;
                    iVar11 = param_2 +
                             (uint) * (ushort *)((int)puVar23 + uVar12) * 2;
                    if (uVar12 == *(ushort *)(iVar11 + 0x1d058)) {
                        *(undefined2 *)(iVar11 + 0x1d058) = 0xffff;
                    }
                } else {
                    *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + -1;
                }
                uVar20 = uVar5 + 1;
                iVar15 = param_2 + uVar5 * 2;
                iVar11 =
                    param_2 + (((uint) * (byte *)(param_2 + uVar5 + 0x5e) ^
                                ((uint) * (byte *)(param_2 + uVar20 + 0x5c) ^
                                 (uint) * (byte *)(param_2 + uVar5 + 0x5c) << 5)
                                    << 5) *
                                   0x13ebe000 >>
                               0x12) *
                                  2;
                sVar2 = *(short *)(iVar11 + 0x15058);
                if (sVar2 == 0) {
                    uVar21 = 0xffff;
                } else {
                    uVar21 = *(undefined2 *)(iVar11 + 0x305c);
                }
                *(undefined2 *)(iVar15 + 0xb05c) = uVar21;
                *(short *)(iVar11 + 0x305c) = (short)uVar5;
                uVar4 = *(uint *)(param_2 + 4);
                *(short *)((int)&Elf32_Phdr_ARRAY_00010034[1].p_offset +
                           iVar15 + 2) = (short)uVar4 + 1;
                *(short *)(iVar11 + 0x15058) = sVar2 + 1;
                iVar11 = *(int *)(param_2 + 0x2c);
                uVar22 = *(uint *)(param_2 + 0x40);
                puVar13 = *(undefined1 **)(iVar11 + 0x1c);
                puVar19 = *(undefined1 **)(iVar11 + 0x24);
                *(short *)(param_2 +
                           (*(ushort *)((int)puVar23 + uVar5) + 0xe82c) * 2) =
                    (short)uVar5;
                uVar5 = uVar20;
                if (puVar13 < puVar19) {
                    *(undefined1 **)(iVar11 + 0x1c) = puVar13 + 1;
                    uVar7 = *puVar13;
                    *(undefined1 *)(param_2 + uVar22 + 0x5c) = uVar7;
                    if (uVar22 < uVar4) {
                        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar22) =
                            uVar7;
                        uVar22 = *(uint *)(param_2 + 0x40);
                        uVar12 = *(uint *)(param_2 + 0x48);
                        uVar5 = *(int *)(param_2 + 0x44) + 1;
                    }
                } else {
                    if (*(int *)(param_2 + 0x24) != 0) {
                        *(int *)(param_2 + 0x24) =
                            *(int *)(param_2 + 0x24) + -1;
                    }
                    *(undefined1 *)(param_2 + uVar22 + 0x5c) = 0;
                    if (uVar22 < uVar4) {
                        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar22) = 0;
                        uVar22 = *(uint *)(param_2 + 0x40);
                        uVar12 = *(uint *)(param_2 + 0x48);
                        uVar5 = *(int *)(param_2 + 0x44) + 1;
                    }
                }
                uVar20 = *(uint *)(param_2 + 0x4c);
                *(uint *)(param_2 + 0x40) = uVar22 + 1;
                if (uVar22 + 1 == uVar20) {
                    *(undefined4 *)(param_2 + 0x40) = 0;
                }
                if (uVar20 == uVar5) {
                    uVar21 = 0;
                    uVar5 = 0;
                    iVar11 = 2;
                    iVar15 = 1;
                    *(undefined4 *)(param_2 + 0x44) = 0;
                    puVar18 = puVar23;
                } else {
                    uVar21 = (undefined2)uVar5;
                    iVar15 = uVar5 + 1;
                    iVar11 = uVar5 + 2;
                    *(uint *)(param_2 + 0x44) = uVar5;
                    puVar18 = (ushort *)((int)puVar23 + uVar5);
                }
                uVar12 = uVar12 + 1;
                if (uVar20 == uVar12) {
                    uVar12 = 0;
                }
                iVar9 = iVar9 + -1;
                *(uint *)(param_2 + 0x48) = uVar12;
            } while (iVar9 != 0);
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1 + param_3;
    }
    *(undefined4 *)(param_2 + 0x1c) = 1;
    *(undefined4 *)(param_2 + 0x20) = 0;
    uVar20 = (uint) * (byte *)(param_2 + uVar5 + 0x5c);
    iVar9 = param_2 +
            (((uint) * (byte *)(param_2 + iVar11 + 0x5c) ^
              ((uint) * (byte *)(param_2 + iVar15 + 0x5c) ^ uVar20 << 5) << 5) *
                 0x13ebe000 >>
             0x12) *
                2;
    uVar1 = *(ushort *)(iVar9 + 0x15058);
    uVar12 = (uint)uVar1;
    if (uVar12 == 0) {
        uVar4 = 0xffff;
        *(undefined2 *)(param_2 + (uVar5 + 0x582c) * 2 + 4) = 0xffff;
        *(undefined2 *)(iVar9 + 0x15058) = 1;
        uVar22 = uVar12;
    } else {
        uVar4 = (uint) * (ushort *)(iVar9 + 0x305c);
        *(ushort *)(param_2 + (uVar5 + 0x582c) * 2 + 4) =
            *(ushort *)(iVar9 + 0x305c);
        *(ushort *)(iVar9 + 0x15058) = uVar1 + 1;
        uVar22 = *(uint *)(param_2 + 0xc);
        if (uVar22 == 0 || uVar12 <= uVar22) {
            uVar22 = uVar12;
        }
    }
    *(undefined2 *)(iVar9 + 0x305c) = uVar21;
    uVar12 = *(uint *)(param_2 + 0x24);
    *(uint *)(param_2 + 0x28) = uVar20;
    if (uVar12 < 2) {
        uVar20 = *(uint *)(param_2 + 4);
        if (uVar12 == 0) {
            uVar4 = 0xffffffff;
        }
        iVar9 = *(int *)(param_2 + 0x20);
        if (uVar12 == 0) {
            *(uint *)(param_2 + 0x28) = uVar4;
        }
        uVar16 = *(uint *)(param_2 + 0x1c);
        *(short *)(param_2 + (uVar5 + 0x802c) * 2 + 2) = (short)uVar20 + 1;
        goto LAB_0002d7bc;
    }
    uVar20 = (uint) * (ushort *)(param_2 + (*puVar18 + 0xe82c) * 2);
    if (uVar20 == 0xffff) {
        uVar16 = *(uint *)(param_2 + 0x1c);
        iVar9 = *(int *)(param_2 + 0x20);
        uVar10 = (undefined2)uVar16;
    } else {
        *(undefined4 *)(param_2 + 0x1c) = 2;
        uVar14 = 2;
        if (uVar12 == 2) {
            uVar14 = uVar12;
        }
        *(uint *)(param_2 + 0x30) = uVar20;
        uVar16 = uVar12;
        if (uVar12 != 2) {
            iVar9 = uVar22 - 1;
            cVar8 = *(char *)((int)puVar18 + 1);
            uVar16 = uVar14;
            if (uVar22 != 0) {
                do {
                    pcVar6 = (char *)((int)puVar23 + uVar4);
                    if ((((pcVar6[uVar14 - 1] == cVar8) &&
                          (pcVar6[uVar14] ==
                           *(char *)((int)puVar18 + uVar14))) &&
                         (*pcVar6 == (char)*puVar18)) &&
                        (pcVar6[1] == *(char *)((int)puVar18 + 1))) {
                        pcVar6 = pcVar6 + 2;
                        pcVar3 = (char *)((int)puVar18 + 3);
                        do {
                            pcVar17 = pcVar3;
                            if ((char *)((int)puVar23 + uVar12 + uVar5) <=
                                pcVar17)
                                break;
                            pcVar6 = pcVar6 + 1;
                            pcVar3 = pcVar17 + 1;
                        } while (*pcVar17 == *pcVar6);
                        uVar20 = (int)pcVar17 - (int)puVar18;
                        if (uVar14 < uVar20) {
                            *(uint *)(param_2 + 0x1c) = uVar20;
                            *(uint *)(param_2 + 0x30) = uVar4;
                            if (uVar12 == uVar20) {
                                uVar14 = uVar12 & 0xffff;
                                uVar20 = uVar4;
                                uVar16 = uVar12;
                                goto LAB_0002d97c;
                            }
                            if ((*(uint *)(param_2 + 0x10) <= uVar20) ||
                                (*(ushort *)(param_2 + (uVar4 + 0x802c) * 2 +
                                             2) < uVar20))
                                break;
                            cVar8 = *(char *)((int)puVar18 + (uVar20 - 1));
                            uVar14 = uVar20;
                        }
                    }
                    iVar9 = iVar9 + -1;
                    uVar4 = (uint) * (ushort *)(param_2 + 0xb05c + uVar4 * 2);
                } while (iVar9 != -1);
                uVar16 = *(uint *)(param_2 + 0x1c);
                uVar14 = uVar16 & 0xffff;
                uVar10 = (undefined2)uVar16;
                if (uVar16 < 2) {
                    iVar9 = *(int *)(param_2 + 0x20);
                    goto LAB_0002d994;
                }
                uVar20 = *(uint *)(param_2 + 0x30);
            }
        }
    LAB_0002d97c:
        uVar10 = (undefined2)uVar14;
        if (uVar20 < uVar5) {
            iVar9 = uVar5 - uVar20;
        } else {
            iVar9 = (uVar5 + *(int *)(param_2 + 0x4c)) - uVar20;
        }
        *(int *)(param_2 + 0x20) = iVar9;
    }
LAB_0002d994:
    uVar20 = *(uint *)(param_2 + 4);
    *(undefined2 *)(param_2 + (uVar5 + 0x802c) * 2 + 2) = uVar10;
LAB_0002d7bc:
    uVar12 = *(uint *)(param_2 + 0x48);
    if (*(int *)(param_2 + 0x54) == 0) {
        iVar11 = param_2 + uVar12;
        iVar11 = param_2 + (((uint) * (byte *)(iVar11 + 0x5e) ^
                             ((uint) * (byte *)(iVar11 + 0x5d) ^
                              (uint) * (byte *)(iVar11 + 0x5c) << 5)
                                 << 5) *
                                0x13ebe000 >>
                            0x12) *
                               2;
        *(short *)(iVar11 + 0x15058) = *(short *)(iVar11 + 0x15058) + -1;
        iVar11 = param_2 + (uint) * (ushort *)((int)puVar23 + uVar12) * 2;
        if (uVar12 == *(ushort *)(iVar11 + 0x1d058)) {
            *(undefined2 *)(iVar11 + 0x1d058) = 0xffff;
        }
    } else {
        *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + -1;
    }
    iVar11 = *(int *)(param_2 + 0x2c);
    puVar13 = *(undefined1 **)(iVar11 + 0x1c);
    puVar19 = *(undefined1 **)(iVar11 + 0x24);
    *(undefined2 *)(param_2 + (*puVar18 + 0xe82c) * 2) = uVar21;
    *(uint *)(param_1 + 8) = uVar16;
    *(int *)(param_1 + 0xc) = iVar9;
    uVar22 = *(uint *)(param_2 + 0x40);
    if (puVar13 < puVar19) {
        *(undefined1 **)(iVar11 + 0x1c) = puVar13 + 1;
        uVar7 = *puVar13;
        *(undefined1 *)(param_2 + uVar22 + 0x5c) = uVar7;
    } else {
        uVar7 = 0;
        if (*(int *)(param_2 + 0x24) != 0) {
            *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
        *(undefined1 *)(param_2 + uVar22 + 0x5c) = 0;
    }
    if (uVar22 < uVar20) {
        *(undefined1 *)(*(int *)(param_2 + 0x50) + uVar22) = uVar7;
        uVar22 = *(uint *)(param_2 + 0x40);
        uVar5 = *(uint *)(param_2 + 0x44);
        uVar12 = *(uint *)(param_2 + 0x48);
    }
    iVar11 = *(int *)(param_2 + 0x4c);
    *(uint *)(param_2 + 0x40) = uVar22 + 1;
    iVar9 = uVar5 + 1;
    if (uVar22 + 1 == iVar11) {
        *(undefined4 *)(param_2 + 0x40) = 0;
    }
    if (iVar11 == iVar9) {
        iVar9 = 0;
    }
    *(int *)(param_2 + 0x44) = iVar9;
    iVar9 = uVar12 + 1;
    if (iVar11 == iVar9) {
        iVar9 = 0;
    }
    *(int *)(param_2 + 0x48) = iVar9;
    if (*(int *)(param_2 + 0x28) < 0) {
        uVar5 = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
    } else {
        uVar5 = ~*(uint *)(param_2 + 0x24);
        *(uint *)(param_1 + 4) = *(uint *)(param_2 + 0x24) + 1;
    }
    iVar9 = *(int *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + uVar5;
    if (((iVar9 != 0) && (*(code **)(iVar9 + 8) != (code *)0x0)) &&
        (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x30))) {
        (**(code **)(iVar9 + 8))(iVar9, *(uint *)(param_1 + 0x30),
                                 *(undefined4 *)(param_1 + 0x34), 0);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x400;
    }
    return 0;
}

int lzo2a_999_compress_callback(void *param_1, uint param_2, byte *param_3,
                                undefined4 *param_4, undefined4 *param_5,
                                int param_6, int param_7)

{
    uint uVar1;
    int iVar2;
    byte *pbVar3;
    byte *pbVar4;
    uint uVar5;
    byte *pbVar6;
    byte *pbVar7;
    int iVar8;
    byte bVar9;
    undefined4 uVar10;
    byte bVar11;
    uint uVar12;
    byte *pbVar13;
    uint uVar14;
    uint uVar15;
    void *pvVar16;
    uint uVar17;
    uint uVar18;
    bool bVar19;
    bool bVar20;
    byte *local_a0;
    undefined4 local_84;
    uint local_80;
    uint local_7c;
    uint local_78;
    undefined4 local_74;
    undefined4 local_70;
    void *local_68;
    void *local_64;
    void *local_60;
    int local_58;
    undefined4 local_54;
    byte *local_50;
    undefined4 local_4c;
    int local_48;
    undefined4 local_44;
    undefined4 local_40;
    int local_3c;
    int local_38;
    int local_34;
    int local_30;
    undefined4 local_2c;

    pvVar16 = (void *)((int)param_1 + param_2);
    param_5[0x13] = 0x27ff;
    local_84 = 1;
    *param_5 = 0x1fff;
    param_5[2] = 1;
    param_5[0xb] = &local_84;
    param_5[7] = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_70 = 0;
    local_74 = 0;
    local_4c = 0;
    local_50 = (byte *)0x0;
    local_54 = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    local_3c = 0;
    param_5[8] = 0;
    param_5[5] = 0;
    param_5[6] = 0;
    param_5[1] = 0x800;
    param_5[3] = 0x800;
    param_5[4] = 0x800;
    local_58 = param_6;
    param_5[0x14] = (int)param_5 + 0x285b;
    param_5[0x15] = 0x1fff;
    local_68 = param_1;
    local_64 = param_1;
    local_60 = pvVar16;
    memset(param_5 + 0x5416, 0, 0x8000);
    memset(param_5 + 0x7416, 0xff, 0x20000);
    param_5[0x10] = 0;
    param_5[0xe] = 0;
    param_5[0xd] = 0;
    param_5[0xf] = 0;
    param_5[0x11] = 0;
    param_5[0x16] = 0;
    param_5[9] = param_2;
    if (param_2 == 0) {
        param_5[0x12] = 0x800;
    LAB_0002dee4:
        *(undefined1 *)((int)param_5 + param_2 + 0x5e) = 0;
        *(undefined1 *)((int)param_5 + param_2 + 0x5d) = 0;
        *(undefined1 *)((int)param_5 + param_2 + 0x5c) = 0;
    } else if (param_2 < 0x801) {
        memcpy(param_5 + 0x17, param_1, param_2);
        param_5[0x10] = param_2;
        param_5[0x12] = 0x800;
        local_68 = pvVar16;
        if (param_2 < 3)
            goto LAB_0002dee4;
    } else {
        param_5[9] = 0x800;
        memcpy(param_5 + 0x17, param_1, 0x800);
        param_5[0x10] = 0x800;
        param_5[0x12] = 0x800;
        local_68 = (void *)((int)param_1 + 0x800);
    }
    param_5[5] = 0;
    if (param_7 != 0) {
        param_5[3] = param_7;
    }
    iVar2 = FUN_0002d6c4(&local_84, param_5, 0);
    if (iVar2 != 0) {
        return iVar2;
    }
    uVar12 = 0;
    uVar14 = 0;
    local_a0 = (byte *)0x0;
    pbVar13 = param_3;
    while (uVar17 = uVar14 + 1, pbVar6 = pbVar13, uVar5 = uVar14,
           local_80 != 0) {
    LAB_0002df58:
        uVar14 = uVar17;
        uVar1 = local_78;
        uVar17 = local_7c;
        pbVar3 = local_a0;
        uVar15 = local_7c - 2;
        bVar9 = (byte)local_78;
        if (3 < uVar15) {
            if (local_7c < 10)
                goto LAB_0002dfe8;
            if (local_7c < local_80) {
                bVar11 = *(byte *)(param_5 + 10);
                FUN_0002d6c4(&local_84, param_5, 1, 0);
                if ((local_7c - 2 < 4) && (local_78 < 0x101)) {
                    iVar2 = 1;
                    goto LAB_0002e064;
                }
            LAB_0002e2e4:
                iVar2 = 1;
                goto LAB_0002e2e8;
            }
            uVar10 = 1;
            uVar12 = uVar12 | 1 << (uVar5 & 0xff);
        LAB_0002e1b4:
            if (uVar5 == 0) {
                uVar12 = uVar12 | 2;
                uVar14 = 2;
                pbVar7 = pbVar6 + 1;
                local_a0 = pbVar6;
            } else {
                pbVar13 = pbVar6;
                uVar18 = uVar14;
                if (7 < uVar14) {
                    uVar18 = uVar5 - 7;
                    pbVar7 = pbVar6 + 1;
                    if (uVar18 != 0) {
                        local_a0 = pbVar6;
                    }
                    *pbVar3 = (byte)uVar12;
                    uVar12 = uVar12 >> 8;
                    pbVar13 = pbVar7;
                    if (uVar18 == 0) {
                        uVar12 = uVar12 | 1;
                        uVar14 = 1;
                        local_a0 = pbVar6;
                        goto LAB_0002e1cc;
                    }
                }
                pbVar6 = local_a0;
                uVar14 = uVar18 + 1;
                uVar12 = uVar12 | 1 << (uVar18 & 0xff);
                pbVar7 = pbVar13;
                if (7 < uVar14) {
                    uVar14 = uVar18 - 7;
                    if (uVar14 != 0) {
                        pbVar7 = pbVar13 + 1;
                        local_a0 = pbVar13;
                    }
                    *pbVar6 = (byte)uVar12;
                    uVar12 = uVar12 >> 8;
                }
            }
        LAB_0002e1cc:
            bVar9 = bVar9 & 0x1f;
            pbVar13 = pbVar7 + 2;
            bVar11 = (byte)((uVar1 << 0x13) >> 0x18);
            if (uVar17 < 10) {
                pbVar7[1] = bVar11;
                *pbVar7 = bVar9 | (char)uVar15 * ' ';
                local_34 = local_34 + 1;
            } else {
                uVar5 = uVar17 - 9;
                *pbVar7 = bVar9;
                pbVar7[1] = bVar11;
                for (; 0xff < uVar5; uVar5 = uVar5 - 0xff) {
                    *pbVar13 = 0;
                    pbVar13 = pbVar13 + 1;
                }
                *pbVar13 = (byte)uVar5;
                pbVar13 = pbVar13 + 1;
                local_30 = local_30 + 1;
            }
        LAB_0002e1f8:
            FUN_0002d6c4(&local_84, param_5, uVar17, uVar10);
        LAB_0002e0b4:
            uVar17 = uVar14 + 1;
            local_50 = (byte *)((int)pbVar13 - (int)param_3);
            pbVar6 = pbVar13;
            uVar5 = uVar14;
            if (local_80 == 0)
                break;
            goto LAB_0002df58;
        }
        if (0x100 < local_78) {
        LAB_0002dfe8:
            if (2 < local_7c) {
                if (local_7c < local_80) {
                    bVar11 = *(byte *)(param_5 + 10);
                    FUN_0002d6c4(&local_84, param_5, 1, 0);
                    bVar20 = 0xff < uVar1;
                    bVar19 = uVar1 == 0x100;
                    if (uVar1 < 0x101) {
                        bVar20 = 2 < uVar15;
                        bVar19 = uVar15 == 3;
                    }
                    if (bVar20 && !bVar19) {
                        if (3 < local_7c - 2)
                            goto LAB_0002e2e4;
                        iVar2 = 1;
                        if (local_78 < 0x101)
                            goto LAB_0002e064;
                        goto LAB_0002e2e8;
                    }
                    iVar2 = 1;
                    iVar8 = 0;
                    goto LAB_0002e410;
                }
                uVar10 = 1;
            LAB_0002e2f8:
                bVar20 = 0xff < uVar1;
                bVar19 = uVar1 == 0x100;
                if (uVar1 < 0x101) {
                    bVar20 = 2 < uVar15;
                    bVar19 = uVar15 == 3;
                }
                uVar12 = uVar12 | 1 << (uVar5 & 0xff);
                if (bVar20 && !bVar19)
                    goto LAB_0002e1b4;
                goto LAB_0002df84;
            }
            pbVar7 = pbVar6 + 1;
            if (uVar5 == 0) {
                uVar14 = 1;
                pbVar4 = pbVar7;
                pbVar13 = pbVar6 + 2;
                local_a0 = pbVar6;
            } else {
                pbVar4 = pbVar6;
                pbVar13 = pbVar7;
                if (7 < uVar14) {
                    uVar14 = uVar5 - 7;
                    pbVar13 = pbVar6;
                    if (uVar14 != 0) {
                        pbVar13 = pbVar6 + 2;
                        local_a0 = pbVar6;
                    }
                    *pbVar3 = (byte)uVar12;
                    uVar12 = uVar12 >> 8;
                    pbVar4 = pbVar7;
                    if (uVar14 == 0) {
                        pbVar4 = pbVar13;
                        pbVar13 = pbVar7;
                    }
                }
            }
            *pbVar4 = (byte)param_5[10];
            local_48 = local_48 + 1;
            FUN_0002d6c4(&local_84, param_5, 1, 0);
            goto LAB_0002e0b4;
        }
        if (local_80 <= local_7c) {
            uVar10 = 1;
            uVar12 = uVar12 | 1 << (uVar5 & 0xff);
        LAB_0002df84:
            pbVar3 = pbVar6 + 1;
            if (uVar5 == 0) {
                uVar5 = 2;
                local_a0 = pbVar3;
                pbVar3 = pbVar6 + 2;
                pbVar7 = pbVar6;
            LAB_0002df98:
                uVar14 = uVar5 + 2;
                pbVar6 = local_a0;
                pbVar4 = pbVar3;
                local_a0 = pbVar7;
            LAB_0002dfa8:
                pbVar3 = pbVar6;
                pbVar6 = local_a0;
                uVar12 = uVar12 | uVar15 << (uVar5 & 0xff);
                pbVar13 = pbVar4;
                if (7 < uVar14) {
                    uVar14 = uVar5 - 6;
                    pbVar7 = pbVar3;
                    if (uVar14 != 0) {
                        pbVar13 = pbVar4 + 1;
                        pbVar7 = pbVar4;
                        local_a0 = pbVar3;
                    }
                    pbVar3 = pbVar7;
                    *pbVar6 = (byte)uVar12;
                    uVar12 = uVar12 >> 8;
                }
            } else {
                pbVar13 = pbVar3;
                pbVar7 = local_a0;
                pbVar4 = pbVar6;
                if (uVar14 < 8) {
                LAB_0002e360:
                    local_a0 = pbVar4;
                    pbVar3 = pbVar13;
                    uVar5 = uVar14 + 1;
                    if (uVar5 < 8)
                        goto LAB_0002df98;
                    uVar5 = uVar14 - 7;
                    *pbVar7 = (byte)uVar12;
                    uVar12 = uVar12 >> 8;
                    pbVar13 = pbVar3 + 1;
                    if (uVar5 == 0) {
                        uVar14 = 2;
                        uVar12 = uVar15 | uVar12;
                        goto LAB_0002dfd0;
                    }
                    uVar14 = uVar14 - 5;
                    pbVar6 = pbVar3;
                    pbVar4 = pbVar13;
                    goto LAB_0002dfa8;
                }
                uVar14 = uVar5 - 7;
                *local_a0 = (byte)uVar12;
                pbVar13 = pbVar6 + 2;
                uVar12 = uVar12 >> 8;
                pbVar7 = pbVar6;
                pbVar4 = pbVar3;
                if (uVar14 != 0)
                    goto LAB_0002e360;
                uVar12 = uVar12 | uVar15 * 2;
                uVar14 = 3;
                local_a0 = pbVar6;
            }
        LAB_0002dfd0:
            *pbVar3 = bVar9 - 1;
            local_38 = local_38 + 1;
            goto LAB_0002e1f8;
        }
        bVar11 = *(byte *)(param_5 + 10);
        FUN_0002d6c4(&local_84, param_5, 1, 0);
        iVar2 = 2;
        iVar8 = 2;
    LAB_0002e410:
        if ((local_7c - 2 < 4) && (local_78 < 0x101)) {
        LAB_0002e064:
            if (iVar2 == 1) {
                iVar2 = 1;
            } else {
                iVar2 = iVar2 + -1;
            }
        } else {
            iVar2 = iVar2 + iVar8;
        }
    LAB_0002e2e8:
        if (local_7c < iVar2 + uVar17) {
            uVar10 = 2;
            goto LAB_0002e2f8;
        }
        pbVar7 = pbVar6 + 1;
        local_3c = local_3c + 1;
        if (uVar5 == 0) {
            uVar14 = 1;
            pbVar4 = pbVar7;
            pbVar13 = pbVar6 + 2;
            local_a0 = pbVar6;
        } else {
            pbVar4 = pbVar6;
            pbVar13 = pbVar7;
            if (7 < uVar14) {
                uVar14 = uVar5 - 7;
                pbVar13 = pbVar6;
                if (uVar14 != 0) {
                    pbVar13 = pbVar6 + 2;
                    local_a0 = pbVar6;
                }
                *pbVar3 = (byte)uVar12;
                uVar12 = uVar12 >> 8;
                pbVar4 = pbVar7;
                if (uVar14 == 0) {
                    pbVar4 = pbVar13;
                    pbVar13 = pbVar7;
                }
            }
        }
        *pbVar4 = bVar11;
        local_48 = local_48 + 1;
    }
    bVar9 = 1;
    uVar12 = uVar12 | 1 << (uVar14 & 0xff);
    if (uVar14 == 0) {
        uVar5 = uVar12 | 1 << (uVar17 & 0xff);
        pbVar6 = pbVar13 + 1;
        uVar12 = 2;
    LAB_0002e32c:
        bVar11 = (byte)uVar5;
        bVar9 = ~(byte)(-1 << (uVar12 & 0xff));
    } else {
        local_50 = pbVar13;
        uVar5 = uVar12;
        if (uVar17 < 8) {
        LAB_0002e100:
            uVar12 = uVar17 + 1;
            uVar5 = uVar5 | 1 << (uVar17 & 0xff);
            pbVar6 = local_50;
            pbVar13 = local_a0;
            if (uVar12 < 8)
                goto LAB_0002e32c;
            *local_a0 = (byte)uVar5;
            if (uVar17 - 7 == 0) {
                *local_50 = 0x20;
                local_50[1] = 0;
                goto LAB_0002e158;
            }
            bVar11 = (byte)(uVar5 >> 8);
            bVar9 = (char)(1 << (uVar17 - 7 & 0xff)) - 1;
            pbVar6 = local_50 + 1;
            pbVar13 = local_50;
        } else {
            uVar17 = uVar14 - 7;
            pbVar6 = pbVar13 + 1;
            *local_a0 = (byte)uVar12;
            local_50 = pbVar6;
            uVar5 = uVar12 >> 8;
            local_a0 = pbVar13;
            if (uVar17 != 0)
                goto LAB_0002e100;
            bVar11 = (byte)(uVar12 >> 8) | 1;
        }
    }
    *pbVar6 = 0x20;
    pbVar6[1] = 0;
    *pbVar13 = bVar11 & bVar9;
    local_50 = pbVar6;
LAB_0002e158:
    local_50 = local_50 + (2 - (int)param_3);
    *param_4 = local_50;
    if (local_58 == 0) {
        return 0;
    }
    if (*(code **)(local_58 + 8) == (code *)0x0) {
        return 0;
    }
    (**(code **)(local_58 + 8))(local_58, local_54, local_50, 0);
    return 0;
}

void lzo2a_999_compress(void)

{
    lzo2a_999_compress_callback();
    return;
}

undefined4 lzo2a_decompress(byte *param_1, int param_2, undefined1 *param_3,
                            int *param_4)

{
    byte bVar1;
    byte *pbVar2;
    byte *pbVar3;
    undefined1 *puVar4;
    uint uVar5;
    uint uVar6;
    undefined1 *puVar7;
    uint uVar8;
    uint uVar9;
    undefined1 *puVar10;
    undefined1 *puVar11;
    uint uVar12;
    int iVar13;
    undefined1 *puVar14;
    bool bVar15;

    uVar8 = 0;
    uVar5 = 0;
    pbVar2 = param_1;
    puVar7 = param_3;
LAB_0002e570:
    do {
        uVar12 = (uint)*pbVar2;
        uVar6 = uVar5;
        uVar9 = uVar8;
        if (uVar8 != 0)
            goto LAB_0002e5fc;
        while (true) {
            uVar8 = uVar12 | uVar5;
            uVar5 = uVar8 >> 1;
            uVar12 = (uint)pbVar2[1];
            if ((uVar8 & 1) == 0)
                goto LAB_0002e67c;
            uVar6 = uVar5 & 1;
            uVar5 = uVar8 >> 2;
            if (uVar6 == 0)
                break;
            uVar9 = 6;
            pbVar3 = pbVar2 + 1;
            while (true) {
                pbVar2 = pbVar3 + 2;
                puVar10 = puVar7 + -(uVar12 & 0x1f | (uint)pbVar3[1] << 5);
                if (uVar12 >> 5 == 0) {
                    iVar13 = 9;
                    bVar1 = pbVar3[2];
                    while (bVar1 == 0) {
                        pbVar2 = pbVar2 + 1;
                        iVar13 = iVar13 + 0xff;
                        bVar1 = *pbVar2;
                    }
                    pbVar2 = pbVar2 + 1;
                    iVar13 = (uint)bVar1 + iVar13;
                } else {
                    if (puVar7 == puVar10) {
                        *param_4 = (int)puVar7 - (int)param_3;
                        if (param_1 + param_2 == pbVar2) {
                            return 0;
                        }
                        if (param_1 + param_2 <= pbVar2) {
                            return 0xfffffffc;
                        }
                        return 0xfffffff8;
                    }
                    iVar13 = (uVar12 >> 5) + 2;
                }
                puVar4 = puVar7 + -1;
                puVar14 = puVar10;
                do {
                    puVar11 = puVar14 + 1;
                    puVar4 = puVar4 + 1;
                    *puVar4 = *puVar14;
                    puVar14 = puVar11;
                } while (puVar11 != puVar10 + iVar13);
                puVar7 = puVar7 + iVar13;
                uVar12 = (uint)*pbVar2;
                uVar6 = uVar5;
                if (uVar9 == 0)
                    break;
            LAB_0002e5fc:
                uVar5 = uVar6 >> 1;
                uVar8 = uVar9 - 1;
                if ((uVar6 & 1) == 0)
                    goto LAB_0002e680;
                if (uVar8 == 0) {
                    uVar8 = uVar5 | uVar12;
                    uVar12 = (uint)pbVar2[1];
                    uVar5 = uVar8 >> 1;
                    if ((uVar8 & 1) == 0) {
                        pbVar3 = pbVar2 + 2;
                        uVar8 = 5;
                        goto LAB_0002e648;
                    }
                    uVar9 = 7;
                    pbVar3 = pbVar2 + 1;
                } else {
                    bVar15 = (uVar5 & 1) != 0;
                    uVar8 = uVar9 - 2;
                    if (bVar15) {
                        uVar9 = uVar8;
                    }
                    uVar5 = uVar6 >> 2;
                    pbVar3 = pbVar2;
                    if (!bVar15) {
                        pbVar3 = pbVar2 + 1;
                        if (1 < uVar8)
                            goto LAB_0002e6e8;
                        uVar5 = uVar5 | uVar12 << (uVar8 & 0xff);
                        uVar8 = uVar9 + 4;
                        uVar12 = (uint)pbVar2[1];
                        pbVar3 = pbVar2 + 2;
                        goto LAB_0002e648;
                    }
                }
            }
        }
        pbVar3 = pbVar2 + 2;
        uVar8 = 6;
    LAB_0002e6e8:
        uVar8 = uVar8 - 2;
    LAB_0002e648:
        iVar13 = (uVar5 & 3) + 2;
        uVar5 = uVar5 >> 2;
        puVar14 = puVar7 + -1;
        puVar10 = puVar7 + ~uVar12;
        do {
            puVar4 = puVar10 + 1;
            puVar14 = puVar14 + 1;
            *puVar14 = *puVar10;
            puVar10 = puVar4;
        } while (puVar4 != puVar7 + ~uVar12 + iVar13);
        puVar7 = puVar7 + iVar13;
        pbVar2 = pbVar3;
    } while (true);
LAB_0002e67c:
    uVar8 = 7;
    pbVar2 = pbVar2 + 1;
LAB_0002e680:
    *puVar7 = (char)uVar12;
    pbVar2 = pbVar2 + 1;
    puVar7 = puVar7 + 1;
    goto LAB_0002e570;
}

undefined4 lzo2a_decompress_safe(byte *param_1, int param_2, byte *param_3,
                                 int *param_4)

{
    uint uVar1;
    byte bVar2;
    byte *pbVar3;
    byte *pbVar4;
    uint uVar5;
    uint uVar6;
    byte *pbVar7;
    uint uVar8;
    byte *pbVar9;
    byte *pbVar10;
    byte *pbVar11;
    byte *pbVar12;
    int iVar13;

    pbVar4 = param_1 + param_2;
    pbVar9 = param_3 + *param_4;
    if (param_1 < pbVar4) {
        uVar5 = 0;
        uVar8 = 0;
        pbVar12 = param_3;
        do {
            while (uVar8 == 0) {
                if (param_1 == pbVar4)
                    goto LAB_0002e968;
                bVar2 = *param_1;
                param_1 = param_1 + 1;
                uVar8 = bVar2 | uVar5;
                if ((uVar8 & 1) != 0) {
                    uVar5 = uVar8 >> 2;
                    if ((uVar8 >> 1 & 1) == 0) {
                        uVar6 = 6;
                    LAB_0002e90c:
                        uVar8 = uVar6 - 2;
                        goto LAB_0002e814;
                    }
                    uVar6 = 6;
                    pbVar10 = param_1;
                    goto LAB_0002e898;
                }
                uVar6 = 7;
                uVar1 = uVar8 >> 1;
            LAB_0002e794:
                uVar5 = uVar1;
                if (pbVar4 == param_1) {
                LAB_0002e968:
                    *param_4 = (int)pbVar12 - (int)param_3;
                    return 0xfffffffc;
                }
                if (pbVar9 == pbVar12) {
                LAB_0002e978:
                    *param_4 = (int)pbVar12 - (int)param_3;
                    return 0xfffffffb;
                }
                bVar2 = *param_1;
                param_1 = param_1 + 1;
                pbVar10 = pbVar12 + 1;
                *pbVar12 = bVar2;
            LAB_0002e7bc:
                uVar8 = uVar6;
                pbVar12 = pbVar10;
                if (pbVar4 <= param_1)
                    goto LAB_0002e884;
            }
            uVar1 = uVar5 >> 1;
            uVar6 = uVar8 - 1;
            if ((uVar5 & 1) == 0)
                goto LAB_0002e794;
            if (uVar6 == 0) {
                if (param_1 == pbVar4)
                    goto LAB_0002e968;
                bVar2 = *param_1;
                param_1 = param_1 + 1;
                uVar5 = (bVar2 | uVar1) >> 1;
                if (((bVar2 | uVar1) & 1) == 0) {
                    uVar8 = 5;
                    goto LAB_0002e814;
                }
                uVar6 = 7;
                pbVar10 = param_1;
            LAB_0002e898:
                if ((uint)((int)pbVar4 - (int)pbVar10) < 2)
                    goto LAB_0002e968;
                param_1 = pbVar10 + 2;
                uVar8 = (uint)(*pbVar10 >> 5);
                pbVar10 = pbVar12 + -(*pbVar10 & 0x1f | (uint)pbVar10[1] << 5);
                if (uVar8 == 0) {
                    if (param_1 == pbVar4)
                        goto LAB_0002e968;
                    iVar13 = 9;
                    pbVar3 = param_1;
                    while (true) {
                        param_1 = pbVar3 + 1;
                        if (*pbVar3 != 0)
                            break;
                        iVar13 = iVar13 + 0xff;
                        if (iVar13 == -0x1f6)
                            goto LAB_0002e978;
                        pbVar3 = param_1;
                        if (param_1 == pbVar4)
                            goto LAB_0002e968;
                    }
                    uVar8 = (uint)*pbVar3 + iVar13;
                } else {
                    if (pbVar10 == pbVar12) {
                        *param_4 = (int)pbVar12 - (int)param_3;
                        if (pbVar4 == param_1) {
                            return 0;
                        }
                        if (pbVar4 <= param_1) {
                            return 0xfffffffc;
                        }
                        return 0xfffffff8;
                    }
                    uVar8 = uVar8 + 2;
                }
                if (pbVar10 < param_3 || pbVar12 <= pbVar10) {
                LAB_0002e988:
                    *param_4 = (int)pbVar12 - (int)param_3;
                    return 0xfffffffa;
                }
                if ((uint)((int)pbVar9 - (int)pbVar12) < uVar8)
                    goto LAB_0002e978;
                pbVar7 = pbVar12 + -1;
                pbVar3 = pbVar10;
                do {
                    pbVar11 = pbVar3 + 1;
                    pbVar7 = pbVar7 + 1;
                    *pbVar7 = *pbVar3;
                    pbVar3 = pbVar11;
                } while (pbVar11 != pbVar10 + uVar8);
                pbVar10 = pbVar12 + uVar8;
                goto LAB_0002e7bc;
            }
            uVar5 = uVar5 >> 2;
            uVar6 = uVar8 - 2;
            pbVar10 = param_1;
            if ((uVar1 & 1) != 0)
                goto LAB_0002e898;
            if (1 < uVar6)
                goto LAB_0002e90c;
            if (param_1 == pbVar4)
                goto LAB_0002e968;
            bVar2 = *param_1;
            param_1 = param_1 + 1;
            uVar8 = uVar8 + 4;
            uVar5 = uVar5 | (uint)bVar2 << (uVar6 & 0xff);
        LAB_0002e814:
            uVar6 = (uVar5 & 3) + 2;
            uVar5 = uVar5 >> 2;
            if (pbVar4 == param_1)
                goto LAB_0002e968;
            if ((uint)((int)pbVar9 - (int)pbVar12) < uVar6)
                goto LAB_0002e978;
            bVar2 = *param_1;
            param_1 = param_1 + 1;
            pbVar10 = pbVar12 + ~(uint)bVar2;
            if (pbVar10 < param_3 || pbVar12 <= pbVar10)
                goto LAB_0002e988;
            pbVar7 = pbVar12 + -1;
            pbVar3 = pbVar10;
            do {
                pbVar11 = pbVar3 + 1;
                pbVar7 = pbVar7 + 1;
                *pbVar7 = *pbVar3;
                pbVar3 = pbVar11;
            } while (pbVar10 + uVar6 != pbVar11);
            pbVar10 = pbVar12 + uVar6;
            pbVar12 = pbVar10;
        } while (param_1 < pbVar4);
    LAB_0002e884:
        iVar13 = (int)pbVar10 - (int)param_3;
    } else {
        iVar13 = 0;
    }
    *param_4 = iVar13;
    return 0xfffffff9;
}

undefined *lzo_get_crc32_table(void)

{
    return &DAT_00032274;
}

uint lzo_crc32(uint param_1, byte *param_2, uint param_3)

{
    uint uVar1;
    uint uVar2;
    byte *pbVar3;
    byte *pbVar4;

    if (param_2 != (byte *)0x0) {
        param_1 = ~param_1;
        if (0xf < param_3) {
            uVar1 = param_3 - 0x10 >> 4;
            pbVar3 = param_2 + 0x10;
            do {
                pbVar4 = pbVar3 + 0x10;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-0x10] ^ param_1) & 0xff) * 4) ^
                        param_1 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-0xf] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-0xe] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-0xd] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-0xc] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-0xb] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-10] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-9] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-8] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-7] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-6] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-5] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-4] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-3] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                uVar2 = *(uint *)(&DAT_00032274 +
                                  ((pbVar3[-2] ^ uVar2) & 0xff) * 4) ^
                        uVar2 >> 8;
                param_1 = *(uint *)(&DAT_00032274 +
                                    ((pbVar3[-1] ^ uVar2) & 0xff) * 4) ^
                          uVar2 >> 8;
                pbVar3 = pbVar4;
            } while (param_2 + uVar1 * 0x10 + 0x20 != pbVar4);
            param_2 = param_2 + (uVar1 + 1) * 0x10;
            param_3 = param_3 & 0xf;
        }
        if (param_3 != 0) {
            pbVar3 = param_2;
            do {
                pbVar4 = pbVar3 + 1;
                param_1 = *(uint *)(&DAT_00032274 +
                                    ((*pbVar3 ^ param_1) & 0xff) * 4) ^
                          param_1 >> 8;
                pbVar3 = pbVar4;
            } while (pbVar4 != param_2 + param_3);
        }
        return ~param_1;
    }
    return 0;
}

int FUN_0002ebdc(int param_1, int param_2)

{
    return param_1 + param_2;
}

int _lzo_config_check(void)

{
    byte bVar1;
    byte bVar2;
    byte bVar3;
    byte bVar4;
    int *piVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    undefined4 extraout_r3;
    uint extraout_r3_00;
    uint uVar9;
    int iVar10;
    uint uVar11;
    undefined4 local_18;
    undefined4 local_14;

    local_18 = 0;
    local_14 = 0;
    FUN_0002ebdc(&local_18, 0, 0xffffff80);
    local_18 = 0x2000001;
    piVar5 = (int *)FUN_0002ebdc(extraout_r3, 1);
    uVar9 = extraout_r3_00;
    if ((short)*piVar5 != 0) {
        uVar9 = 0;
    }
    if ((short)*piVar5 != 0) {
        uVar9 = 0;
    }
    if ((short)*piVar5 == 0x80) {
        uVar9 = uVar9 & 1;
    } else {
        uVar9 = 0;
    }
    if ((short)*piVar5 != -0x7e80) {
        uVar9 = 0;
    }
    if ((short)*piVar5 != -0x7e80) {
        uVar9 = 0;
    }
    if (*piVar5 != 0) {
        uVar9 = 0;
    }
    if (*piVar5 != 0) {
        uVar9 = 0;
    }
    if (*piVar5 != 0x80) {
        uVar9 = 0;
    }
    if (*piVar5 != -0x7c7d7e80) {
        uVar9 = 0;
    }
    if (*piVar5 != -0x7c7d7e80) {
        uVar9 = 0;
    }
    if (uVar9 != 0) {
        iVar8 = 1;
        uVar6 = 0x1f;
        uVar9 = 0x1f;
        while (true) {
            iVar8 = iVar8 << 1;
            uVar11 = uVar9 - 1;
            if (uVar6 != uVar9 || iVar8 == 0)
                break;
            uVar6 = LZCOUNT(iVar8);
            uVar9 = uVar11;
        }
        if (uVar6 == uVar9) {
            iVar8 = 1;
            iVar7 = 0;
            iVar10 = 0;
            do {
                iVar8 = iVar8 << 1;
                uVar9 = (uint)(iVar10 == iVar7);
                if (iVar8 == 0) {
                    uVar11 = 0;
                }
                bVar2 = (byte)iVar8;
                bVar3 = (byte)((uint)iVar8 >> 8);
                bVar4 = (byte)((uint)iVar8 >> 0x10);
                bVar1 = (byte)((uint)iVar8 >> 0x18);
                if (iVar8 != 0) {
                    uVar11 = uVar9;
                }
                iVar7 = iVar7 + 1;
                iVar10 = LZCOUNT(
                    (uint)(byte)(((((((bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                         << 1 |
                                     bVar2 >> 3 & 1)
                                        << 1 |
                                    bVar2 >> 4 & 1)
                                       << 1 |
                                   bVar2 >> 5 & 1)
                                      << 1 |
                                  bVar2 >> 6 & 1)
                                     << 1 |
                                 bVar2 >> 7)
                        << 0x18 |
                    (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                      bVar3 >> 2 & 1)
                                         << 1 |
                                     bVar3 >> 3 & 1)
                                        << 1 |
                                    bVar3 >> 4 & 1)
                                       << 1 |
                                   bVar3 >> 5 & 1)
                                      << 1 |
                                  bVar3 >> 6 & 1)
                                     << 1 |
                                 bVar3 >> 7)
                        << 0x10 |
                    (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                      bVar4 >> 2 & 1)
                                         << 1 |
                                     bVar4 >> 3 & 1)
                                        << 1 |
                                    bVar4 >> 4 & 1)
                                       << 1 |
                                   bVar4 >> 5 & 1)
                                      << 1 |
                                  bVar4 >> 6 & 1)
                                     << 1 |
                                 bVar4 >> 7)
                        << 8 |
                    (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                      bVar1 >> 2 & 1)
                                         << 1 |
                                     bVar1 >> 3 & 1)
                                        << 1 |
                                    bVar1 >> 4 & 1)
                                       << 1 |
                                   bVar1 >> 5 & 1)
                                      << 1 |
                                  bVar1 >> 6 & 1)
                                     << 1 |
                                 bVar1 >> 7));
            } while (uVar11 != 0);
        } else {
            uVar9 = 0;
        }
    }
    return uVar9 - 1;
}

undefined4 __lzo_init_v2(int param_1, int param_2, int param_3, int param_4,
                         int param_5, int param_6, int param_7, int param_8,
                         int param_9, int param_10)

{
    undefined4 uVar1;

    if ((((((param_1 != 0) && (param_2 == -1 || param_2 == 2)) &&
           (param_3 == -1 || param_3 == 4)) &&
          ((param_4 == -1 ||
            param_4 == 4 && (param_5 == -1 || param_5 == 4)))) &&
         ((param_6 == -1 ||
           param_6 == 4 &&
               ((param_7 == -1 ||
                 param_7 == 4 && (param_8 == -1 || param_8 == 4)))))) &&
        ((param_9 == -1 ||
          param_9 == 4 && (param_10 == -1 || param_10 == 0x18)))) {
        uVar1 = _lzo_config_check();
        return uVar1;
    }
    return 0xffffffff;
}

void __lzo_ptr_linear(void)

{
    return;
}

int __lzo_align_gap(int param_1, uint param_2)

{
    if ((1 < param_2) && ((param_2 - 1 & param_2) == 0)) {
        return (param_1 + -1 + param_2 & -param_2) - param_1;
    }
    return 0;
}

undefined *lzo_copyright(void)

{
    return &DAT_00032674;
}

undefined4 lzo_version(void)

{
    return 0x20a0;
}

undefined *lzo_version_string(void)

{
    return &DAT_0003267c;
}

char *lzo_version_date(void)

{
    return "Mar 01 2017";
}

undefined *_lzo_version_string(void)

{
    return &DAT_0003267c;
}

char *_lzo_version_date(void)

{
    return "Mar 01 2017";
}

uint lzo_adler32(uint param_1, byte *param_2, uint param_3)

{
    uint uVar1;
    int iVar2;
    byte *pbVar3;
    uint uVar4;
    byte *pbVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    uint uVar20;

    if (param_2 == (byte *)0x0) {
        return 1;
    }
    uVar6 = param_1 & 0xffff;
    param_1 = param_1 >> 0x10;
    if (param_3 != 0) {
        do {
            if (param_3 < 0x15b0) {
                if (0xf < param_3) {
                    uVar4 = 0;
                    goto LAB_0002ef70;
                }
                uVar20 = 0;
            LAB_0002ef14:
                uVar4 = uVar20;
                pbVar5 = param_2 + param_3;
                pbVar3 = param_2;
                do {
                    param_2 = pbVar3 + 1;
                    uVar6 = uVar6 + *pbVar3;
                    param_1 = param_1 + uVar6;
                    pbVar3 = param_2;
                } while (param_2 != pbVar5);
            } else {
                uVar4 = param_3 - 0x15b0;
                param_3 = 0x15b0;
            LAB_0002ef70:
                uVar1 = param_3 - 0x10 >> 4;
                pbVar3 = param_2 + 0x10;
                do {
                    pbVar5 = pbVar3 + 0x10;
                    iVar7 = pbVar3[-0x10] + uVar6;
                    iVar2 = (uint)pbVar3[-0xf] + iVar7;
                    iVar8 = (uint)pbVar3[-0xe] + iVar2;
                    iVar9 = (uint)pbVar3[-0xd] + iVar8;
                    iVar10 = (uint)pbVar3[-0xc] + iVar9;
                    iVar11 = (uint)pbVar3[-0xb] + iVar10;
                    iVar12 = (uint)pbVar3[-10] + iVar11;
                    iVar13 = (uint)pbVar3[-9] + iVar12;
                    iVar14 = (uint)pbVar3[-8] + iVar13;
                    iVar15 = (uint)pbVar3[-7] + iVar14;
                    iVar16 = (uint)pbVar3[-6] + iVar15;
                    iVar17 = (uint)pbVar3[-5] + iVar16;
                    iVar18 = (uint)pbVar3[-4] + iVar17;
                    iVar19 = (uint)pbVar3[-3] + iVar18;
                    uVar20 = (uint)pbVar3[-2] + iVar19;
                    uVar6 = pbVar3[-1] + uVar20;
                    param_1 = param_1 + iVar7 + iVar2 + iVar8 + iVar9 + iVar10 +
                              iVar11 + iVar12 + iVar13 + iVar14 + iVar15 +
                              iVar16 + iVar17 + iVar18 + iVar19 + uVar20 +
                              uVar6;
                    pbVar3 = pbVar5;
                } while (param_2 + uVar1 * 0x10 + 0x20 != pbVar5);
                param_3 = param_3 & 0xf;
                if (param_3 != 0) {
                    uVar20 = uVar4;
                }
                param_2 = param_2 + (uVar1 + 1) * 0x10;
                if (param_3 != 0)
                    goto LAB_0002ef14;
            }
            uVar6 = uVar6 % 0xfff1;
            param_1 = param_1 % 0xfff1;
            param_3 = uVar4;
        } while (uVar4 != 0);
    }
    return uVar6 | param_1 << 0x10;
}

ulonglong FUN_0002f078(uint param_1, uint param_2)

{
    uint uVar1;
    ulonglong uVar2;

    if (param_2 - 1 == 0) {
        return CONCAT44(param_2, param_1);
    }
    if (param_2 == 0) {
        uVar1 = raise(8);
        return (ulonglong)uVar1;
    }
    if (param_1 <= param_2) {
        return CONCAT44(param_2, (uint)(param_1 == param_2));
    }
    if ((param_2 & param_2 - 1) == 0) {
        return CONCAT44(param_2, param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
    }
    /* WARNING: Could not recover jumptable at 0x0002f0a8. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_0002f0b0 +
                       (0x1f - (LZCOUNT(param_2) - LZCOUNT(param_1))) * 0x10))(
        param_1, param_2, 0);
    return uVar2;
}

ulonglong FUN_0002f60c(uint param_1, uint param_2)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    uint uVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;

    if (param_1 == 0 && param_2 == 0) {
        return CONCAT44(param_2, param_1);
    }
    uVar8 = param_2 & 0x80000000;
    uVar3 = param_2;
    if ((int)uVar8 < 0) {
        bVar11 = param_1 != 0;
        param_1 = -param_1;
        uVar3 = -param_2 - (uint)bVar11;
    }
    iVar7 = 0x432;
    uVar9 = uVar3 >> 0x16;
    if (uVar9 != 0) {
        iVar7 = 3;
        if (uVar3 >> 0x19 != 0) {
            iVar7 = 6;
        }
        if (uVar3 >> 0x1c != 0) {
            iVar7 = iVar7 + 3;
        }
        uVar4 = iVar7 - ((int)uVar3 >> 0x1f);
        uVar9 = param_1 << (0x20 - uVar4 & 0xff);
        param_1 = param_1 >> (uVar4 & 0xff) | uVar3 << (0x20 - uVar4 & 0xff);
        uVar3 = uVar3 >> (uVar4 & 0xff);
        iVar7 = uVar4 + 0x432;
    }
    if (0xfffff < uVar3) {
        if (0x1fffff < uVar3) {
            uVar4 = uVar3 & 1;
            uVar3 = uVar3 >> 1;
            bVar1 = (byte)param_1;
            param_1 = (uint)(uVar4 != 0) << 0x1f | param_1 >> 1;
            uVar9 = (uint)(bVar1 & 1) << 0x1f | uVar9 >> 1;
            iVar7 = iVar7 + 1;
            if (0xffbfffff < (uint)(iVar7 * 0x200000)) {
                return (ulonglong)(uVar8 | 0x7ff00000) << 0x20;
            }
        }
    LAB_0002f408:
        bVar11 = 0x7fffffff < uVar9;
        if (uVar9 == 0x80000000) {
            bVar11 = (param_1 & 1) != 0;
        }
        return CONCAT44(uVar3 + iVar7 * 0x100000 +
                                (uint)CARRY4(param_1, (uint)bVar11) |
                            uVar8,
                        param_1 + bVar11);
    }
    bVar10 = (uVar9 & 0x80000000) != 0;
    uVar9 = uVar9 << 1;
    uVar4 = param_1 * 2;
    bVar11 = CARRY4(param_1, param_1);
    param_1 = param_1 * 2 + (uint)bVar10;
    uVar3 = uVar3 * 2 + (uint)(bVar11 || CARRY4(uVar4, (uint)bVar10));
    iVar7 = iVar7 + -1;
    if ((uVar3 & 0x100000) != 0)
        goto LAB_0002f408;
    uVar2 = param_1;
    uVar4 = uVar3;
    if (uVar3 == 0) {
        uVar2 = 0;
        uVar4 = param_1;
    }
    iVar5 = LZCOUNT(uVar4);
    if (uVar3 == 0) {
        iVar5 = iVar5 + 0x20;
    }
    uVar6 = iVar5 - 0xb;
    bVar12 = SBORROW4(uVar6, 0x20);
    uVar3 = iVar5 - 0x2b;
    bVar11 = (int)uVar3 < 0;
    bVar10 = uVar3 == 0;
    if ((int)uVar6 < 0x20) {
        bVar12 = SCARRY4(uVar3, 0xc);
        iVar5 = iVar5 + -0x1f;
        bVar11 = iVar5 < 0;
        bVar10 = iVar5 == 0;
        uVar3 = uVar6;
        if (!bVar10 && bVar11 == bVar12) {
            uVar2 = uVar4 << (uVar6 & 0xff);
            uVar4 = uVar4 >> (0xcU - iVar5 & 0xff);
            goto LAB_0002f480;
        }
    }
    if (bVar10 || bVar11 != bVar12) {
        uVar9 = 0x20 - uVar3;
    }
    uVar4 = uVar4 << (uVar3 & 0xff);
    if (bVar10 || bVar11 != bVar12) {
        uVar4 = uVar4 | uVar2 >> (uVar9 & 0xff);
        uVar2 = uVar2 << (uVar3 & 0xff);
    }
LAB_0002f480:
    if ((int)uVar6 <= iVar7) {
        return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000 | uVar8, uVar2);
    }
    uVar3 = ~(iVar7 - uVar6);
    if (0x1e < (int)uVar3) {
        return CONCAT44(param_2, uVar4 >> (uVar3 - 0x1f & 0xff)) &
               0x80000000ffffffff;
    }
    iVar7 = uVar3 - 0x13;
    if (iVar7 == 0 || iVar7 < 0 != SCARRY4(uVar3 - 0x1f, 0xc)) {
        uVar3 = uVar3 + 1;
        return CONCAT44(uVar8 | uVar4 >> (uVar3 & 0xff),
                        uVar2 >> (uVar3 & 0xff) | uVar4
                                                      << (0x20 - uVar3 & 0xff));
    }
    return CONCAT44(param_2, uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) |
                                 uVar4 << (0xcU - iVar7 & 0xff)) &
           0x80000000ffffffff;
}

void FUN_0002f668(undefined4 param_1, undefined4 param_2, int param_3,
                  int param_4)

{
    if ((param_4 == 0) && (param_3 == 0)) {
        raise(8);
        return;
    }
    FUN_0002f6e8();
    return;
}

undefined8 FUN_0002f6a8(undefined4 param_1, undefined4 param_2)

{
    uint uVar1;
    double dVar2;

    dVar2 = (double)CONCAT44(param_2, param_1) * 2.3283064365386963e-10;
    uVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
    dVar2 = (double)CONCAT44(param_2, param_1) - (double)uVar1 * 4294967296.0;
    return CONCAT44(uVar1, (uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}

undefined8 FUN_0002f6e8(uint param_1, uint param_2, uint param_3, uint param_4,
                        uint *param_5)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;
    uint uVar11;
    bool bVar12;

    bVar12 = param_4 <= param_2;
    if (param_2 == param_4) {
        bVar12 = param_3 <= param_1;
    }
    if (bVar12) {
        iVar10 = LZCOUNT(param_4);
        if (param_4 == 0) {
            iVar10 = LZCOUNT(param_3) + 0x20;
        }
        iVar3 = LZCOUNT(param_2);
        if (param_2 == 0) {
            iVar3 = LZCOUNT(param_1) + 0x20;
        }
        uVar11 = iVar10 - iVar3;
        uVar8 = uVar11 - 0x20;
        uVar9 = 0x20 - uVar11;
        uVar5 = param_3 << (uVar11 & 0xff);
        uVar6 = param_4 << (uVar11 & 0xff) | param_3 << (uVar8 & 0xff) |
                param_3 >> (uVar9 & 0xff);
        bVar12 = uVar6 <= param_2;
        if (param_2 == uVar6) {
            bVar12 = uVar5 <= param_1;
        }
        if (bVar12) {
            bVar12 = param_1 < uVar5;
            param_1 = param_1 - uVar5;
            uVar1 = 1 << (uVar11 & 0xff);
            param_2 = (param_2 - uVar6) - (uint)bVar12;
            uVar2 = 1 << (uVar8 & 0xff) | 1U >> (uVar9 & 0xff);
        } else {
            uVar1 = 0;
            uVar2 = uVar1;
        }
        if (uVar11 != 0) {
            uVar7 = uVar6 >> 1;
            uVar6 = (uint)((uVar6 & 1) != 0) << 0x1f | uVar5 >> 1;
            uVar5 = uVar11;
            do {
                while (true) {
                    bVar12 = uVar7 <= param_2;
                    if (param_2 == uVar7) {
                        bVar12 = uVar6 <= param_1;
                    }
                    if (bVar12)
                        break;
                    bVar12 = CARRY4(param_1, param_1);
                    param_1 = param_1 * 2;
                    param_2 = param_2 * 2 + (uint)bVar12;
                    uVar5 = uVar5 - 1;
                    uVar4 = param_2;
                    if (uVar5 == 0)
                        goto LAB_0002f792;
                }
                bVar12 = param_1 < uVar6;
                uVar4 = param_1 - uVar6;
                param_1 = uVar4 * 2 + 1;
                param_2 = ((param_2 - uVar7) - (uint)bVar12) * 2 +
                          (uint)CARRY4(uVar4, uVar4) +
                          (uint)(0xfffffffe < uVar4 * 2);
                uVar5 = uVar5 - 1;
                uVar4 = param_2;
            } while (uVar5 != 0);
        LAB_0002f792:
            param_2 = uVar4 >> (uVar11 & 0xff);
            bVar12 = CARRY4(uVar1, param_1);
            uVar5 = uVar1 + param_1;
            param_1 = param_1 >> (uVar11 & 0xff) | uVar4 << (uVar9 & 0xff) |
                      uVar4 >> (uVar8 & 0xff);
            uVar6 = param_1 << (uVar11 & 0xff);
            uVar1 = uVar5 - uVar6;
            uVar2 = ((uVar4 + uVar2 + bVar12) -
                     (param_2 << (uVar11 & 0xff) |
                      param_1 << (uVar11 - 0x20 & 0xff) |
                      param_1 >> (0x20 - uVar11 & 0xff))) -
                    (uint)(uVar5 < uVar6);
        }
    } else {
        uVar1 = 0;
        uVar2 = uVar1;
    }
    if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_2;
    }
    return CONCAT44(uVar2, uVar1);
}

void __libc_csu_init(EVP_PKEY_CTX *param_1, undefined4 param_2,
                     undefined4 param_3, undefined4 param_4)

{
    int iVar1;
    undefined **ppuVar2;

    _init(param_1);
    iVar1 = 0;
    ppuVar2 = &__DT_INIT_ARRAY;
    do {
        iVar1 = iVar1 + 1;
        (*(code *)*ppuVar2)(param_1, param_2, param_3, *ppuVar2, param_4);
        ppuVar2 = ppuVar2 + 1;
    } while (iVar1 != 1);
    return;
}

void __libc_csu_fini(void)

{
    return;
}

void _fini(void)

{
    return;
}

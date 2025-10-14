source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%hostent = type { i8*, i8**, i32, i32, i8** }
%sockaddr = type { i32, [14 x i8] }

@global_var_2200c = local_unnamed_addr global i32 67848
@global_var_22010 = local_unnamed_addr global i32 67848
@global_var_22014 = local_unnamed_addr global i32 67848
@global_var_22018 = local_unnamed_addr global i32 67848
@global_var_2201c = local_unnamed_addr global i32 67848
@global_var_22020 = local_unnamed_addr global i32 67848
@global_var_22024 = local_unnamed_addr global i32 67848
@global_var_22028 = local_unnamed_addr global i32 67848
@global_var_2202c = local_unnamed_addr global i32 67848
@global_var_22030 = local_unnamed_addr global i32 67848
@global_var_22034 = local_unnamed_addr global i32 67848
@global_var_22038 = local_unnamed_addr global i32 67848
@global_var_2203c = local_unnamed_addr global i32 67848
@global_var_22040 = local_unnamed_addr global i32 67848
@global_var_22044 = local_unnamed_addr global i32 67848
@global_var_22048 = local_unnamed_addr global i32 67848
@global_var_2204c = local_unnamed_addr global i32 67848
@global_var_22050 = local_unnamed_addr global i32 67848
@global_var_22054 = local_unnamed_addr global i32 67848
@global_var_22058 = local_unnamed_addr global i32 67848
@global_var_2205c = local_unnamed_addr global i32 67848
@global_var_22060 = local_unnamed_addr global i32 67848
@global_var_22064 = local_unnamed_addr global i32 67848
@global_var_22068 = local_unnamed_addr global i32 67848
@global_var_2206c = local_unnamed_addr global i32 67848
@global_var_10a94 = local_unnamed_addr constant i32 71032
@global_var_11578 = constant [9 x i8] c"e: '%s'\0A\00"
@global_var_10a98 = local_unnamed_addr constant i32 112
@global_var_10a88 = constant i32 -481165312
@global_var_11530 = constant [13 x i8] c"[%s%s] =>\0A(\0A\00"
@global_var_11540 = constant [15 x i8] c"   [%s] => %s\0A\00"
@global_var_11550 = constant [15 x i8] c"   [%d] => %s\0A\00"
@global_var_11564 = constant [29 x i8] c"Couldn't get hostname: '%s'\0A\00"
@global_var_11584 = constant [34 x i8] c"Socket initialisation failed: %s\0A\00"
@global_var_115a8 = constant [27 x i8] c"Socket connect failed: %s\0A\00"
@global_var_116e8 = local_unnamed_addr constant i32 1
@global_var_116ec = local_unnamed_addr constant i32 60
@global_var_115c4 = constant [46 x i8] c"cgminer-api, setsocket SO_LINGER failed (%s)\0A\00"
@global_var_115f4 = constant [48 x i8] c"cgminer-api, setsocket SO_SNDTIMEO failed (%s)\0A\00"
@global_var_11624 = constant [48 x i8] c"cgminer-api, setsocket SO_RCVTIMEO failed (%s)\0A\00"
@global_var_11654 = constant [29 x i8] c"cgminer api send failed: %s\0A\00"
@global_var_11674 = constant [23 x i8] c"cgminer api: OOM (%d)\0A\00"
@global_var_1168c = constant [27 x i8] c"cgminer realloc: OOM (%d)\0A\00"
@global_var_116a8 = constant [17 x i8] c"Recv failed: %s\0A\00"
@global_var_116bc = constant [41 x i8] c"Recv failed: api server close the socket\00"
@global_var_22088 = local_unnamed_addr global i32 0
@global_var_116f0 = constant [8 x i8] c"summary\00"
@global_var_116f8 = constant [10 x i8] c"127.0.0.1\00"
@global_var_11704 = constant [3 x i8] c"-?\00"
@global_var_11708 = constant [3 x i8] c"-h\00"
@global_var_1170c = constant [7 x i8] c"--help\00"
@global_var_11714 = constant [38 x i8] c"usAge: %s [command [ip/host [port]]]\0A\00"
@global_var_1173c = constant [3 x i8] c"-o\00"
@global_var_11510 = local_unnamed_addr constant i32 68134
@global_var_11514 = local_unnamed_addr constant i32 68124
@global_var_21f10 = global i32 68357
@0 = external global i32
@global_var_10a70 = local_unnamed_addr constant void ()* inttoptr (i32 70288 to void ()*)
@global_var_10a74 = local_unnamed_addr constant void ()* inttoptr (i32 70877 to void ()*)
@global_var_1152c = external constant i8*
@1 = internal constant [2 x i8] c")\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@global_var_22080 = local_unnamed_addr global %_IO_FILE* null
@global_var_11560 = constant [2 x i8] c")\00"

declare i32 @unknown_240() local_unnamed_addr

define i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_108fc:
  %0 = call i32 @function_10a78(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @function_1091c(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1091c:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_10928(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_10928:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_10934(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10934:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_10940(i32* %ptr) local_unnamed_addr {
dec_label_pc_10940:
  call void @free(i32* %ptr), !insn.addr !5
  ret void, !insn.addr !5
}

define i16 @function_1094c(i16 %hostshort) local_unnamed_addr {
dec_label_pc_1094c:
  %0 = call i16 @htons(i16 %hostshort), !insn.addr !6
  ret i16 %0, !insn.addr !6
}

define i32* @function_10958(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10958:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define i32 @function_10964(i8* %s) local_unnamed_addr {
dec_label_pc_10964:
  %0 = call i32 @puts(i8* %s), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32* @function_10970(i32 %size) local_unnamed_addr {
dec_label_pc_10970:
  %0 = call i32* @malloc(i32 %size), !insn.addr !9
  ret i32* %0, !insn.addr !9
}

define i32 @function_1097c(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_1097c:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i8* @function_10988(i32 %errnum) local_unnamed_addr {
dec_label_pc_10988:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !11
  ret i8* %0, !insn.addr !11
}

define void @function_10994() local_unnamed_addr {
dec_label_pc_10994:
  call void @__gmon_start__(), !insn.addr !12
  ret void, !insn.addr !12
}

define i16** @function_109a0() local_unnamed_addr {
dec_label_pc_109a0:
  %0 = call i16** @__ctype_b_loc(), !insn.addr !13
  ret i16** %0, !insn.addr !13
}

define i32 @function_109ac(i8* %s) local_unnamed_addr {
dec_label_pc_109ac:
  %0 = call i32 @strlen(i8* %s), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i8* @function_109b8(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_109b8:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !15
  ret i8* %0, !insn.addr !15
}

define i32 @function_109c4(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_109c4:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32* @function_109d0() local_unnamed_addr {
dec_label_pc_109d0:
  %0 = call i32* @__errno_location(), !insn.addr !17
  ret i32* %0, !insn.addr !17
}

define i32* @function_109dc(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_109dc:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !18
  ret i32* %0, !insn.addr !18
}

define i32 @function_109e8(i8* %nptr) local_unnamed_addr {
dec_label_pc_109e8:
  %0 = call i32 @atoi(i8* %nptr), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_109f4(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_109f4:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define %hostent* @function_10a00(i8* %name) local_unnamed_addr {
dec_label_pc_10a00:
  %0 = call %hostent* @gethostbyname(i8* %name), !insn.addr !21
  ret %hostent* %0, !insn.addr !21
}

define void @function_10a0c() local_unnamed_addr {
dec_label_pc_10a0c:
  call void @abort(), !insn.addr !22
  ret void, !insn.addr !22
}

define i32 @function_10a18(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_10a18:
  %0 = call i32 @recv(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_10a24(i32 %fd) local_unnamed_addr {
dec_label_pc_10a24:
  %0 = call i32 @close(i32 %fd), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_10a30(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_10a30:
  %0 = call i32 @send(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_10a3c(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10a3c:
  %0 = call i32 @connect(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32 @_start(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10a48:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !27
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !27
  %2 = call i32 @__libc_start_main(i32 70288, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 70877 to void ()*), void ()* inttoptr (i32 70288 to void ()*), void ()* %1), !insn.addr !27
  call void @abort(), !insn.addr !28
  unreachable, !insn.addr !28
}

define i32 @function_10a6c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10a6c:
  ret i32 %arg1, !insn.addr !29
}

define i32 @function_10a78() local_unnamed_addr {
dec_label_pc_10a78:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10a88 to i32), i32 ptrtoint ([9 x i8]* @global_var_11578 to i32)), i32 112) to i32*), align 4, !insn.addr !30
  %3 = icmp eq i32 %2, 0, !insn.addr !31
  br i1 %3, label %4, label %dec_label_pc_10a90, !insn.addr !32

; <label>:4:                                      ; preds = %dec_label_pc_10a78
  ret i32 %1, !insn.addr !32

dec_label_pc_10a90:                               ; preds = %dec_label_pc_10a78
  call void @__gmon_start__(), !insn.addr !33
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !33
}

define i32 @function_10a9c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10a9c:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca fp128
  %3 = alloca double
  %cpsr_n.23.reg2mem = alloca i1, !insn.addr !34
  %spec.select4.reg2mem = alloca i32, !insn.addr !34
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i1, i1* %1
  %7 = load i32, i32* %0
  %8 = load fp128, fp128* %2
  %9 = load fp128, fp128* %2
  %10 = load double, double* %3
  %11 = load double, double* %3
  br i1 %5, label %12, label %dec_label_pc_10ab8, !insn.addr !34

; <label>:12:                                     ; preds = %31, %28, %dec_label_pc_10a9c
  ret i32 %arg1, !insn.addr !34

dec_label_pc_10ab8:                               ; preds = %dec_label_pc_10a9c
  %13 = icmp eq i1 %6, %4, !insn.addr !35
  br i1 %13, label %dec_label_pc_10acc, label %14, !insn.addr !35

; <label>:14:                                     ; preds = %dec_label_pc_10ab8
  call void @__asm_svclt(i32 18288), !insn.addr !35
  br label %dec_label_pc_10acc, !insn.addr !35

dec_label_pc_10acc:                               ; preds = %14, %dec_label_pc_10ab8
  %15 = mul i32 %7, 1048577, !insn.addr !36
  br i1 %4, label %.thread, label %16, !insn.addr !37

.thread:                                          ; preds = %dec_label_pc_10acc
  %spec.select2 = select i1 %6, i32 %15, i32 0
  store i32 %spec.select2, i32* %spec.select4.reg2mem
  br label %dec_label_pc_10ae4

; <label>:16:                                     ; preds = %dec_label_pc_10acc
  %17 = mul i32 %7, 4194304, !insn.addr !37
  %18 = sub i32 0, %17
  %19 = sub i32 %18, 1
  %20 = and i32 %15, %19, !insn.addr !37
  %21 = icmp slt i32 %20, 0, !insn.addr !37
  %22 = icmp eq i32 %20, 0, !insn.addr !37
  %23 = icmp slt i32 %20, 1
  %spec.select = select i1 %23, i32 0, i32 %15
  store i32 %spec.select, i32* %spec.select4.reg2mem, !insn.addr !38
  store i1 %21, i1* %cpsr_n.23.reg2mem, !insn.addr !38
  br i1 %22, label %24, label %dec_label_pc_10ae4, !insn.addr !38

; <label>:24:                                     ; preds = %16
  %25 = call i32 @unknown_240(), !insn.addr !38
  ret i32 %25, !insn.addr !38

dec_label_pc_10ae4:                               ; preds = %.thread, %16
  %cpsr_n.23.reload = load i1, i1* %cpsr_n.23.reg2mem
  %spec.select4.reload = load i32, i32* %spec.select4.reg2mem
  %26 = icmp eq i1 %cpsr_n.23.reload, %4, !insn.addr !39
  br i1 %26, label %28, label %27, !insn.addr !39

; <label>:27:                                     ; preds = %dec_label_pc_10ae4
  call void @__asm_svclt(i32 18288), !insn.addr !39
  br label %28, !insn.addr !39

; <label>:28:                                     ; preds = %dec_label_pc_10ae4, %27
  %29 = call double @__asm_vqrshl.s8(double %11, double %10), !insn.addr !40
  %30 = call double @__asm_vaddhn.i16(fp128 %8, fp128 %9), !insn.addr !41
  br i1 %4, label %12, label %31, !insn.addr !42

; <label>:31:                                     ; preds = %28
  %32 = inttoptr i32 %arg4 to i32*, !insn.addr !42
  store i32 %spec.select4.reload, i32* %32, align 4, !insn.addr !42
  %33 = add i32 %arg4, -4, !insn.addr !42
  %34 = inttoptr i32 %33 to i32*, !insn.addr !42
  br label %12, !insn.addr !42

; uselistorder directives
  uselistorder i32 %15, { 1, 2, 0 }
  uselistorder i32 %7, { 1, 0 }
  uselistorder i1 %6, { 1, 0 }
  uselistorder i1 %4, { 1, 2, 3, 0 }
  uselistorder double* %3, { 1, 0 }
  uselistorder fp128* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %28, { 1, 0 }
  uselistorder label %dec_label_pc_10ae4, { 1, 0 }
}

define i32 @function_10af8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_10af8:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !43
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg4, 0, !insn.addr !43
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !43
  br i1 %2, label %dec_label_pc_10afa, label %dec_label_pc_10b02, !insn.addr !43

dec_label_pc_10afa:                               ; preds = %dec_label_pc_10af8
  %3 = call i32 @function_10a9c(i32 %arg1, i32 %arg2, i32 %arg3, i32 0), !insn.addr !44
  %4 = inttoptr i32 %1 to i8*, !insn.addr !45
  store i8 1, i8* %4, align 1, !insn.addr !45
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !45
  br label %dec_label_pc_10b02, !insn.addr !45

dec_label_pc_10b02:                               ; preds = %dec_label_pc_10af8, %dec_label_pc_10afa
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !46

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10b02, { 1, 0 }
}

define i32 @function_10b04() local_unnamed_addr {
dec_label_pc_10b04:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !47
}

define i32 @display(i32 %arg1) local_unnamed_addr {
dec_label_pc_10b08:
  %storemerge5.reg2mem = alloca i32, !insn.addr !48
  %stack_var_-24.0.reg2mem = alloca i8*, !insn.addr !48
  %stack_var_-20.0.reg2mem = alloca i8*, !insn.addr !48
  %stack_var_-16.06.ptr.reg2mem = alloca i8*, !insn.addr !48
  %storemerge47.reg2mem = alloca i32, !insn.addr !48
  %stack_var_-12.0.reg2mem = alloca i8*, !insn.addr !48
  %storemerge9.reg2mem = alloca i32, !insn.addr !48
  %0 = icmp eq i32 %arg1, 0, !insn.addr !49
  store i32 %arg1, i32* %storemerge9.reg2mem, !insn.addr !50
  br i1 %0, label %dec_label_pc_10cd8, label %dec_label_pc_10b1c, !insn.addr !50

dec_label_pc_10b1c:                               ; preds = %dec_label_pc_10b08, %dec_label_pc_10cc4
  %storemerge9.reload = load i32, i32* %storemerge9.reg2mem
  %1 = inttoptr i32 %storemerge9.reload to i8*, !insn.addr !51
  %2 = call i8* @strchr(i8* %1, i32 124), !insn.addr !51
  %3 = icmp eq i8* %2, null, !insn.addr !52
  store i8* null, i8** %stack_var_-12.0.reg2mem, !insn.addr !53
  br i1 %3, label %dec_label_pc_10b50, label %dec_label_pc_10b3c, !insn.addr !53

dec_label_pc_10b3c:                               ; preds = %dec_label_pc_10b1c
  %4 = ptrtoint i8* %2 to i32, !insn.addr !54
  %5 = add i32 %4, 1, !insn.addr !55
  %6 = inttoptr i32 %5 to i8*, !insn.addr !56
  store i8 0, i8* %2, align 1, !insn.addr !57
  store i8* %6, i8** %stack_var_-12.0.reg2mem, !insn.addr !57
  br label %dec_label_pc_10b50, !insn.addr !57

dec_label_pc_10b50:                               ; preds = %dec_label_pc_10b3c, %dec_label_pc_10b1c
  %stack_var_-12.0.reload = load i8*, i8** %stack_var_-12.0.reg2mem
  %7 = load i8, i8* %1, align 1, !insn.addr !58
  %8 = icmp eq i8 %7, 0, !insn.addr !59
  %9 = icmp eq i32 %storemerge9.reload, 0, !insn.addr !60
  %or.cond = or i1 %9, %8
  store i32 0, i32* %storemerge47.reg2mem, !insn.addr !61
  store i8* %1, i8** %stack_var_-16.06.ptr.reg2mem, !insn.addr !61
  br i1 %or.cond, label %dec_label_pc_10cc4, label %dec_label_pc_10b74, !insn.addr !61

dec_label_pc_10b74:                               ; preds = %dec_label_pc_10b50, %dec_label_pc_10c8c
  %stack_var_-16.06.ptr.reload = load i8*, i8** %stack_var_-16.06.ptr.reg2mem
  %storemerge47.reload = load i32, i32* %storemerge47.reg2mem
  %10 = call i8* @strchr(i8* nonnull %stack_var_-16.06.ptr.reload, i32 44), !insn.addr !62
  %11 = icmp eq i8* %10, null, !insn.addr !63
  store i8* null, i8** %stack_var_-20.0.reg2mem, !insn.addr !64
  br i1 %11, label %dec_label_pc_10ba8, label %dec_label_pc_10b94, !insn.addr !64

dec_label_pc_10b94:                               ; preds = %dec_label_pc_10b74
  %12 = ptrtoint i8* %10 to i32, !insn.addr !65
  %13 = add i32 %12, 1, !insn.addr !66
  %14 = inttoptr i32 %13 to i8*, !insn.addr !67
  store i8 0, i8* %10, align 1, !insn.addr !68
  store i8* %14, i8** %stack_var_-20.0.reg2mem, !insn.addr !68
  br label %dec_label_pc_10ba8, !insn.addr !68

dec_label_pc_10ba8:                               ; preds = %dec_label_pc_10b94, %dec_label_pc_10b74
  %stack_var_-20.0.reload = load i8*, i8** %stack_var_-20.0.reg2mem
  %15 = load i8, i8* %stack_var_-16.06.ptr.reload, align 1, !insn.addr !69
  %16 = icmp eq i8 %15, 0, !insn.addr !70
  br i1 %16, label %dec_label_pc_10c8c, label %dec_label_pc_10bb8, !insn.addr !71

dec_label_pc_10bb8:                               ; preds = %dec_label_pc_10ba8
  %17 = call i8* @strchr(i8* nonnull %stack_var_-16.06.ptr.reload, i32 61), !insn.addr !72
  %18 = icmp eq i8* %17, null, !insn.addr !73
  store i8* null, i8** %stack_var_-24.0.reg2mem, !insn.addr !74
  br i1 %18, label %dec_label_pc_10bec, label %dec_label_pc_10bd8, !insn.addr !74

dec_label_pc_10bd8:                               ; preds = %dec_label_pc_10bb8
  %19 = ptrtoint i8* %17 to i32, !insn.addr !75
  %20 = add i32 %19, 1, !insn.addr !76
  %21 = inttoptr i32 %20 to i8*, !insn.addr !77
  store i8 0, i8* %17, align 1, !insn.addr !78
  store i8* %21, i8** %stack_var_-24.0.reg2mem, !insn.addr !78
  br label %dec_label_pc_10bec, !insn.addr !78

dec_label_pc_10bec:                               ; preds = %dec_label_pc_10bd8, %dec_label_pc_10bb8
  %stack_var_-24.0.reload = load i8*, i8** %stack_var_-24.0.reg2mem
  %22 = icmp eq i32 %storemerge47.reload, 0, !insn.addr !79
  br i1 %22, label %dec_label_pc_10bf8, label %dec_label_pc_10c54, !insn.addr !80

dec_label_pc_10bf8:                               ; preds = %dec_label_pc_10bec
  %23 = icmp eq i8* %stack_var_-24.0.reload, null, !insn.addr !81
  store i32 ptrtoint (i8** @global_var_1152c to i32), i32* %storemerge5.reg2mem, !insn.addr !82
  br i1 %23, label %dec_label_pc_10c40, label %dec_label_pc_10c04, !insn.addr !82

dec_label_pc_10c04:                               ; preds = %dec_label_pc_10bf8
  %24 = call i16** @__ctype_b_loc(), !insn.addr !83
  %25 = load i16*, i16** %24, align 4, !insn.addr !84
  %26 = ptrtoint i16* %25 to i32, !insn.addr !84
  %27 = load i8, i8* %stack_var_-24.0.reload, align 1, !insn.addr !85
  %28 = zext i8 %27 to i32, !insn.addr !85
  %29 = mul i32 %28, 2, !insn.addr !86
  %30 = add i32 %29, %26, !insn.addr !87
  %31 = inttoptr i32 %30 to i16*, !insn.addr !88
  %32 = load i16, i16* %31, align 2, !insn.addr !88
  %33 = and i16 %32, 2048
  %34 = icmp eq i16 %33, 0, !insn.addr !89
  store i32 ptrtoint (i8** @global_var_1152c to i32), i32* %storemerge5.reg2mem, !insn.addr !90
  br i1 %34, label %dec_label_pc_10c40, label %dec_label_pc_10c30, !insn.addr !90

dec_label_pc_10c30:                               ; preds = %dec_label_pc_10c04
  %35 = ptrtoint i8* %stack_var_-24.0.reload to i32, !insn.addr !91
  store i32 %35, i32* %storemerge5.reg2mem, !insn.addr !92
  br label %dec_label_pc_10c40, !insn.addr !92

dec_label_pc_10c40:                               ; preds = %dec_label_pc_10bf8, %dec_label_pc_10c04, %dec_label_pc_10c30
  %storemerge5.reload = load i32, i32* %storemerge5.reg2mem
  %36 = inttoptr i32 %storemerge5.reload to i8*, !insn.addr !93
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11530, i32 0, i32 0), i8* nonnull %stack_var_-16.06.ptr.reload, i8* %36), !insn.addr !93
  br label %dec_label_pc_10c54, !insn.addr !93

dec_label_pc_10c54:                               ; preds = %dec_label_pc_10bec, %dec_label_pc_10c40
  %38 = icmp eq i8* %stack_var_-24.0.reload, null, !insn.addr !94
  br i1 %38, label %dec_label_pc_10c78, label %dec_label_pc_10c60, !insn.addr !95

dec_label_pc_10c60:                               ; preds = %dec_label_pc_10c54
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11540, i32 0, i32 0), i8* nonnull %stack_var_-16.06.ptr.reload, i8* nonnull %stack_var_-24.0.reload), !insn.addr !96
  br label %dec_label_pc_10c8c, !insn.addr !97

dec_label_pc_10c78:                               ; preds = %dec_label_pc_10c54
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11550, i32 0, i32 0), i32 %storemerge47.reload, i8* nonnull %stack_var_-16.06.ptr.reload), !insn.addr !98
  br label %dec_label_pc_10c8c, !insn.addr !98

dec_label_pc_10c8c:                               ; preds = %dec_label_pc_10c78, %dec_label_pc_10c60, %dec_label_pc_10ba8
  %41 = add i32 %storemerge47.reload, 1, !insn.addr !99
  %42 = icmp eq i8* %stack_var_-20.0.reload, null, !insn.addr !60
  store i32 %41, i32* %storemerge47.reg2mem, !insn.addr !100
  store i8* %stack_var_-20.0.reload, i8** %stack_var_-16.06.ptr.reg2mem, !insn.addr !100
  br i1 %42, label %dec_label_pc_10cac, label %dec_label_pc_10b74, !insn.addr !100

dec_label_pc_10cac:                               ; preds = %dec_label_pc_10c8c
  %43 = icmp slt i32 %41, 1, !insn.addr !101
  br i1 %43, label %dec_label_pc_10cc4, label %dec_label_pc_10cb8, !insn.addr !101

dec_label_pc_10cb8:                               ; preds = %dec_label_pc_10cac
  %44 = call i32 @puts(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11560, i32 0, i32 0)), !insn.addr !102
  br label %dec_label_pc_10cc4, !insn.addr !102

dec_label_pc_10cc4:                               ; preds = %dec_label_pc_10cb8, %dec_label_pc_10cac, %dec_label_pc_10b50
  %45 = ptrtoint i8* %stack_var_-12.0.reload to i32, !insn.addr !103
  %46 = icmp eq i8* %stack_var_-12.0.reload, null, !insn.addr !49
  store i32 %45, i32* %storemerge9.reg2mem, !insn.addr !50
  br i1 %46, label %dec_label_pc_10cd8, label %dec_label_pc_10b1c, !insn.addr !50

dec_label_pc_10cd8:                               ; preds = %dec_label_pc_10cc4, %dec_label_pc_10b08
  %47 = call i32 @__asm_nop(), !insn.addr !104
  ret i32 %47, !insn.addr !105

; uselistorder directives
  uselistorder i32 %41, { 1, 0 }
  uselistorder i8* %stack_var_-24.0.reload, { 1, 2, 3, 4, 0 }
  uselistorder i8* %17, { 1, 0, 2 }
  uselistorder i8* %stack_var_-20.0.reload, { 1, 0 }
  uselistorder i8* %10, { 1, 0, 2 }
  uselistorder i32 %storemerge47.reload, { 2, 0, 1 }
  uselistorder i8* %stack_var_-16.06.ptr.reload, { 5, 4, 3, 1, 2, 0 }
  uselistorder i8* %stack_var_-12.0.reload, { 1, 0 }
  uselistorder i8* %2, { 1, 0, 2 }
  uselistorder i32 %storemerge9.reload, { 1, 0 }
  uselistorder i32* %storemerge9.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge47.reg2mem, { 2, 0, 1 }
  uselistorder i8** %stack_var_-16.06.ptr.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge5.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 ptrtoint (i8** @global_var_1152c to i32), { 1, 0 }
  uselistorder i8* null, { 3, 4, 5, 6, 0, 7, 1, 8, 2, 9 }
  uselistorder i8* (i8*, i32)* @strchr, { 2, 1, 0, 3 }
  uselistorder label %dec_label_pc_10c54, { 1, 0 }
  uselistorder label %dec_label_pc_10c40, { 2, 1, 0 }
  uselistorder label %dec_label_pc_10b74, { 1, 0 }
  uselistorder label %dec_label_pc_10b1c, { 1, 0 }
}

define i32 @callapi(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10ce4:
  %r3.0.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-12.1.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-24.1.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-20.1.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-16.1.reg2mem = alloca i8*, !insn.addr !106
  %stack_var_-28.0.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-24.0.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !106
  %stack_var_-16.0.reg2mem = alloca i8*, !insn.addr !106
  %stack_var_-72 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !107
  %1 = call %hostent* @gethostbyname(i8* %0), !insn.addr !107
  %2 = icmp eq %hostent* %1, null, !insn.addr !108
  br i1 %2, label %dec_label_pc_10d28, label %dec_label_pc_10d40, !insn.addr !109

dec_label_pc_10d28:                               ; preds = %dec_label_pc_10ce4
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11564, i32 0, i32 0), i8* %0), !insn.addr !110
  store i32 1, i32* %r3.0.reg2mem, !insn.addr !111
  br label %dec_label_pc_111b8, !insn.addr !111

dec_label_pc_10d40:                               ; preds = %dec_label_pc_10ce4
  %4 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !112
  %5 = icmp eq i32 %4, -1, !insn.addr !113
  br i1 %5, label %dec_label_pc_10d60, label %dec_label_pc_10d90, !insn.addr !114

dec_label_pc_10d60:                               ; preds = %dec_label_pc_10d40
  %6 = call i32* @__errno_location(), !insn.addr !115
  %7 = load i32, i32* %6, align 4, !insn.addr !116
  %8 = call i8* @strerror(i32 %7), !insn.addr !117
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_11584, i32 0, i32 0), i8* %8), !insn.addr !118
  store i32 1, i32* %r3.0.reg2mem, !insn.addr !119
  br label %dec_label_pc_111b8, !insn.addr !119

dec_label_pc_10d90:                               ; preds = %dec_label_pc_10d40
  %10 = call i32* @memset(i32* nonnull %stack_var_-56, i32 0, i32 16), !insn.addr !120
  store i32 2, i32* %stack_var_-56, align 4, !insn.addr !121
  %11 = trunc i32 %arg3 to i16, !insn.addr !122
  %12 = call i16 @htons(i16 %11), !insn.addr !122
  %13 = bitcast i32* %stack_var_-56 to %sockaddr*, !insn.addr !123
  %14 = call i32 @connect(i32 %4, %sockaddr* nonnull %13, i32 16), !insn.addr !123
  %15 = icmp slt i32 %14, 0, !insn.addr !124
  br i1 %15, label %dec_label_pc_10df4, label %dec_label_pc_10e24, !insn.addr !125

dec_label_pc_10df4:                               ; preds = %dec_label_pc_10d90
  %16 = call i32* @__errno_location(), !insn.addr !126
  %17 = load i32, i32* %16, align 4, !insn.addr !127
  %18 = call i8* @strerror(i32 %17), !insn.addr !128
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_115a8, i32 0, i32 0), i8* %18), !insn.addr !129
  store i32 1, i32* %r3.0.reg2mem, !insn.addr !130
  br label %dec_label_pc_111b8, !insn.addr !130

dec_label_pc_10e24:                               ; preds = %dec_label_pc_10d90
  store i32 1, i32* %stack_var_-64, align 4, !insn.addr !131
  %20 = call i32 @setsockopt(i32 %4, i32 1, i32 13, i32* nonnull %stack_var_-64, i32 8), !insn.addr !132
  %21 = icmp eq i32 %20, 0, !insn.addr !133
  br i1 %21, label %dec_label_pc_10e98, label %dec_label_pc_10e68, !insn.addr !134

dec_label_pc_10e68:                               ; preds = %dec_label_pc_10e24
  %22 = call i32* @__errno_location(), !insn.addr !135
  %23 = load i32, i32* %22, align 4, !insn.addr !136
  %24 = call i8* @strerror(i32 %23), !insn.addr !137
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([46 x i8], [46 x i8]* @global_var_115c4, i32 0, i32 0), i8* %24), !insn.addr !138
  %26 = call i32 @close(i32 %4), !insn.addr !139
  br label %dec_label_pc_10e98, !insn.addr !139

dec_label_pc_10e98:                               ; preds = %dec_label_pc_10e68, %dec_label_pc_10e24
  store i32 10, i32* %stack_var_-72, align 4, !insn.addr !140
  %27 = call i32 @setsockopt(i32 %4, i32 1, i32 21, i32* nonnull %stack_var_-72, i32 8), !insn.addr !141
  %28 = icmp eq i32 %27, 0, !insn.addr !142
  br i1 %28, label %dec_label_pc_10f08, label %dec_label_pc_10ed8, !insn.addr !143

dec_label_pc_10ed8:                               ; preds = %dec_label_pc_10e98
  %29 = call i32* @__errno_location(), !insn.addr !144
  %30 = load i32, i32* %29, align 4, !insn.addr !145
  %31 = call i8* @strerror(i32 %30), !insn.addr !146
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([48 x i8], [48 x i8]* @global_var_115f4, i32 0, i32 0), i8* %31), !insn.addr !147
  %33 = call i32 @close(i32 %4), !insn.addr !148
  br label %dec_label_pc_10f08, !insn.addr !148

dec_label_pc_10f08:                               ; preds = %dec_label_pc_10ed8, %dec_label_pc_10e98
  %34 = call i32 @setsockopt(i32 %4, i32 1, i32 20, i32* nonnull %stack_var_-72, i32 8), !insn.addr !149
  %35 = icmp eq i32 %34, 0, !insn.addr !150
  br i1 %35, label %dec_label_pc_10f68, label %dec_label_pc_10f38, !insn.addr !151

dec_label_pc_10f38:                               ; preds = %dec_label_pc_10f08
  %36 = call i32* @__errno_location(), !insn.addr !152
  %37 = load i32, i32* %36, align 4, !insn.addr !153
  %38 = call i8* @strerror(i32 %37), !insn.addr !154
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([48 x i8], [48 x i8]* @global_var_11624, i32 0, i32 0), i8* %38), !insn.addr !155
  %40 = call i32 @close(i32 %4), !insn.addr !156
  br label %dec_label_pc_10f68, !insn.addr !156

dec_label_pc_10f68:                               ; preds = %dec_label_pc_10f38, %dec_label_pc_10f08
  %41 = inttoptr i32 %arg1 to i8*, !insn.addr !157
  %42 = call i32 @strlen(i8* %41), !insn.addr !157
  %43 = inttoptr i32 %arg1 to i32*, !insn.addr !158
  %44 = call i32 @send(i32 %4, i32* %43, i32 %42, i32 0), !insn.addr !158
  %45 = icmp sgt i32 %44, 0, !insn.addr !159
  br i1 %45, label %dec_label_pc_10fc8, label %dec_label_pc_10f94, !insn.addr !159

dec_label_pc_10f94:                               ; preds = %dec_label_pc_10f68
  %46 = call i32* @__errno_location(), !insn.addr !160
  %47 = load i32, i32* %46, align 4, !insn.addr !161
  %48 = call i8* @strerror(i32 %47), !insn.addr !162
  %49 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11654, i32 0, i32 0), i8* %48), !insn.addr !163
  store i32 1, i32* %stack_var_-12.1.reg2mem, !insn.addr !164
  br label %dec_label_pc_111ac, !insn.addr !164

dec_label_pc_10fc8:                               ; preds = %dec_label_pc_10f68
  %50 = call i32 @strlen(i8* %41), !insn.addr !165
  %51 = icmp eq i32 %50, %44, !insn.addr !166
  store i32 %34, i32* %stack_var_-12.1.reg2mem, !insn.addr !167
  br i1 %51, label %dec_label_pc_10fe0, label %dec_label_pc_111ac, !insn.addr !167

dec_label_pc_10fe0:                               ; preds = %dec_label_pc_10fc8
  %52 = call i32* @malloc(i32 65536), !insn.addr !168
  %53 = icmp eq i32* %52, null, !insn.addr !169
  br i1 %53, label %dec_label_pc_1100c, label %dec_label_pc_1102c, !insn.addr !170

dec_label_pc_1100c:                               ; preds = %dec_label_pc_10fe0
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_11674, i32 0, i32 0), i32 65536), !insn.addr !171
  store i32 1, i32* %r3.0.reg2mem, !insn.addr !172
  br label %dec_label_pc_111b8, !insn.addr !172

dec_label_pc_1102c:                               ; preds = %dec_label_pc_10fe0
  %55 = bitcast i32* %52 to i8*
  store i8* %55, i8** %stack_var_-16.0.reg2mem, !insn.addr !173
  store i32 65535, i32* %stack_var_-20.0.reg2mem, !insn.addr !173
  store i32 0, i32* %stack_var_-24.0.reg2mem, !insn.addr !173
  store i32 0, i32* %stack_var_-28.0.reg2mem, !insn.addr !173
  br label %dec_label_pc_1103c, !insn.addr !173

dec_label_pc_1103c:                               ; preds = %dec_label_pc_1114c, %dec_label_pc_1102c
  %stack_var_-28.0.reload = load i32, i32* %stack_var_-28.0.reg2mem
  %stack_var_-24.0.reload = load i32, i32* %stack_var_-24.0.reg2mem
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  %stack_var_-16.0.reload = load i8*, i8** %stack_var_-16.0.reg2mem
  %56 = icmp eq i32 %stack_var_-20.0.reload, %stack_var_-24.0.reload, !insn.addr !174
  store i8* %stack_var_-16.0.reload, i8** %stack_var_-16.1.reg2mem, !insn.addr !175
  store i32 %stack_var_-20.0.reload, i32* %stack_var_-20.1.reg2mem, !insn.addr !175
  br i1 %56, label %dec_label_pc_1104c, label %dec_label_pc_110a0, !insn.addr !175

dec_label_pc_1104c:                               ; preds = %dec_label_pc_1103c
  %57 = add i32 %stack_var_-20.0.reload, 65535, !insn.addr !176
  %58 = add i32 %stack_var_-20.0.reload, 65536, !insn.addr !177
  %59 = bitcast i8* %stack_var_-16.0.reload to i32*
  %60 = call i32* @realloc(i32* %59, i32 %58), !insn.addr !178
  %61 = bitcast i32* %60 to i8*
  %62 = icmp eq i32* %60, null, !insn.addr !179
  store i8* %61, i8** %stack_var_-16.1.reg2mem, !insn.addr !180
  store i32 %57, i32* %stack_var_-20.1.reg2mem, !insn.addr !180
  br i1 %62, label %dec_label_pc_11080, label %dec_label_pc_110a0, !insn.addr !180

dec_label_pc_11080:                               ; preds = %dec_label_pc_1104c
  %63 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1168c, i32 0, i32 0), i32 %58), !insn.addr !181
  store i32 1, i32* %r3.0.reg2mem, !insn.addr !182
  br label %dec_label_pc_111b8, !insn.addr !182

dec_label_pc_110a0:                               ; preds = %dec_label_pc_1104c, %dec_label_pc_1103c
  %stack_var_-20.1.reload = load i32, i32* %stack_var_-20.1.reg2mem
  %stack_var_-16.1.reload = load i8*, i8** %stack_var_-16.1.reg2mem
  %64 = ptrtoint i8* %stack_var_-16.1.reload to i32, !insn.addr !183
  %65 = add i32 %stack_var_-24.0.reload, %64, !insn.addr !184
  %66 = sub i32 %stack_var_-20.1.reload, %stack_var_-24.0.reload, !insn.addr !185
  %67 = inttoptr i32 %65 to i32*, !insn.addr !186
  %68 = call i32 @recv(i32 %4, i32* %67, i32 %66, i32 0), !insn.addr !186
  %69 = icmp slt i32 %68, 0, !insn.addr !187
  br i1 %69, label %dec_label_pc_110d4, label %dec_label_pc_11108, !insn.addr !188

dec_label_pc_110d4:                               ; preds = %dec_label_pc_110a0
  %70 = call i32* @__errno_location(), !insn.addr !189
  %71 = load i32, i32* %70, align 4, !insn.addr !190
  %72 = call i8* @strerror(i32 %71), !insn.addr !191
  %73 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_116a8, i32 0, i32 0), i8* %72), !insn.addr !192
  store i32 1, i32* %stack_var_-12.0.reg2mem, !insn.addr !193
  store i32 %stack_var_-24.0.reload, i32* %stack_var_-24.1.reg2mem, !insn.addr !193
  br label %dec_label_pc_11168, !insn.addr !193

dec_label_pc_11108:                               ; preds = %dec_label_pc_110a0
  %74 = icmp eq i32 %68, 0, !insn.addr !194
  br i1 %74, label %dec_label_pc_11114, label %dec_label_pc_1112c, !insn.addr !195

dec_label_pc_11114:                               ; preds = %dec_label_pc_11108
  %75 = call i32 @puts(i8* getelementptr inbounds ([41 x i8], [41 x i8]* @global_var_116bc, i32 0, i32 0)), !insn.addr !196
  store i32 1, i32* %stack_var_-12.0.reg2mem, !insn.addr !197
  store i32 %stack_var_-24.0.reload, i32* %stack_var_-24.1.reg2mem, !insn.addr !197
  br label %dec_label_pc_11168, !insn.addr !197

dec_label_pc_1112c:                               ; preds = %dec_label_pc_11108
  %76 = add i32 %68, %stack_var_-24.0.reload, !insn.addr !198
  %77 = icmp eq i32 %stack_var_-20.1.reload, %76, !insn.addr !199
  br i1 %77, label %dec_label_pc_1114c, label %dec_label_pc_11164, !insn.addr !200

dec_label_pc_1114c:                               ; preds = %dec_label_pc_1112c
  %78 = add nuw nsw i32 %stack_var_-28.0.reload, 1, !insn.addr !201
  %79 = icmp ult i32 %stack_var_-28.0.reload, 2, !insn.addr !202
  store i8* %stack_var_-16.1.reload, i8** %stack_var_-16.0.reg2mem, !insn.addr !202
  store i32 %stack_var_-20.1.reload, i32* %stack_var_-20.0.reg2mem, !insn.addr !202
  store i32 %stack_var_-20.1.reload, i32* %stack_var_-24.0.reg2mem, !insn.addr !202
  store i32 %78, i32* %stack_var_-28.0.reg2mem, !insn.addr !202
  store i32 %34, i32* %stack_var_-12.0.reg2mem, !insn.addr !202
  store i32 %stack_var_-20.1.reload, i32* %stack_var_-24.1.reg2mem, !insn.addr !202
  br i1 %79, label %dec_label_pc_1103c, label %dec_label_pc_11168, !insn.addr !202

dec_label_pc_11164:                               ; preds = %dec_label_pc_1112c
  %80 = call i32 @__asm_nop(), !insn.addr !203
  store i32 %34, i32* %stack_var_-12.0.reg2mem, !insn.addr !203
  store i32 %76, i32* %stack_var_-24.1.reg2mem, !insn.addr !203
  br label %dec_label_pc_11168, !insn.addr !203

dec_label_pc_11168:                               ; preds = %dec_label_pc_1114c, %dec_label_pc_11164, %dec_label_pc_11114, %dec_label_pc_110d4
  %stack_var_-24.1.reload = load i32, i32* %stack_var_-24.1.reg2mem
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  %81 = add i32 %stack_var_-24.1.reload, %64, !insn.addr !204
  %82 = inttoptr i32 %81 to i8*, !insn.addr !205
  store i8 0, i8* %82, align 1, !insn.addr !205
  %83 = load i32, i32* @global_var_22088, align 4, !insn.addr !206
  %84 = icmp eq i32 %83, 0, !insn.addr !207
  br i1 %84, label %dec_label_pc_1119c, label %dec_label_pc_11190, !insn.addr !208

dec_label_pc_11190:                               ; preds = %dec_label_pc_11168
  %85 = call i32 @puts(i8* %stack_var_-16.1.reload), !insn.addr !209
  br label %dec_label_pc_111a4, !insn.addr !210

dec_label_pc_1119c:                               ; preds = %dec_label_pc_11168
  %86 = call i32 @display(i32 %64), !insn.addr !211
  br label %dec_label_pc_111a4, !insn.addr !211

dec_label_pc_111a4:                               ; preds = %dec_label_pc_1119c, %dec_label_pc_11190
  %87 = bitcast i8* %stack_var_-16.1.reload to i32*
  call void @free(i32* %87), !insn.addr !212
  store i32 %stack_var_-12.0.reload, i32* %stack_var_-12.1.reg2mem, !insn.addr !212
  br label %dec_label_pc_111ac, !insn.addr !212

dec_label_pc_111ac:                               ; preds = %dec_label_pc_10fc8, %dec_label_pc_111a4, %dec_label_pc_10f94
  %stack_var_-12.1.reload = load i32, i32* %stack_var_-12.1.reg2mem
  %88 = call i32 @close(i32 %4), !insn.addr !213
  store i32 %stack_var_-12.1.reload, i32* %r3.0.reg2mem, !insn.addr !214
  br label %dec_label_pc_111b8, !insn.addr !214

dec_label_pc_111b8:                               ; preds = %dec_label_pc_111ac, %dec_label_pc_11080, %dec_label_pc_1100c, %dec_label_pc_10df4, %dec_label_pc_10d60, %dec_label_pc_10d28
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !215

; uselistorder directives
  uselistorder i32 %64, { 1, 0, 2 }
  uselistorder i8* %stack_var_-16.1.reload, { 2, 1, 3, 0 }
  uselistorder i32 %stack_var_-20.1.reload, { 0, 4, 3, 2, 1 }
  uselistorder i8* %stack_var_-16.0.reload, { 1, 0 }
  uselistorder i32 %stack_var_-20.0.reload, { 2, 1, 0, 3 }
  uselistorder i32 %stack_var_-24.0.reload, { 4, 0, 1, 3, 5, 2 }
  uselistorder i32* %52, { 1, 0 }
  uselistorder i32 %34, { 2, 1, 0, 3 }
  uselistorder i32 %4, { 3, 4, 5, 2, 6, 1, 7, 0, 8, 9, 10 }
  uselistorder i32* %stack_var_-56, { 0, 2, 1 }
  uselistorder i8** %stack_var_-16.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-24.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-28.0.reg2mem, { 1, 0, 2 }
  uselistorder i8** %stack_var_-16.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-20.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 2, 1, 3, 4 }
  uselistorder i32* %stack_var_-24.1.reg2mem, { 0, 2, 1, 3, 4 }
  uselistorder i32* %stack_var_-12.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32 ()* @__asm_nop, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 2, 1, 0, 3 }
  uselistorder i32 65535, { 1, 0 }
  uselistorder i32 (i32)* @close, { 3, 2, 1, 0, 4 }
  uselistorder i8* (i32)* @strerror, { 6, 5, 4, 3, 2, 1, 0, 7 }
  uselistorder i32* ()* @__errno_location, { 6, 0, 3, 4, 5, 1, 2, 7 }
  uselistorder i32 (i8*, ...)* @printf, { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_111ac, { 1, 0, 2 }
  uselistorder label %dec_label_pc_11168, { 1, 0, 2, 3 }
}

define i32 @function_111c4(i32 %arg1) local_unnamed_addr {
dec_label_pc_111c4:
  %.in.in.reg2mem = alloca i32, !insn.addr !216
  %storemerge.reg2mem = alloca i32, !insn.addr !216
  store i32 %arg1, i32* %storemerge.reg2mem, !insn.addr !217
  br label %dec_label_pc_111e4, !insn.addr !217

dec_label_pc_111e4:                               ; preds = %dec_label_pc_111e4, %dec_label_pc_111c4
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %0 = call i16** @__ctype_b_loc(), !insn.addr !218
  %1 = load i16*, i16** %0, align 4, !insn.addr !219
  %2 = ptrtoint i16* %1 to i32, !insn.addr !219
  %3 = inttoptr i32 %storemerge.reload to i8*, !insn.addr !220
  %4 = load i8, i8* %3, align 1, !insn.addr !220
  %5 = zext i8 %4 to i32, !insn.addr !220
  %6 = mul i32 %5, 2, !insn.addr !221
  %7 = add i32 %6, %2, !insn.addr !222
  %8 = inttoptr i32 %7 to i16*, !insn.addr !223
  %9 = load i16, i16* %8, align 2, !insn.addr !223
  %10 = and i16 %9, 8192
  %11 = icmp eq i16 %10, 0, !insn.addr !224
  %12 = add i32 %storemerge.reload, 1, !insn.addr !225
  store i32 %12, i32* %storemerge.reg2mem, !insn.addr !226
  br i1 %11, label %dec_label_pc_11210, label %dec_label_pc_111e4, !insn.addr !226

dec_label_pc_11210:                               ; preds = %dec_label_pc_111e4
  %13 = call i32 @strlen(i8* %3), !insn.addr !227
  %14 = add i32 %13, %storemerge.reload, !insn.addr !228
  %15 = icmp ult i32 %storemerge.reload, %14, !insn.addr !229
  store i32 %14, i32* %.in.in.reg2mem, !insn.addr !230
  br i1 %15, label %dec_label_pc_11230, label %dec_label_pc_11280, !insn.addr !230

dec_label_pc_11230:                               ; preds = %dec_label_pc_11210, %dec_label_pc_11268.backedge
  %.in.in.reload = load i32, i32* %.in.in.reg2mem
  %.in = add i32 %.in.in.reload, -1
  %16 = inttoptr i32 %.in to i8*
  %17 = call i16** @__ctype_b_loc(), !insn.addr !231
  %18 = load i16*, i16** %17, align 4, !insn.addr !232
  %19 = ptrtoint i16* %18 to i32, !insn.addr !232
  %20 = load i8, i8* %16, align 1, !insn.addr !233
  %21 = zext i8 %20 to i32, !insn.addr !233
  %22 = mul i32 %21, 2, !insn.addr !234
  %23 = add i32 %22, %19, !insn.addr !235
  %24 = inttoptr i32 %23 to i16*, !insn.addr !236
  %25 = load i16, i16* %24, align 2, !insn.addr !236
  %26 = and i16 %25, 8192
  %27 = icmp eq i16 %26, 0, !insn.addr !237
  br i1 %27, label %dec_label_pc_11268.backedge, label %dec_label_pc_1125c, !insn.addr !238

dec_label_pc_11268.backedge:                      ; preds = %dec_label_pc_11230, %dec_label_pc_1125c
  %28 = icmp ult i32 %storemerge.reload, %.in, !insn.addr !229
  store i32 %.in, i32* %.in.in.reg2mem, !insn.addr !230
  br i1 %28, label %dec_label_pc_11230, label %dec_label_pc_11280, !insn.addr !230

dec_label_pc_1125c:                               ; preds = %dec_label_pc_11230
  store i8 0, i8* %16, align 1, !insn.addr !239
  br label %dec_label_pc_11268.backedge, !insn.addr !239

dec_label_pc_11280:                               ; preds = %dec_label_pc_11268.backedge, %dec_label_pc_11210
  ret i32 %storemerge.reload, !insn.addr !240

; uselistorder directives
  uselistorder i8* %16, { 1, 0 }
  uselistorder i32 %.in, { 0, 2, 1 }
  uselistorder i32 %storemerge.reload, { 4, 3, 2, 5, 1, 0 }
  uselistorder i32* %storemerge.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.in.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
  uselistorder i16** ()* @__ctype_b_loc, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_11268.backedge, { 1, 0 }
  uselistorder label %dec_label_pc_11230, { 1, 0 }
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_11290:
  %storemerge.reg2mem = alloca i32, !insn.addr !241
  %stack_var_-18.0.reg2mem = alloca i32, !insn.addr !241
  %stack_var_-24.2.reg2mem = alloca i32, !insn.addr !241
  %stack_var_-16.0.reg2mem = alloca i8*, !insn.addr !241
  %stack_var_-24.1.reg2mem = alloca i32, !insn.addr !241
  %stack_var_-12.0.reg2mem = alloca i8*, !insn.addr !241
  %stack_var_-24.0.reg2mem = alloca i32, !insn.addr !241
  %r1.0.reg2mem = alloca i32, !insn.addr !241
  %0 = icmp slt i32 %argc, 2, !insn.addr !242
  store i32 1, i32* %stack_var_-24.0.reg2mem, !insn.addr !242
  br i1 %0, label %dec_label_pc_113c8, label %dec_label_pc_112d8, !insn.addr !242

dec_label_pc_112d8:                               ; preds = %dec_label_pc_11290
  %1 = ptrtoint i8** %argv to i32
  %2 = add i32 %1, 4
  %3 = inttoptr i32 %2 to i32*
  %4 = load i32, i32* %3, align 4, !insn.addr !243
  %5 = inttoptr i32 %4 to i8*, !insn.addr !244
  %6 = call i32 @strcmp(i8* %5, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_11704, i32 0, i32 0)), !insn.addr !244
  %7 = icmp eq i32 %6, 0, !insn.addr !245
  store i32 ptrtoint ([3 x i8]* @global_var_11704 to i32), i32* %r1.0.reg2mem, !insn.addr !246
  br i1 %7, label %dec_label_pc_11350, label %dec_label_pc_11300, !insn.addr !246

dec_label_pc_11300:                               ; preds = %dec_label_pc_112d8
  %8 = load i32, i32* %3, align 4, !insn.addr !247
  %9 = inttoptr i32 %8 to i8*, !insn.addr !248
  %10 = call i32 @strcmp(i8* %9, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_11708, i32 0, i32 0)), !insn.addr !248
  %11 = icmp eq i32 %10, 0, !insn.addr !249
  store i32 ptrtoint ([3 x i8]* @global_var_11708 to i32), i32* %r1.0.reg2mem, !insn.addr !250
  br i1 %11, label %dec_label_pc_11350, label %dec_label_pc_11328, !insn.addr !250

dec_label_pc_11328:                               ; preds = %dec_label_pc_11300
  %12 = load i32, i32* %3, align 4, !insn.addr !251
  %13 = inttoptr i32 %12 to i8*, !insn.addr !252
  %14 = call i32 @strcmp(i8* %13, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_1170c, i32 0, i32 0)), !insn.addr !252
  %15 = icmp eq i32 %14, 0, !insn.addr !253
  store i32 ptrtoint ([7 x i8]* @global_var_1170c to i32), i32* %r1.0.reg2mem, !insn.addr !254
  br i1 %15, label %dec_label_pc_11350, label %dec_label_pc_11388, !insn.addr !254

dec_label_pc_11350:                               ; preds = %dec_label_pc_11328, %dec_label_pc_11300, %dec_label_pc_112d8
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %16 = load %_IO_FILE*, %_IO_FILE** @global_var_22080, align 4, !insn.addr !255
  %17 = inttoptr i32 %r1.0.reload to i8*, !insn.addr !256
  %18 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %16, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_11714, i32 0, i32 0), i8* %17), !insn.addr !256
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !257
  br label %dec_label_pc_114d0, !insn.addr !257

dec_label_pc_11388:                               ; preds = %dec_label_pc_11328
  %19 = load i32, i32* %3, align 4, !insn.addr !258
  %20 = inttoptr i32 %19 to i8*, !insn.addr !259
  %21 = call i32 @strcmp(i8* %20, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_1173c, i32 0, i32 0)), !insn.addr !259
  %22 = icmp eq i32 %21, 0, !insn.addr !260
  store i32 1, i32* %stack_var_-24.0.reg2mem, !insn.addr !261
  br i1 %22, label %dec_label_pc_113b0, label %dec_label_pc_113c8, !insn.addr !261

dec_label_pc_113b0:                               ; preds = %dec_label_pc_11388
  store i32 1, i32* @global_var_22088, align 4, !insn.addr !262
  store i32 2, i32* %stack_var_-24.0.reg2mem, !insn.addr !263
  br label %dec_label_pc_113c8, !insn.addr !263

dec_label_pc_113c8:                               ; preds = %dec_label_pc_11290, %dec_label_pc_11388, %dec_label_pc_113b0
  %stack_var_-24.0.reload = load i32, i32* %stack_var_-24.0.reg2mem
  %23 = icmp slt i32 %stack_var_-24.0.reload, %argc, !insn.addr !264
  store i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_116f0, i32 0, i32 0), i8** %stack_var_-12.0.reg2mem, !insn.addr !264
  store i32 %stack_var_-24.0.reload, i32* %stack_var_-24.1.reg2mem, !insn.addr !264
  br i1 %23, label %dec_label_pc_113d8, label %dec_label_pc_11418, !insn.addr !264

dec_label_pc_113d8:                               ; preds = %dec_label_pc_113c8
  %24 = add nuw nsw i32 %stack_var_-24.0.reload, 1, !insn.addr !265
  %25 = mul i32 %stack_var_-24.0.reload, 4, !insn.addr !266
  %26 = ptrtoint i8** %argv to i32, !insn.addr !267
  %27 = add i32 %25, %26, !insn.addr !268
  %28 = inttoptr i32 %27 to i32*, !insn.addr !269
  %29 = load i32, i32* %28, align 4, !insn.addr !269
  %30 = call i32 @function_111c4(i32 %29), !insn.addr !270
  %31 = inttoptr i32 %30 to i8*, !insn.addr !271
  %32 = load i8, i8* %31, align 1, !insn.addr !272
  %33 = icmp eq i8 %32, 0, !insn.addr !273
  %spec.select = select i1 %33, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_116f0, i32 0, i32 0), i8* %31
  store i8* %spec.select, i8** %stack_var_-12.0.reg2mem
  store i32 %24, i32* %stack_var_-24.1.reg2mem
  br label %dec_label_pc_11418

dec_label_pc_11418:                               ; preds = %dec_label_pc_113d8, %dec_label_pc_113c8
  %stack_var_-24.1.reload = load i32, i32* %stack_var_-24.1.reg2mem
  %stack_var_-12.0.reload = load i8*, i8** %stack_var_-12.0.reg2mem
  %34 = icmp slt i32 %stack_var_-24.1.reload, %argc, !insn.addr !274
  store i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_116f8, i32 0, i32 0), i8** %stack_var_-16.0.reg2mem, !insn.addr !274
  store i32 %stack_var_-24.1.reload, i32* %stack_var_-24.2.reg2mem, !insn.addr !274
  br i1 %34, label %dec_label_pc_11428, label %dec_label_pc_11468, !insn.addr !274

dec_label_pc_11428:                               ; preds = %dec_label_pc_11418
  %35 = add nsw i32 %stack_var_-24.1.reload, 1, !insn.addr !275
  %36 = mul i32 %stack_var_-24.1.reload, 4, !insn.addr !276
  %37 = ptrtoint i8** %argv to i32, !insn.addr !277
  %38 = add i32 %36, %37, !insn.addr !278
  %39 = inttoptr i32 %38 to i32*, !insn.addr !279
  %40 = load i32, i32* %39, align 4, !insn.addr !279
  %41 = call i32 @function_111c4(i32 %40), !insn.addr !280
  %42 = inttoptr i32 %41 to i8*, !insn.addr !281
  %43 = load i8, i8* %42, align 1, !insn.addr !282
  %44 = icmp eq i8 %43, 0, !insn.addr !283
  %spec.select5 = select i1 %44, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_116f8, i32 0, i32 0), i8* %42
  store i8* %spec.select5, i8** %stack_var_-16.0.reg2mem
  store i32 %35, i32* %stack_var_-24.2.reg2mem
  br label %dec_label_pc_11468

dec_label_pc_11468:                               ; preds = %dec_label_pc_11428, %dec_label_pc_11418
  %stack_var_-24.2.reload = load i32, i32* %stack_var_-24.2.reg2mem
  %stack_var_-16.0.reload = load i8*, i8** %stack_var_-16.0.reg2mem
  %45 = icmp slt i32 %stack_var_-24.2.reload, %argc, !insn.addr !284
  store i32 4028, i32* %stack_var_-18.0.reg2mem, !insn.addr !284
  br i1 %45, label %dec_label_pc_11478, label %dec_label_pc_114b8, !insn.addr !284

dec_label_pc_11478:                               ; preds = %dec_label_pc_11468
  %46 = mul i32 %stack_var_-24.2.reload, 4, !insn.addr !285
  %47 = ptrtoint i8** %argv to i32, !insn.addr !286
  %48 = add i32 %46, %47, !insn.addr !287
  %49 = inttoptr i32 %48 to i32*, !insn.addr !288
  %50 = load i32, i32* %49, align 4, !insn.addr !288
  %51 = call i32 @function_111c4(i32 %50), !insn.addr !289
  %52 = inttoptr i32 %51 to i8*, !insn.addr !290
  %53 = load i8, i8* %52, align 1, !insn.addr !291
  %54 = icmp eq i8 %53, 0, !insn.addr !292
  store i32 4028, i32* %stack_var_-18.0.reg2mem, !insn.addr !293
  br i1 %54, label %dec_label_pc_114b8, label %dec_label_pc_114a8, !insn.addr !293

dec_label_pc_114a8:                               ; preds = %dec_label_pc_11478
  %55 = call i32 @atoi(i8* %52), !insn.addr !294
  %56 = mul i32 %55, 65536
  %phitmp = ashr exact i32 %56, 16
  store i32 %phitmp, i32* %stack_var_-18.0.reg2mem, !insn.addr !295
  br label %dec_label_pc_114b8, !insn.addr !295

dec_label_pc_114b8:                               ; preds = %dec_label_pc_11468, %dec_label_pc_114a8, %dec_label_pc_11478
  %stack_var_-18.0.reload = load i32, i32* %stack_var_-18.0.reg2mem
  %57 = ptrtoint i8* %stack_var_-16.0.reload to i32, !insn.addr !296
  %58 = ptrtoint i8* %stack_var_-12.0.reload to i32, !insn.addr !297
  %59 = call i32 @callapi(i32 %58, i32 %57, i32 %stack_var_-18.0.reload), !insn.addr !298
  store i32 %59, i32* %storemerge.reg2mem, !insn.addr !299
  br label %dec_label_pc_114d0, !insn.addr !299

dec_label_pc_114d0:                               ; preds = %dec_label_pc_114b8, %dec_label_pc_11350
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !300

; uselistorder directives
  uselistorder i32 %stack_var_-24.2.reload, { 1, 0 }
  uselistorder i32 %stack_var_-24.1.reload, { 3, 1, 0, 2 }
  uselistorder i32 %stack_var_-24.0.reload, { 3, 1, 0, 2 }
  uselistorder i32* %stack_var_-24.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %stack_var_-18.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 65536, { 0, 3, 1, 2 }
  uselistorder i32 4028, { 1, 0 }
  uselistorder i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_116f8, i32 0, i32 0), { 1, 0 }
  uselistorder i8 0, { 0, 1, 2, 3, 4, 7, 5, 8, 6, 9 }
  uselistorder i32 (i32)* @function_111c4, { 2, 1, 0 }
  uselistorder i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_116f0, i32 0, i32 0), { 1, 0 }
  uselistorder [7 x i8]* @global_var_1170c, { 1, 0 }
  uselistorder [3 x i8]* @global_var_11708, { 1, 0 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 3, 2, 1, 0, 4 }
  uselistorder [3 x i8]* @global_var_11704, { 1, 0 }
  uselistorder i8** %argv, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_114b8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_113c8, { 2, 1, 0 }
}

define i32 @__libc_csu_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_114dc:
  %0 = call i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !301
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 139026, i32 ptrtoint (i32* @global_var_21f10 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !302

; uselistorder directives
  uselistorder i32 0, { 11, 22, 23, 24, 25, 65, 12, 13, 14, 15, 66, 16, 17, 67, 18, 19, 68, 20, 21, 69, 26, 27, 70, 28, 29, 71, 56, 30, 31, 0, 1, 32, 33, 34, 35, 57, 58, 36, 37, 72, 38, 39, 73, 40, 41, 74, 42, 43, 75, 59, 44, 45, 60, 46, 47, 4, 5, 48, 49, 50, 51, 52, 53, 76, 2, 6, 9, 8, 62, 10, 63, 64, 3, 7, 77, 54, 55, 61 }
  uselistorder i32 2, { 4, 0, 5, 1, 2, 6, 7, 8, 3 }
}

define i32 @__libc_csu_fini() local_unnamed_addr {
dec_label_pc_11518:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !303

; uselistorder directives
  uselistorder i32 1, { 4, 64, 65, 53, 16, 8, 15, 18, 17, 14, 13, 12, 11, 10, 9, 63, 20, 19, 66, 30, 31, 21, 22, 27, 54, 55, 56, 51, 23, 24, 57, 25, 61, 60, 59, 38, 37, 36, 35, 34, 33, 32, 29, 28, 26, 52, 67, 68, 69, 70, 45, 44, 43, 42, 41, 40, 39, 3, 46, 2, 50, 49, 48, 47, 7, 6, 5, 1, 0, 62, 58 }
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1151c:
  ret i32 %arg1, !insn.addr !304
}

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i16 @htons(i16) local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i8* @strerror(i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i16** @__ctype_b_loc() local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @atoi(i8*) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare %hostent* @gethostbyname(i8*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @recv(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @send(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @connect(i32, %sockaddr*, i32) local_unnamed_addr

declare i32 @__asm_nop() local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare double @__asm_vaddhn.i16(fp128, fp128) local_unnamed_addr

!0 = !{i64 67840}
!1 = !{i64 67844}
!2 = !{i64 67876}
!3 = !{i64 67888}
!4 = !{i64 67900}
!5 = !{i64 67912}
!6 = !{i64 67924}
!7 = !{i64 67936}
!8 = !{i64 67948}
!9 = !{i64 67960}
!10 = !{i64 67972}
!11 = !{i64 67984}
!12 = !{i64 67996}
!13 = !{i64 68008}
!14 = !{i64 68020}
!15 = !{i64 68032}
!16 = !{i64 68044}
!17 = !{i64 68056}
!18 = !{i64 68068}
!19 = !{i64 68080}
!20 = !{i64 68092}
!21 = !{i64 68104}
!22 = !{i64 68116}
!23 = !{i64 68128}
!24 = !{i64 68140}
!25 = !{i64 68152}
!26 = !{i64 68164}
!27 = !{i64 68196}
!28 = !{i64 68200}
!29 = !{i64 68206}
!30 = !{i64 68228}
!31 = !{i64 68232}
!32 = !{i64 68236}
!33 = !{i64 68240}
!34 = !{i64 68252}
!35 = !{i64 68284}
!36 = !{i64 68304}
!37 = !{i64 68308}
!38 = !{i64 68316}
!39 = !{i64 68328}
!40 = !{i64 68332}
!41 = !{i64 68336}
!42 = !{i64 68340}
!43 = !{i64 68344}
!44 = !{i64 68346}
!45 = !{i64 68352}
!46 = !{i64 68354}
!47 = !{i64 68356}
!48 = !{i64 68360}
!49 = !{i64 68816}
!50 = !{i64 68820}
!51 = !{i64 68392}
!52 = !{i64 68404}
!53 = !{i64 68408}
!54 = !{i64 68412}
!55 = !{i64 68416}
!56 = !{i64 68420}
!57 = !{i64 68428}
!58 = !{i64 68436}
!59 = !{i64 68440}
!60 = !{i64 68772}
!61 = !{i64 68444}
!62 = !{i64 68480}
!63 = !{i64 68492}
!64 = !{i64 68496}
!65 = !{i64 68500}
!66 = !{i64 68504}
!67 = !{i64 68508}
!68 = !{i64 68516}
!69 = !{i64 68524}
!70 = !{i64 68528}
!71 = !{i64 68532}
!72 = !{i64 68548}
!73 = !{i64 68560}
!74 = !{i64 68564}
!75 = !{i64 68568}
!76 = !{i64 68572}
!77 = !{i64 68576}
!78 = !{i64 68584}
!79 = !{i64 68592}
!80 = !{i64 68596}
!81 = !{i64 68604}
!82 = !{i64 68608}
!83 = !{i64 68612}
!84 = !{i64 68620}
!85 = !{i64 68628}
!86 = !{i64 68632}
!87 = !{i64 68636}
!88 = !{i64 68640}
!89 = !{i64 68648}
!90 = !{i64 68652}
!91 = !{i64 68656}
!92 = !{i64 68660}
!93 = !{i64 68688}
!94 = !{i64 68696}
!95 = !{i64 68700}
!96 = !{i64 68720}
!97 = !{i64 68724}
!98 = !{i64 68744}
!99 = !{i64 68760}
!100 = !{i64 68776}
!101 = !{i64 68788}
!102 = !{i64 68800}
!103 = !{i64 68804}
!104 = !{i64 68824}
!105 = !{i64 68832}
!106 = !{i64 68836}
!107 = !{i64 68884}
!108 = !{i64 68896}
!109 = !{i64 68900}
!110 = !{i64 68916}
!111 = !{i64 68924}
!112 = !{i64 68940}
!113 = !{i64 68952}
!114 = !{i64 68956}
!115 = !{i64 68960}
!116 = !{i64 68968}
!117 = !{i64 68976}
!118 = !{i64 68996}
!119 = !{i64 69004}
!120 = !{i64 69024}
!121 = !{i64 69032}
!122 = !{i64 69064}
!123 = !{i64 69092}
!124 = !{i64 69100}
!125 = !{i64 69104}
!126 = !{i64 69108}
!127 = !{i64 69116}
!128 = !{i64 69124}
!129 = !{i64 69144}
!130 = !{i64 69152}
!131 = !{i64 69172}
!132 = !{i64 69204}
!133 = !{i64 69216}
!134 = !{i64 69220}
!135 = !{i64 69224}
!136 = !{i64 69232}
!137 = !{i64 69240}
!138 = !{i64 69260}
!139 = !{i64 69268}
!140 = !{i64 69276}
!141 = !{i64 69316}
!142 = !{i64 69328}
!143 = !{i64 69332}
!144 = !{i64 69336}
!145 = !{i64 69344}
!146 = !{i64 69352}
!147 = !{i64 69372}
!148 = !{i64 69380}
!149 = !{i64 69412}
!150 = !{i64 69424}
!151 = !{i64 69428}
!152 = !{i64 69432}
!153 = !{i64 69440}
!154 = !{i64 69448}
!155 = !{i64 69468}
!156 = !{i64 69476}
!157 = !{i64 69484}
!158 = !{i64 69504}
!159 = !{i64 69520}
!160 = !{i64 69524}
!161 = !{i64 69532}
!162 = !{i64 69540}
!163 = !{i64 69560}
!164 = !{i64 69572}
!165 = !{i64 69580}
!166 = !{i64 69592}
!167 = !{i64 69596}
!168 = !{i64 69620}
!169 = !{i64 69636}
!170 = !{i64 69640}
!171 = !{i64 69664}
!172 = !{i64 69672}
!173 = !{i64 69688}
!174 = !{i64 69700}
!175 = !{i64 69704}
!176 = !{i64 69716}
!177 = !{i64 69728}
!178 = !{i64 69740}
!179 = !{i64 69752}
!180 = !{i64 69756}
!181 = !{i64 69780}
!182 = !{i64 69788}
!183 = !{i64 69792}
!184 = !{i64 69800}
!185 = !{i64 69812}
!186 = !{i64 69824}
!187 = !{i64 69836}
!188 = !{i64 69840}
!189 = !{i64 69852}
!190 = !{i64 69860}
!191 = !{i64 69868}
!192 = !{i64 69888}
!193 = !{i64 69892}
!194 = !{i64 69900}
!195 = !{i64 69904}
!196 = !{i64 69924}
!197 = !{i64 69928}
!198 = !{i64 69940}
!199 = !{i64 69956}
!200 = !{i64 69960}
!201 = !{i64 69968}
!202 = !{i64 69980}
!203 = !{i64 69988}
!204 = !{i64 70000}
!205 = !{i64 70008}
!206 = !{i64 70020}
!207 = !{i64 70024}
!208 = !{i64 70028}
!209 = !{i64 70036}
!210 = !{i64 70040}
!211 = !{i64 70048}
!212 = !{i64 70056}
!213 = !{i64 70064}
!214 = !{i64 70068}
!215 = !{i64 70080}
!216 = !{i64 70084}
!217 = !{i64 70100}
!218 = !{i64 70116}
!219 = !{i64 70124}
!220 = !{i64 70132}
!221 = !{i64 70136}
!222 = !{i64 70140}
!223 = !{i64 70144}
!224 = !{i64 70152}
!225 = !{i64 70108}
!226 = !{i64 70156}
!227 = !{i64 70164}
!228 = !{i64 70180}
!229 = !{i64 70264}
!230 = !{i64 70268}
!231 = !{i64 70192}
!232 = !{i64 70200}
!233 = !{i64 70208}
!234 = !{i64 70212}
!235 = !{i64 70216}
!236 = !{i64 70220}
!237 = !{i64 70228}
!238 = !{i64 70232}
!239 = !{i64 70244}
!240 = !{i64 70284}
!241 = !{i64 70288}
!242 = !{i64 70356}
!243 = !{i64 70368}
!244 = !{i64 70384}
!245 = !{i64 70392}
!246 = !{i64 70396}
!247 = !{i64 70408}
!248 = !{i64 70424}
!249 = !{i64 70432}
!250 = !{i64 70436}
!251 = !{i64 70448}
!252 = !{i64 70464}
!253 = !{i64 70472}
!254 = !{i64 70476}
!255 = !{i64 70488}
!256 = !{i64 70512}
!257 = !{i64 70520}
!258 = !{i64 70544}
!259 = !{i64 70560}
!260 = !{i64 70568}
!261 = !{i64 70572}
!262 = !{i64 70588}
!263 = !{i64 70596}
!264 = !{i64 70612}
!265 = !{i64 70620}
!266 = !{i64 70628}
!267 = !{i64 70632}
!268 = !{i64 70636}
!269 = !{i64 70640}
!270 = !{i64 70648}
!271 = !{i64 70652}
!272 = !{i64 70660}
!273 = !{i64 70664}
!274 = !{i64 70692}
!275 = !{i64 70700}
!276 = !{i64 70708}
!277 = !{i64 70712}
!278 = !{i64 70716}
!279 = !{i64 70720}
!280 = !{i64 70728}
!281 = !{i64 70732}
!282 = !{i64 70740}
!283 = !{i64 70744}
!284 = !{i64 70772}
!285 = !{i64 70780}
!286 = !{i64 70784}
!287 = !{i64 70788}
!288 = !{i64 70792}
!289 = !{i64 70800}
!290 = !{i64 70804}
!291 = !{i64 70812}
!292 = !{i64 70816}
!293 = !{i64 70820}
!294 = !{i64 70828}
!295 = !{i64 70836}
!296 = !{i64 70848}
!297 = !{i64 70852}
!298 = !{i64 70856}
!299 = !{i64 70860}
!300 = !{i64 70872}
!301 = !{i64 70892}
!302 = !{i64 70924}
!303 = !{i64 70936}
!304 = !{i64 70944}

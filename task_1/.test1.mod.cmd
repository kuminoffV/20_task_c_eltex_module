savedcmd_/home/kuminoff/eltex/make/test1.mod := printf '%s\n'   test1.o | awk '!x[$$0]++ { print("/home/kuminoff/eltex/make/"$$0) }' > /home/kuminoff/eltex/make/test1.mod

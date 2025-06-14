#!/bin/bash

echo "CLEAR ALL: RUN!" > clear.log

rm -rfv _bin/{*,.*} >> clear.log
rm -rfv _bld/{*,.*} >> clear.log

echo "CLEAR ALL: DONE!" >> clear.log

#kill -9 $PPID

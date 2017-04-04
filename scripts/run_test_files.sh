#!/usr/bin/env bash
set -e
set -u

OUT=/tmp/run_test_files.sh

cat << EOF > $OUT
#!/usr/bin/env bash
set -e
function aterror {
	echo "ERRORS encountered"
}

trap aterror ERR
EOF

awk -vpath=$TEST_DATA_PATH '$1!~/^#/{print "./"$1, path"/"$2, "--max-events=1000"}' unpacker_lmd_corr >> $OUT
chmod +x $OUT

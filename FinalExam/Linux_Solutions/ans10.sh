#!/bin/bash
awk '{total+=NF}END{print total " words"}'

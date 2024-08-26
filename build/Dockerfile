FROM nginx:stable-alpine
ENV TZ=Europe/Madrid
RUN apk add --no-cache python3 py3-pip && \
    pip3 install flask sqlite3
RUN rm -rf /usr/share/nginx/html/*
COPY web/ /usr/share/nginx/html/
COPY web/nginx/nginx.conf /etc/nginx/nginx.conf
COPY web/src/app.py /app/app.py
RUN mkdir -p /var/cache/nginx/client_temp /var/cache/nginx/proxy_temp /var/cache/nginx/fastcgi_temp /var/cache/nginx/uwsgi_temp /var/cache/nginx/scgi_temp /var/run /var/log/nginx /app && \
    chmod -R 755 /var/cache/nginx /var/run /var/log/nginx /app && \
    chown -R nginx:nginx /var/cache/nginx /var/run /var/log/nginx /app
USER nginx
EXPOSE 80 5000
CMD ["sh", "-c", "nginx & python3 /app/app.py"]